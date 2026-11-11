/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UTGame_structs.h
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

// ScriptStruct UTGame.UTConsolePlayerController.ProfileSettingToUE3BindingDatum
// 0x0010
struct FProfileSettingToUE3BindingDatum
{
	struct FName                                       ProfileSettingName;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       UE3BindingName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTPlayerController.PostProcessInfo
// 0x0010
struct FPostProcessInfo
{
	float                                              Shadows;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MidTones;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              HighLights;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Desaturation;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.TrainInfo
// 0x0014
struct FTrainInfo
{
	unsigned char                                      nModeId;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                BeginNewerGameTimes;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FinishNewerGameTimes;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DropoutNewerGameTimes;                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TimeoutNewerGameTimes;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.ReportTryWeaponInfo
// 0x0008
struct FReportTryWeaponInfo
{
	int                                                WeaponItemId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TryTimeSeconds;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.ReportClientData
// 0x00D8
struct FReportClientData
{
	int                                                EnterShopTimes;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OnlineKeepTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InGameTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                InChannelTime;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                InRoomListTime;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                InRoomTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                InShopTime;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                InAvatarRoomTime;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                InTeamTime;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                InTaskTime;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                InActivityUITime;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                InRankListUITime;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                InAchievementTime;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                InSingleMatchUITime;                              		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                InSingleMatchGameTime;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                InTeamMatchUITime;                                		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                InTeamMatchGameTime;                              		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                AdjustClientPosBetween010;                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                AdjustClientPosBetween1025;                       		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                AdjustClientPosBetween2550;                       		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                AdjustClientPosBetween50100;                      		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                AdjustClientPosOver100;                           		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                AveragePing;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                CtrlKeyChangeTime;                                		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                ShiftKeyChangeTime;                               		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                SpaceKeyChangeTime;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                EKeyChangeTime;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                FKeyChangeTime;                                   		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                VKeyChangeTime;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                FriendInviteTimes;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                FriendTraceTimes;                                 		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                LocalInviteTimes;                                 		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                TankOpModeNoramlTime;                             		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                TankOpModeMouseTime;                              		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                wQTTimesEnter;                                    		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                wPVETimes;                                        		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                wQTPVETimes;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                wPMTimes;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                wQTPMTimes;                                       		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                wQTSelfEnterTimes;                                		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                wCrossTimes;                                      		// 0x00A0 (0x0004) [0x0000000000000000]              
	TArray< int >                                      CrossSlowTimeList;                                		// 0x00A4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTrainInfo >                        stTrainData;                                      		// 0x00B0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FReportTryWeaponInfo >              TryWeaponData;                                    		// 0x00BC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                StartGameFromNewGuideTime;                        		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                MusicInLobbyType;                                 		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                CharacterPullTimes;                               		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                CharacterOptimizeTimes;                           		// 0x00D4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGKickPlayerManager.PlayerKickData
// 0x0018
struct FPlayerKickData
{
	struct FString                                     BeKickedUin;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BeVotedCount;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TargetVoteCount;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CampPlayerCount;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGKickPlayerManager.PlayerVoteRecord
// 0x0018
struct FPlayerVoteRecord
{
	struct FString                                     VoterUin;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           BeVotedUins;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTacticalCommandManager.TacticalCmdSoundConfig
// 0x001C
struct FTacticalCmdSoundConfig
{
	unsigned char                                      CampID;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Gender;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	TArray< int >                                      GameModeIDArray;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LoadSoundDataIndexList;                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTacticalCommandManager.TacticCmdSoundData
// 0x0024
struct FTacticCmdSoundData
{
	unsigned char                                      CampID;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Gender;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                CmdID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     SoundCue_INT_Name;                                		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SoundCue_LOC_Name;                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   LoadSoundCue;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGTacticalCommandManager.SpecailTacticalCmdSoundConfig
// 0x0010
struct FSpecailTacticalCmdSoundConfig
{
	unsigned char                                      CampID;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Gender;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	TArray< int >                                      LoadSoundDataIndexList;                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTacticalCommandManager.TacticCmdData
// 0x0024
struct FTacticCmdData
{
	int                                                CmdID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      CmdType;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      CmdIndex;                                         		// 0x0005 (0x0001) [0x0000000000000000]              
	TArray< int >                                      GameModeIDArray;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CampID;                                           		// 0x0014 (0x0001) [0x0000000000000000]              
	struct FString                                     CmdText;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineSubsystem.MatchGameSettings
// 0x0020
struct FMatchGameSettings
{
	int                                                ModeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SubModeId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RuleType;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RuleValue;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RespawnTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RecodeType;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineSubsystem.PlusMatchGameSettings
// 0x0004
struct FPlusMatchGameSettings
{
	int                                                Flags;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineSubsystem.PvPGameServerInfo
// 0x000C
struct FPvPGameServerInfo
{
	struct FString                                     SAP;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.MultiGameRoomInfo
// 0x0062
struct FMultiGameRoomInfo
{
	struct FQWord                                      RoomID;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FQWord                                      QTalkRoomId;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     RoomName;                                         		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FMatchGameSettings                          GameSettings;                                     		// 0x001C (0x0020) [0x0000000000000000]              
	struct FPlusMatchGameSettings                      GameSettingsPlus;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     Password;                                         		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPvPGameServerInfo                          GameServerInfo;                                   		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RoomItemId;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned char                                      RoomState;                                        		// 0x005C (0x0001) [0x0000000000000000]              
	unsigned char                                      MaxPlayerNumber;                                  		// 0x005D (0x0001) [0x0000000000000000]              
	unsigned char                                      MaxSpeculatorNumber;                              		// 0x005E (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentPlayerNumber;                              		// 0x005F (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentSpeculatorNumber;                          		// 0x0060 (0x0001) [0x0000000000000000]              
	unsigned char                                      Dummy;                                            		// 0x0061 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerIdentity
// 0x0004
struct FPlayerIdentity
{
	unsigned long                                      bNormal : 1;                                      		// 0x0000 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bVIP : 1;                                         		// 0x0000 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bTeam : 1;                                        		// 0x0000 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bGoldBar : 1;                                     		// 0x0000 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bSilverBar : 1;                                   		// 0x0000 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bBronzeBar : 1;                                   		// 0x0000 (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	unsigned long                                      bGMPlayer : 1;                                    		// 0x0000 (0x0004) [0x0000000000000002] [0x00000040] ( CPF_Const )
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerPrivateInfo
// 0x0008
struct FPlayerPrivateInfo
{
	unsigned long                                      bRecieveMessageFromStranger : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRecieveFriendOnlineMessage : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRecieveTeammateOnlineMessage : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanBeFoundByUin : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAllowFollowbyFriend : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAllowFollowbyStranger : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                IdentitySetting;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.UniquePropId
// 0x0010
struct FUniquePropId
{
	int                                                High;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Low;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Value[ 0x8 ];                                     		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.TalkingList
// 0x0018
struct FTalkingList
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlinePlayerData.DataTime
// 0x0009
struct FDataTime
{
	int                                                Year;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Month;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Day;                                              		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      Hour;                                             		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      Minute;                                           		// 0x0007 (0x0001) [0x0000000000000000]              
	unsigned char                                      Seconds;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerPropInfo
// 0x0068
struct FPlayerPropInfo
{
	struct FUniquePropId                               PropId;                                           		// 0x0000 (0x0010) [0x0000000000000002]              ( CPF_Const )
	int                                                ResourceIdIndex;                                  		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FUniquePropId                               OwnerPropId;                                      		// 0x0014 (0x0010) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LocationInOwner;                                  		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      RepairType;                                       		// 0x0025 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                StackNumber;                                      		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bDiscardable : 1;                                 		// 0x002C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bDefaultItem : 1;                                 		// 0x002C (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	int                                                ConsumeType;                                      		// 0x0030 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Durability;                                       		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DurabilityMax;                                    		// 0x0038 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                UsedHour;                                         		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AvailabilityHour;                                 		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RepairPrice;                                      		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RepairPrice1;                                     		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                PropGainType;                                     		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FQWord                                      ResourceID;                                       		// 0x0050 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bNew : 1;                                         		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDataTime                                   DueDataTime;                                      		// 0x005C (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGOnlineTeamData.PackedBadgeInfo
// 0x0018
struct FPackedBadgeInfo
{
	unsigned char                                      BadgeTypes;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                BadgeItemID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SelectedIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     BadgePath;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGAvatarChar_Data.AvatarCharData
// 0x0034
struct FAvatarCharData
{
	int                                                FamilyID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FUniquePropId >                     ItemEquipIDs;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUniquePropId >                     ItemIDs;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemEquipItemIDs;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemItemIDs;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGAvatarChar_Data.SingleBag
// 0x004C
struct FSingleBag
{
	unsigned long                                      bInit : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FUniquePropId                               BagId;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                BagItemID;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< struct FUniquePropId >                     Data;                                             		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      DataItemIDs;                                      		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FUniquePropId >                     SkillEquipIDs;                                    		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SkillEquipItemIDs;                                		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                EquipedGridNum;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGAvatarChar_Data.BagCharData
// 0x0014
struct FBagCharData
{
	int                                                DefaultBagIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSingleBag >                        Bags;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bBagExtended : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSkillExtented : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.TGAvatarChar_Data.SkillCharData
// 0x0020
struct FSkillCharData
{
	unsigned long                                      bHasExtented : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FUniquePropId >                     SkillEquipIDs;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SkillEquipItemIDs;                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EquipedGridNum;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGAvatarChar_Data.TeamBadgeCharData
// 0x0010
struct FTeamBadgeCharData
{
	unsigned long                                      bEquiped : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      BadgeEquipIconIDs;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGAvatarChar_Data.AvatarCharAIData
// 0x0028
struct FAvatarCharAIData
{
	float                                              Tactics;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StrafingAbility;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Accuracy;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Aggressiveness;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CombatStyle;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Jumpiness;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ReactionTime;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     FavoriteWeapon;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGAvatarChar_Data.AvatarCharInfo
// 0x00E8
struct FAvatarCharInfo
{
	int                                                AvatarCharID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFamilyID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CharID;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharName;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PreviewImageMarkup;                               		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Faction;                                          		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FAvatarCharData                             CharData;                                         		// 0x0044 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBagCharData                                BagCharData;                                      		// 0x0078 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSkillCharData                              SkillCharData;                                    		// 0x008C (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTeamBadgeCharData                          BadgeCharData;                                    		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FAvatarCharAIData                           AIData;                                           		// 0x00BC (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLocked : 1;                                      		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRestrictInSinglePlayer : 1;                      		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnStartMatch_Param
// 0x0004
struct FOnStartMatch_Param
{
	int                                                PlaceHolder;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnEnterMatch_Param
// 0x0004
struct FOnEnterMatch_Param
{
	int                                                PlaceHolder;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnStopMatch_Param
// 0x0014
struct FOnStopMatch_Param
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRequest : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayDemo : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                MatchType;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bEscaped : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKickoff : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTutorial : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTryWeapon : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnQuitMatch_Param
// 0x0014
struct FOnQuitMatch_Param
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRequest : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayDemo : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                MatchType;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bEscaped : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKickoff : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTutorial : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTryWeapon : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct UTGame.TGMapInfo.ViewPoint
// 0x0019
struct FViewPoint
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGMapInfo.FreeViewMoveRange
// 0x0008
struct FFreeViewMoveRange
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UTGame.UTEventCallbackParam.OnOpenGameVideo_Param
// 0x0004
struct FOnOpenGameVideo_Param
{
	int                                                ModeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnSwitchQTRoom_Param
// 0x000C
struct FOnSwitchQTRoom_Param
{
	unsigned long                                      IsEnter : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsInMatch : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                LastQTRoomType;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CurrentQTRoomType;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnClientViewTargetChanged_Param
// 0x0008
struct FOnClientViewTargetChanged_Param
{
	class AActor*                                      OldViewTarget;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      NewViewTarget;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineAchievement.PlayerCardInfo
// 0x0034
struct FPlayerCardInfo
{
	int                                                AchiCardID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TeamBadgeIcon;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TeamBadgeBorder;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TeamBadgeBg;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                PlayerExp;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OLLevel;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PrivacyFlags;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTCommonDataStruct.UTCDS_PingDSInfo
// 0x0010
struct FUTCDS_PingDSInfo
{
	int                                                MatchBusIP;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PingTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                IPV4;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x000C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct UTGame.UTCommonDataStruct.UTCDS_DSInfo
// 0x0014
struct FUTCDS_DSInfo
{
	unsigned long                                      bHadPing : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MatchBusIP;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DSHostIp1;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DSHostIp2;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AvgPingMs;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTCommonDataStruct.MessageBoxMessage
// 0x0054
struct FMessageBoxMessage
{
	int                                                Style;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnOk;                                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnCancel;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ShowInterval;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     OkText;                                           		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CancelText;                                       		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      AutoClose : 1;                                    		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.UTCommonDataStruct.LocalDate
// 0x0010
struct FLocalDate
{
	int                                                Year;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Month;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Date;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnDateChanged_Param
// 0x0020
struct FOnDateChanged_Param
{
	struct FLocalDate                                  Yestoday;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FLocalDate                                  Tomorrow;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnLogin_Param
// 0x0004
struct FOnLogin_Param
{
	unsigned long                                      bLogin : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnBeforeEnterLobby_Param
// 0x0004
struct FOnBeforeEnterLobby_Param
{
	unsigned long                                      bFirstTime : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLogin : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnEnterLobby_Param
// 0x0004
struct FOnEnterLobby_Param
{
	unsigned long                                      bFirstTime : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLogin : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnLeaveLobby_Param
// 0x0004
struct FOnLeaveLobby_Param
{
	unsigned long                                      bEnterMatch : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnAfterLeaveLobby_Param
// 0x0004
struct FOnAfterLeaveLobby_Param
{
	unsigned long                                      bFirstTime : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLogin : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnSetMultiRoomReturnBtnDisabled_Param
// 0x0008
struct FOnSetMultiRoomReturnBtnDisabled_Param
{
	unsigned long                                      bDisabled : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PlaceHolder;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnSetLobbyGameBtnStatus_Param
// 0x0004
struct FOnSetLobbyGameBtnStatus_Param
{
	int                                                CurPlayerStatus;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnEquipWithProp_Param
// 0x0018
struct FOnEquipWithProp_Param
{
	int                                                BagId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               PropId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                PropType;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnAchiCardChanged_Param
// 0x0004
struct FOnAchiCardChanged_Param
{
	int                                                NewCardID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGVoiceSoundDataManager.TGVoiceSoundData
// 0x0038
struct FTGVoiceSoundData
{
	struct FString                                     MaleSound_INT_Name;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaleSound_LOC_Name;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FemaleSound_INT_Name;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FemaleSound_LOC_Name;                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   MaleSoundCue;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FemaleSoundCue;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.FlameThrowerSprayBase.FlameBoneInfo
// 0x002C
struct FFlameBoneInfo
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

// ScriptStruct UTGame.FlameThrowerSprayBase.FlameSprayLight
// 0x0014
struct FFlameSprayLight
{
	class UPointLightComponent*                        Light;                                            		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                BoneChainIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FlickerIntensity;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              FlickerInterpSpeed;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastLightBrightness;                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.FlameThrowerSprayBase.FlameSpraySeed
// 0x001C
struct FFlameSpraySeed
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Age;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.FlameThrowerSprayBase.FlameMeshContact
// 0x0024
struct FFlameMeshContact
{
	int                                                BoneChainIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     ContactPosition;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     ContactNormal;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TG_KeyboardSettings.KeyBoardBinding
// 0x0028
struct FKeyBoardBinding
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      Editable : 1;                                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TG_KeyBindingMirror.KeyNameMirror
// 0x001C
struct FKeyNameMirror
{
	unsigned char                                      KeyType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     KeyName_Movie;                                    		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     KeyName_Script;                                   		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TG_KeyBindingMirror.KeyCommandMirror
// 0x0010
struct FKeyCommandMirror
{
	unsigned char                                      KeyCommandType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     KeyCommand;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamCompaintInfo
// 0x000C
struct FTeamCompaintInfo
{
	int                                                AbuseTimes;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlugInTimes;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                OtherTimes;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamReputationInfo
// 0x0018
struct FTeamReputationInfo
{
	unsigned char                                      ReputationLevel;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                TotalReputation;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                YesterdayReputation;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TodayReputation;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LaskWeekReputation;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                LaskMonthReputation;                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamMember
// 0x0074
struct FTeamMember
{
	struct FString                                     MemberUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MemberNickName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MemberMark;                                       		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      MemberPost;                                       		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      OnlineState;                                      		// 0x0025 (0x0001) [0x0000000000000000]              
	unsigned char                                      LastLoginType;                                    		// 0x0026 (0x0001) [0x0000000000000000]              
	unsigned char                                      NeedOperationType;                                		// 0x0027 (0x0001) [0x0000000000000000]              
	unsigned char                                      bIsBanSpeech;                                     		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned char                                      GroupPost;                                        		// 0x0029 (0x0001) [0x0000000000000000]              
	unsigned char                                      MemberGroupId;                                    		// 0x002A (0x0001) [0x0000000000000000]              
	struct FString                                     LastOnlineTime;                                   		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FDataTime                                   LastOnlineTimes;                                  		// 0x0038 (0x000C) [0x0000000000000000]              
	int                                                GroupID;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                AccumuGamExp;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x004C (0x0004) [0x0000000000000000]              
	struct FTeamCompaintInfo                           ComplaintInfo;                                    		// 0x0050 (0x000C) [0x0000000000000000]              
	struct FTeamReputationInfo                         ReputationInfo;                                   		// 0x005C (0x0018) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamReputationMapping
// 0x0010
struct FTeamReputationMapping
{
	struct FString                                     ReputationName;                                   		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ScoreValue;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.BadgeCommodityInfo
// 0x006C
struct FBadgeCommodityInfo
{
	int                                                BadgeCommodityID;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BadgeItemID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     BadgeName;                                        		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     BadgePath;                                        		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     BadgeCommodityType;                               		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                BadgeBuyLimit;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	TArray< int >                                      nAvailTimeArray;                                  		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bBuyed : 1;                                       		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                AvailTime;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               BadgePropID;                                      		// 0x0044 (0x0010) [0x0000000000000000]              
	struct FString                                     sAddedTime;                                       		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FDataTime                                   DueDataTime;                                      		// 0x0060 (0x000C) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.BuyBadgeInfo
// 0x0021
struct FBuyBadgeInfo
{
	struct FUniquePropId                               BadgePropID;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                BadgeCommodityID;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BadgeItemID;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AvailTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBuyed : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      PayType;                                          		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamMatchRecord
// 0x0019
struct FTeamMatchRecord
{
	int                                                TeamExperience;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TeamExperienceMax;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TodayScoreValueCur;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TodayScoreValueMax;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TodayScoreValueNeed;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TeamRankTotal;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamLevel;                                        		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.RankTeamQTInfo
// 0x0028
struct FRankTeamQTInfo
{
	unsigned long                                      HasBindRoom : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     BindRoomID;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     BindSubRoomID;                                    		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     BindLastRoomID;                                   		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.RankTeamInfo
// 0x0088
struct FRankTeamInfo
{
	struct FUniquePropId                               TeamID;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LeaderName;                                       		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamIntroduction;                                 		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                CurMembers;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                MaxMembers;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDissolved : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bQTAuthentication : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      RecruitType;                                      		// 0x0040 (0x0001) [0x0000000000000000]              
	struct FTeamMatchRecord                            TeamRecord;                                       		// 0x0044 (0x001C) [0x0000000000000000]              
	struct FRankTeamQTInfo                             BindQTInfo;                                       		// 0x0060 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGFPSCommodityLibrary.FCommodityDataRaw
// 0x00E4
struct FFCommodityDataRaw
{
	int                                                nCommodityID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nGroupID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                IconID;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     sItemName;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nSaleTag;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                SalesQuantity;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ItemOnSaleDate;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ItemOnSaleTime;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ItemRecallDate;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                ItemRecallTime;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     sCommodityType;                                   		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MPReplaceNZArray;                                 		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nPriceArray;                                      		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nAvailPreiodArray;                                		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nDiscountArray;                                   		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nMemberRebate;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nCommonRebate;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                nSaleType;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                nSaleSubType;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                nThreeLevelType;                                  		// 0x007C (0x0004) [0x0000000000000000]              
	TArray< int >                                      nItemIDArray;                                     		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nItemLocation;                                    		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                nBuyGrade;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                nBuyLimitedNum;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	unsigned char                                      SpecialCommodityType;                             		// 0x0098 (0x0001) [0x0000000000000000]              
	TArray< unsigned long >                            bGiveAndAskable;                                  		// 0x009C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCartAdded : 1;                                   		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGoodsAdded : 1;                                  		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStackProp : 1;                                   		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanTryWeapon : 1;                                		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShowCommodity : 1;                               		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDisplayCommodity : 1;                            		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                nOriginalPrice;                                   		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FString                                     sItemGetPath;                                     		// 0x00B0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemDescription;                                 		// 0x00BC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemComment;                                     		// 0x00C8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFestival : 1;                                    		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTeamCommodity : 1;                               		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< int >                                      RecommandCommodityArray;                          		// 0x00D8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamSystemInfo
// 0x0070
struct FTeamSystemInfo
{
	struct FUniquePropId                               TeamID;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamLeaderName;                                   		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamLeaderUin;                                    		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamIntroduction;                                 		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                TeamCreatTime;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                MaxMemberNum;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                CurMemberNum;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FTeamMatchRecord                            MatchRecord;                                      		// 0x004C (0x001C) [0x0000000000000000]              
	unsigned char                                      RecruitSetting;                                   		// 0x0068 (0x0001) [0x0000000000000000]              
	unsigned char                                      RecruitLevel;                                     		// 0x0069 (0x0001) [0x0000000000000000]              
	unsigned long                                      bFreeze : 1;                                      		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHadGetTeamInfo : 1;                              		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.TGOnlineTeamData.ETeamCostRateInfo
// 0x0008
struct FETeamCostRateInfo
{
	int                                                TeamNameCostRate;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MergeTeamCostRate;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.BadgePropInfo
// 0x0028
struct FBadgePropInfo
{
	struct FUniquePropId                               BadgePropID;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                BadgeItemID;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AvailTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                SubType;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FDataTime                                   DueDataTime;                                      		// 0x001C (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamNews
// 0x0010
struct FTeamNews
{
	unsigned char                                      NewsType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      PositionLimit;                                    		// 0x0001 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           InfoArray;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.LeaveMessage
// 0x0034
struct FLeaveMessage
{
	int                                                MsgID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerUin;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageContent;                                   		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LeaveMessageTime;                                 		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamImmediateMessage
// 0x0010
struct FTeamImmediateMessage
{
	unsigned char                                      MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           NameArray;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.PostRights
// 0x0014
struct FPostRights
{
	struct FString                                     SomePost;                                         		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      SomePostValue;                                    		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                SomeRight;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamLevelMapping
// 0x0010
struct FTeamLevelMapping
{
	struct FString                                     TeamLevelName;                                    		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      TeamLevel;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      BackNum;                                          		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      FrameNum;                                         		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned char                                      IconNum;                                          		// 0x000F (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.WareHouseMapping
// 0x0014
struct FWareHouseMapping
{
	struct FString                                     WareHouseName;                                    		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      UnLockLevel;                                      		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      CapacityNum;                                      		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned long                                      bTeamShop : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamMemberGroupInfo
// 0x0018
struct FTeamMemberGroupInfo
{
	unsigned char                                      MemberGroupId;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                MemberGroupPlayerNum;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TotalReputation;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     MemberGroupName;                                  		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.RecruitMemberInfo
// 0x001D
struct FRecruitMemberInfo
{
	struct FString                                     MemberUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MemberName;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ExpValue;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      PMMatchLevel;                                     		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamRankScaleMapping
// 0x000C
struct FTeamRankScaleMapping
{
	unsigned char                                      TeamScaleType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                PlayerNum_Min;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PlayerNum_Max;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamWareHousePropInfo
// 0x0030
struct FTeamWareHousePropInfo
{
	struct FUniquePropId                               nPropId;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                nItemID;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nIconID;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nReputationPrice;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nAvaiableHours;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bStackProp : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sItemName;                                        		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamWareHouseProp_List
// 0x0018
struct FTeamWareHouseProp_List
{
	int                                                nWareHouseId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nCapacityNum;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      nUseRight;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	TArray< struct FTeamWareHousePropInfo >            PropList;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamWareHouseInfo
// 0x0018
struct FTeamWareHouseInfo
{
	struct FString                                     sWareHouseName;                                   		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nWareHouseId;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bOpen : 1;                                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTeamShop : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      nUseRight;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      nPropNum;                                         		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      nCapacityNum;                                     		// 0x0016 (0x0001) [0x0000000000000000]              
	unsigned char                                      UnLockLevel;                                      		// 0x0017 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamWareHouse_ListInfo
// 0x0014
struct FTeamWareHouse_ListInfo
{
	TArray< struct FTeamWareHouseInfo >                WareHouseList;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      nOpenWareHouseNum;                                		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      bTeamShopOpen : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHadGotData : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.TGOnlineTeamData.TeamPersonalReputationInfo
// 0x0014
struct FTeamPersonalReputationInfo
{
	int                                                YearMonthDate;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ChangeReputation;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ReputationTypeContent;                            		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.ApproveInfo
// 0x0050
struct FApproveInfo
{
	struct FUniquePropId                               TeamID;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FUniquePropId                               MessageId;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     PlayerUin;                                        		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     JoinTeamDeclaration;                              		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ApproveTime;                                      		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.MemberRank
// 0x000D
struct FMemberRank
{
	struct FString                                     MemberUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Rank;                                             		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTeamData.ShiftPropInfo
// 0x0038
struct FShiftPropInfo
{
	unsigned char                                      nManageType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FUniquePropId                               nPropId;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     sItemName;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIconPath;                                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAvailableTime;                                   		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineTeamData.GroupData
// 0x001C
struct FGroupData
{
	struct FString                                     strGroupName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strGroupManager;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nCount;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TG_VideoSettings.ScreenResSetting
// 0x000C
struct FScreenResSetting
{
	int                                                ResX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ResY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFullScreen : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGAchievement.AchievementAward
// 0x0014
struct FAchievementAward
{
	int                                                Experience;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     AwardCard;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGAchievement.AchievementAccumulateData
// 0x000C
struct FAchievementAccumulateData
{
	unsigned long                                      bNeedAccumulate : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                AccumulateGoal;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CurrentAccumulation;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGAchievementAwardManager.TGAchievementAwardEntry
// 0x0084
struct FTGAchievementAwardEntry
{
	int                                                AwardLevel;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     AwardName;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AwardLevelIcon;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NeedAchiScore;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ItemAwardType;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MoneyAwardType;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                AwardItemID;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     AwardItemName;                                    		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AwardItemTimeLimit;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                AwardItemID01;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     AwardItemName01;                                  		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AwardItemTimeLimit01;                             		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                AwardItemID02;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     AwardItemName02;                                  		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AwardItemTimeLimit02;                             		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                AwardItemID03;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	struct FString                                     AwardItemName03;                                  		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AwardItemTimeLimit03;                             		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                AwardItemID04;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FString                                     AwardItemName04;                                  		// 0x0074 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AwardItemTimeLimit04;                             		// 0x0080 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGFPSItemLibrary.FItemData
// 0x009C
struct FFItemData
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FQWord                                      ResID;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                nItemID;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nItemIconID;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice1;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDefaultItem : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDroppable : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanDonate : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                Location;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                ConsumeType;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Power;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Speed;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                Accuracy;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Steady;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     AmmoCount;                                        		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ThrowRage;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                RepairType;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                DurableMax;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemChineseName;                                  		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ProficientType;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasUniqueness : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nResDataIndex;                                    		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MainShowType;                                     		// 0x0084 (0x0001) [0x0000000000000000]              
	unsigned char                                      SubShowType;                                      		// 0x0085 (0x0001) [0x0000000000000000]              
	int                                                StackNum;                                         		// 0x0088 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanUnequip : 1;                                  		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                EquipLevel;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                UnlockWay;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                UnlockWay01;                                      		// 0x0098 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGAchievementManager.AchiClassify
// 0x0024
struct FAchiClassify
{
	struct FString                                     ClassifyName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClassifyType;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ClassifyPType;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CurData;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MaxData;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                HidenData;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadRequest : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGAchievementManager.TGAchievementData
// 0x007C
struct FTGAchievementData
{
	int                                                AchiID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AchiType;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AchiPType;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAchieved : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                AchievedTime;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AchievedHour;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasLevels : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurLevel;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedAccumulate : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurAccumulation;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                AccumulateGoal;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                AchiScore;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     AchiName;                                         		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AchiDescription;                                  		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RestrictDesc;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AchiIconID;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                AchiSortID;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FString                                     IconPath;                                         		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CardID;                                           		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FString                                     CardIconPath;                                     		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShowFrontAchieved : 1;                           		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultHide : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsAdvanced : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSpecial : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct UTGame.TGHttpDownloadManager.HttpDownloadFileInfo
// 0x0050
struct FHttpDownloadFileInfo
{
	int                                                DownloadTaskID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      FileState;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     ServerFilePath;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerFileName;                                   		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalFilePath;                                    		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalFileName;                                    		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              HttpConnectionTimeout;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                HttpMaxRedirects;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                TryTime;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                MaxTryTime;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Downloader;                                       		// 0x0048 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    DownloadArchive;                                  		// 0x004C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct UTGame.TGOnlineFriendData.GroupInfo
// 0x0010
struct FGroupInfo
{
	int                                                GroupID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineFriendData.RecentPlaymateInfo
// 0x0030
struct FRecentPlaymateInfo
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RecentPriority;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                BattalTeam;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                AssistantKill;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineFriendData.QQFriendInfo
// 0x003C
struct FQQFriendInfo
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     RemarkName;                                       		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                GroupID;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      OnlineState;                                      		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned long                                      bNZPlayer : 1;                                    		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHadRecruit : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                BeFriendTime;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                GamePlayerLoginTime;                              		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadClick : 1;                                    		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGOnlineFriendData.OnlineFriendNumInfo
// 0x0008
struct FOnlineFriendNumInfo
{
	int                                                OnlineFriendNum;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OnlineBlackNum;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.GeneralPlayerAddress
// 0x0030
struct FGeneralPlayerAddress
{
	struct FString                                     Adress;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                MainChannelID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SubChannelID;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               RoomID;                                           		// 0x0014 (0x0010) [0x0000000000000000]              
	int                                                RoomDisplayID;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PVEDailyRecord
// 0x0018
struct FPVEDailyRecord
{
	int                                                PVEModeId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillCyborgCount;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PVEGetExp;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PVEGameTimes;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                PVEWinTimes;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PVEMaxScore;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerDailyRecord
// 0x006C
struct FPlayerDailyRecord
{
	int                                                GetExpDaily;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GetGP;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GetMP;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LoseTimes;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DrawTimes;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                KillTimes;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                KilledTimes;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HeadShotTimes;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                KillCyborgCount;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                PVEGetExp;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                PVEGameTimes;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                PVEWinTimes;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PVEMaxScore;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	TArray< struct FPVEDailyRecord >                   PVEDailyData;                                     		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PMGameTimes;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                PMFightScore;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                PVMGameTimes;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                PVMMechScore;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                PVMCrazyScore;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                PVMTankScore;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                PVMBioScore;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                GameCountDay;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                GameCountTotal;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                NZConsume;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineFriendData.EnemyInfo
// 0x0068
struct FEnemyInfo
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MarkName;                                         		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FGeneralPlayerAddress                       Status;                                           		// 0x0028 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      PlayerStatus;                                     		// 0x0058 (0x0001) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineFriendData.FriendStatus
// 0x0031
struct FFriendStatus
{
	struct FString                                     Adress;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                MainChannelID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SubChannelID;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               RoomID;                                           		// 0x0014 (0x0010) [0x0000000000000000]              
	int                                                RoomDisplayID;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      OnlineState;                                      		// 0x0030 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineFriendData.FriendInfo
// 0x0084
struct FFriendInfo
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                TeamIcon;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FFriendStatus                               Status;                                           		// 0x002C (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GroupID;                                          		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                Intimacy;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadRecruit : 1;                                  		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNoLoginTimeLess : 1;                             		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     MarkName;                                         		// 0x006C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      EvaluateData;                                     		// 0x0078 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineFriendData.StealCardInfo
// 0x0018
struct FStealCardInfo
{
	struct FString                                     CardLevel;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     StealCount;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineFriendData.FirendCardInfo
// 0x0028
struct FFirendCardInfo
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PlayerLevel;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< struct FStealCardInfo >                    CardData;                                         		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGActivityManager.ActLastReqItem
// 0x0024
struct FActLastReqItem
{
	int                                                ActId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Year;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Month;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DayOfWeek;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Hour;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Min;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Sec;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MSec;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.CalendarStageDeploy
// 0x0008
struct FCalendarStageDeploy
{
	unsigned long                                      bLoaded : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StageId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.CalendarActivityDeploy
// 0x0018
struct FCalendarActivityDeploy
{
	unsigned long                                      bLoaded : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                StageCount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FCalendarStageDeploy >              CalendarStageDepArray;                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGActivityManager.CalendarDeploy
// 0x0018
struct FCalendarDeploy
{
	unsigned long                                      bLoaded : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Date;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ActivityCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FCalendarActivityDeploy >           ActivityArray;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGActivityManager.StageInfo
// 0x0024
struct FStageInfo
{
	unsigned long                                      bLoaded : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StageId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               Data;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                State;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                FinishTime;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ClearDateFlag;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.ActivityInfo
// 0x0014
struct FActivityInfo
{
	unsigned long                                      bLoaded : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FStageInfo >                        StageInfoArray;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGActivityManager.ConditionDeploy
// 0x0038
struct FConditionDeploy
{
	unsigned long                                      bLoaded : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               LowestVal;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FUniquePropId                               HighestVal;                                       		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FUniquePropId                               CurrentVal;                                       		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.PreConditionOfStageDep
// 0x0014
struct FPreConditionOfStageDep
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               LimitValue;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.ActStgAward
// 0x000C
struct FActStgAward
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Times;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.StageDeploy
// 0x0084
struct FStageDeploy
{
	unsigned long                                      bLoaded : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StageId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ButtonType;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     szActStgAward;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     szActStgProgress;                                 		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ConditionCount;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                StartDate;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                EndDate;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                StartTime;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                EndTime;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                MatchCondition;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	TArray< struct FConditionDeploy >                  ConditionDepArray;                                		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPreConditionOfStageDep >           PreConditionDepArray;                             		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FActStgAward >                      AwardArray;                                       		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FStageInfo                                  Info;                                             		// 0x0060 (0x0024) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.ActivityDeploy
// 0x008C
struct FActivityDeploy
{
	unsigned long                                      bLoaded : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHiden : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDetailLoaded : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Icon;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NeedTop;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ActivityUrl;                                      		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ActivityName;                                     		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ActivityFlow;                                     		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ActivityContent;                                  		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ActivityReward;                                   		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PicID;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                dateStartDate;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                dateStopDate;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                timeStartTime;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                timeStopTime;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                dateIntervalTime;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                StartManual;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FActivityInfo                               Info;                                             		// 0x0068 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StageCount;                                       		// 0x007C (0x0004) [0x0000000000000000]              
	TArray< struct FStageDeploy >                      StageDeployArray;                                 		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGActivityManager.FinishedActivityNotify
// 0x0014
struct FFinishedActivityNotify
{
	int                                                ActId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                StageId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     msg;                                              		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGActivityManager.ActivityHistoryItem
// 0x0008
struct FActivityHistoryItem
{
	int                                                ActId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Record;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.PlayerComeBackGift
// 0x0040
struct FPlayerComeBackGift
{
	struct FString                                     Reason;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BagName;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AwardItemID;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                AwardItemTime;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                AwardItemID01;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                AwardItemTime01;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                AwardItemID02;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                AwardItemTime02;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                AwardItemID03;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                AwardItemTime03;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                AwardItemID04;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                AwardItemTime04;                                  		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.CalendarAdvertise
// 0x000C
struct FCalendarAdvertise
{
	int                                                Month;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Date;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AdvertiseID;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.ActivityPicSequenceItem
// 0x000C
struct FActivityPicSequenceItem
{
	int                                                PicID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BeginDate;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EndDate;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGActivityManager.ActivityPicInfo
// 0x0020
struct FActivityPicInfo
{
	int                                                DownloadTaskID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      HadDownloaded : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ServerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalName;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.UTCommonDataStruct.LocalTime
// 0x0010
struct FLocalTime
{
	int                                                Hour;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Minute;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Second;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MSecond;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTGameReplicationInfo.MeshEffect
// 0x0008
struct FMeshEffect
{
	class UStaticMesh*                                 Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGAvatarChar_Data.AvatarCharMergeState
// 0x0074
struct FAvatarCharMergeState
{
	unsigned long                                      bMergeInProgress : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInvalidChar : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPushOutLODTransitions : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FAvatarCharData                             CharData;                                         		// 0x0004 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamString;                                       		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2DComposite*                         HeadTextures[ 0x5 ];                              		// 0x0044 (0x0014) [0x0000000000000000]              
	class UTexture2DComposite*                         BodyTextures[ 0x5 ];                              		// 0x0058 (0x0014) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   DefaultHeadMIC;                                   		// 0x006C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   DefaultBodyMIC;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGGameReplicationInfo.CreateAvatarCharStatus
// 0x0088
struct FCreateAvatarCharStatus
{
	struct FAvatarCharMergeState                       MergeState;                                       		// 0x0000 (0x0074) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUTCharFamilyAssetStore*                     AssetStore;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	class UUTCharFamilyAssetStore*                     ArmAssetStore;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              StartMergeTime;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOtherTeamSkin : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNeedsArms : 1;                                   		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceFallbackArms : 1;                           		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct UTGame.TGGameReplicationInfo.LoadResDataInfo
// 0x0020
struct FLoadResDataInfo
{
	TArray< class UTGResData* >                        LoadResDataPool;                                  		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Uin;                                              		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class ATGPlayerReplicationInfo*                    RepicationInfo;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTeamChange : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGAvatarChar_Data.AvatarRoleInfo
// 0x00E4
struct FAvatarRoleInfo
{
	int                                                AvatarCharID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFamilyID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CampID;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AvatarItemCount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AvatarItemID[ 0x32 ];                             		// 0x0010 (0x00C8) [0x0000000000000000]              
	struct FString                                     AvatarString;                                     		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGAvatarChar_Data.AvatarCharPortraitSetup
// 0x0088
struct FAvatarCharPortraitSetup
{
	struct FName                                       CenterOnBone;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                FamilyID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     MeshOffset;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    MeshRot;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              CamFOV;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FRotator                                    DirLightRot;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	float                                              DirLightBrightness;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FColor                                      DirLightColor;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FRotator                                    DirLight2Rot;                                     		// 0x003C (0x000C) [0x0000000000000000]              
	float                                              DirLight2Brightness;                              		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FColor                                      DirLight2Color;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	struct FRotator                                    DirLight3Rot;                                     		// 0x0050 (0x000C) [0x0000000000000000]              
	float                                              DirLight3Brightness;                              		// 0x005C (0x0004) [0x0000000000000000]              
	struct FColor                                      DirLight3Color;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              SkyBrightness;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FColor                                      SkyColor;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              SkyLowerBrightness;                               		// 0x006C (0x0004) [0x0000000000000000]              
	struct FColor                                      SkyLowerColor;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FVector                                     PortraitBackgroundTranslation;                    		// 0x0074 (0x000C) [0x0000000000000000]              
	int                                                TextureSize;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              TextureRatio;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGAvatarChar_Data.AvatarSyncInfo
// 0x01B8
struct FAvatarSyncInfo
{
	int                                                AvatarCharID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFamilyID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CampID;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AvatarItemCount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AvatarItemID[ 0x32 ];                             		// 0x0010 (0x00C8) [0x0000000000000000]              
	int                                                SkillItemCount;                                   		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                SkillItemID[ 0x5 ];                               		// 0x00DC (0x0014) [0x0000000000000000]              
	int                                                DefaultBagIndex;                                  		// 0x00F0 (0x0004) [0x0000000000000000]              
	int                                                BagItemCount[ 0x5 ];                              		// 0x00F4 (0x0014) [0x0000000000000000]              
	int                                                BagItemID[ 0x28 ];                                		// 0x0108 (0x00A0) [0x0000000000000000]              
	int                                                TeamBadgeItemCount;                               		// 0x01A8 (0x0004) [0x0000000000000000]              
	int                                                TeamBadgeItemID[ 0x3 ];                           		// 0x01AC (0x000C) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTGame.GameMapCycle
// 0x0014
struct FGameMapCycle
{
	struct FName                                       GameClassName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           Maps;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.UTGame.ActiveBotInfo
// 0x0010
struct FActiveBotInfo
{
	struct FString                                     BotName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bInUse : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.UTCharInfo.CustomAIData
// 0x0028
struct FCustomAIData
{
	float                                              Tactics;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StrafingAbility;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Accuracy;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Aggressiveness;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CombatStyle;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Jumpiness;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ReactionTime;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     FavoriteWeapon;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.UTCharInfo.CharacterInfo
// 0x0070
struct FCharacterInfo
{
	struct FString                                     CharID;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FamilyID;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharName;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0024 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PreviewImageMarkup;                               		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Faction;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCustomAIData                               AIData;                                           		// 0x0048 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.MatchTypeMappings
// 0x008D
struct FMatchTypeMappings
{
	int                                                MatchTypeIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MatchTypeName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MatchTypeId;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      WorldType;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      ModeType;                                         		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      ContainedType;                                    		// 0x0016 (0x0001) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      SubModes;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Maps;                                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            Rules;                                            		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RoundRuleValues;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      TimeRuleValues;                                   		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      KillRuleValues;                                   		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            DefaultRuleIndexs;                                		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisableFriendlyDamage : 1;                       		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableThrowWeapon : 1;                          		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisableThirdView : 1;                            		// 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLoginLimit : 1;                                  		// 0x0070 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisableFlashAndSmoke : 1;                        		// 0x0070 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDisableDynamicBalance : 1;                       		// 0x0070 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bDisableShotHead : 1;                             		// 0x0070 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bDisableVedioRecord : 1;                          		// 0x0070 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bDisableMoreWatcher : 1;                          		// 0x0070 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bDisableJoinHalf : 1;                             		// 0x0070 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bDisableRebirth : 1;                              		// 0x0070 (0x0004) [0x0000000000000000] [0x00000400] 
	TArray< int >                                      RespawnTimes;                                     		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            PlayerCounts;                                     		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DefaultPlayerCountIndex;                          		// 0x008C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLogic.GameMapMappings
// 0x0031
struct FGameMapMappings
{
	int                                                MapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MapId;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNewMap : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUsable : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< int >                                      SubModes;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            PlayerCounts;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DefaultPlayerCountIndex;                          		// 0x0030 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLogic.OtherPVEModeIDArrayMapping
// 0x000C
struct FOtherPVEModeIDArrayMapping
{
	TArray< int >                                      ModeIdArray;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.RuleValueAloneSetting
// 0x0049
struct FRuleValueAloneSetting
{
	TArray< int >                                      RoundRuleValues;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      TimeRuleValues;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      KillRuleValues;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            DefaultRuleIndexs;                                		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RespawnTimes;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            PlayerCounts;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DefaultPlayerCountIndex;                          		// 0x0048 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLogic.PVESubModeTypeMappings
// 0x0018
struct FPVESubModeTypeMappings
{
	TArray< struct FString >                           SubModeTypeNames;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SubModeTypeValues;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.ObserverCountMappings
// 0x0018
struct FObserverCountMappings
{
	TArray< struct FString >                           PlayerCounts;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CountValues;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.PlayerCountMappings
// 0x0018
struct FPlayerCountMappings
{
	TArray< struct FString >                           PlayerCounts;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CountValues;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.RuleValueMappings
// 0x0018
struct FRuleValueMappings
{
	TArray< struct FString >                           RuleValueNames;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RuleValues;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.GameRuleMappings
// 0x0024
struct FGameRuleMappings
{
	TArray< struct FString >                           RuleNames;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RuleIds;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            RuleDefaultValues;                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.MatchTypeSetting
// 0x0074
struct FMatchTypeSetting
{
	int                                                MatchType;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      SubModes;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Maps;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            Rules;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RoundRuleValues;                                  		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      TimeRuleValues;                                   		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      KillRuleValues;                                   		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            DefaultRuleIndexs;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisableFriendlyDamage : 1;                       		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableThrowWeapon : 1;                          		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisableThirdView : 1;                            		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLoginLimit : 1;                                  		// 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisableRebirth : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000010] 
	TArray< int >                                      RespawnTimes;                                     		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            PlayerCounts;                                     		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.RuleSetting
// 0x000C
struct FRuleSetting
{
	int                                                Rule;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                StartRuleValue;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EndRuleValue;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLogic.SimpleMatchTypeMapping
// 0x0014
struct FSimpleMatchTypeMapping
{
	int                                                MatchTypeIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MatchTypeName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MatchTypeId;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLogic.RespawnTimeMappings
// 0x0018
struct FRespawnTimeMappings
{
	TArray< struct FString >                           RespawnTimes;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      TimeValues;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLogic.ReportVedioRecord
// 0x0010
struct FReportVedioRecord
{
	int                                                iModeId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iSubModeId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                iMapId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsOpen : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsSave : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.TGOnlineDS.DsPlayerInfo
// 0x0064
struct FDsPlayerInfo
{
	struct FPlayerIdentity                             Identity;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MatchNickName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      HudCamp;                                          		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned long                                      bAlwaysObserver : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVIP : 1;                                         		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsRoomOwner : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bGameMaster : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                PVPSkillScore;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PZSkillScore;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Experience;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                BadgeLogoID;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                BadgeFrameID;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                BadgeBackgroundID;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                BestScorePVE;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                BestKillPVE;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MatchTimes;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                DropOutSecond;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                PMTeamIndex;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                CardID;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                TimesGameChestPick;                               		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineDS.PlayerSkillScoreReport
// 0x002C
struct FPlayerSkillScoreReport
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsDropOut : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsCalcSuccess : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      FailedReason;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      ReportType;                                       		// 0x0011 (0x0001) [0x0000000000000000]              
	int                                                InitValidCount;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                FinalValidCount;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                GameTime;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                InitSkillSore;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                NewSkillScore;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                SkillScoreDiff;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGGame.GameModeSetting
// 0x0010
struct FGameModeSetting
{
	struct FString                                     ModeName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ModeId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGGame.GameMapSetting
// 0x001C
struct FGameMapSetting
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGGame.GameSpecificSettings
// 0x0028
struct FGameSpecificSettings
{
	int                                                RuleType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TargetRounds;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TargetKills;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TimeLimit;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RespawnTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFriendDamgeEnabled : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bThrowWeaponEnabled : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanUseThrowWeapon : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHeadShotMode : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisableArmor : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDynamicBalanceEnabled : 1;                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAutoBalanceEnabled : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bReplaceRoundIngnoreConfigEnabled : 1;            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                ModeId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                SubModeId;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGGame.ChestProp
// 0x0010
struct FChestProp
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AvailbilityHour;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsExcellentAward : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGGame.ChestPropList
// 0x0030
struct FChestPropList
{
	struct FChestProp                                  Prop[ 0x3 ];                                      		// 0x0000 (0x0030) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGGame.GameChestInfo
// 0x0028
struct FGameChestInfo
{
	int                                                DropBeginRound;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DropBeginTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DropRatio;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                EffectTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                IncreaseBeginRound;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                IncreaseBeginTime;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                IncreaseRatio;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< struct FChestPropList >                    ChestPropArray;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGPVPPlayerReplicationInfo.WeaponDetailStatis
// 0x0090
struct FWeaponDetailStatis
{
	int                                                ProficientType;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WeaponSubType;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                WeaponSubID;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TimesKill;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TimesBeKill;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TimesHeadShot;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Damagevalue;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NumberShotBullet;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumberShotBulletHit;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                KillDistanceLess10;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                KillDistance10To25;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                KillDistance25To50;                               		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                KillDistance50To100;                              		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                KillDistanceMore100;                              		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                TimesKill2;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                TimesKill3;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                TimesKill4;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                TimesKill5;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                TimesKillMore6;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                XWallKill;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                WeaponSpecKill1;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                WeaponSpecKill2;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                WeaponSepcBulletHit1;                             		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                WeaponSepcBulletHit2;                             		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                AmmoUseUp;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                CalcedShotBulletHit;                              		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      HaveCalcCount : 1;                                		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                UseCount;                                         		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                UseTime;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                BeginTime;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                ThrowTimes;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      HaveCalcDamage : 1;                               		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ThrowDamageTimes;                                 		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      HaveKill : 1;                                     		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MultiKillLevel;                                   		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                SpecState;                                        		// 0x008C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGFPSItemLibrary.FItemSimpleData
// 0x000C
struct FFItemSimpleData
{
	int                                                nItemID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ProficientType;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nResDataIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGFPSItemLibrary.FItemDataRaw
// 0x0094
struct FFItemDataRaw
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nItemID;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ResID1;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ResID2;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nItemIconID;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nRepairPrice1;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDefaultItem : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDroppable : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanDonate : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                Location;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                ConsumeType;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Power;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Speed;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Accuracy;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Steady;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     AmmoCount;                                        		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ThrowRage;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                RepairType;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                DurableMax;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemChineseName;                                  		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ProficientType;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasUniqueness : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHidden : 1;                                      		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      MainShowType;                                     		// 0x007C (0x0001) [0x0000000000000000]              
	unsigned char                                      SubShowType;                                      		// 0x007D (0x0001) [0x0000000000000000]              
	int                                                StackNum;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanUnequip : 1;                                  		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                EquipLevel;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                UnlockWay;                                        		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                UnlockWay01;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGMatchPlayerStat.PickUpItemRecord
// 0x0008
struct FPickUpItemRecord
{
	int                                                ItemType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGMatchPlayerStat.SpecialAward
// 0x0010
struct FSpecialAward
{
	int                                                SpecialAwardCount;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SpecialIconPath;                                  		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGMatchPlayerStat.BagStat
// 0x0008
struct FBagStat
{
	int                                                UseTime;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGMatchPlayerStat.PVEAIPawnKilledRecord
// 0x000C
struct FPVEAIPawnKilledRecord
{
	int                                                TypeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HeadShotCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGMatchPlayerStat.PVEItemRecord
// 0x0008
struct FPVEItemRecord
{
	unsigned char                                      ItemType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRoundGameReplicationInfo.RoundInfo
// 0x0038
struct FRoundInfo
{
	int                                                RoundIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CommunicateTime;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     EscapeUin;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              EscapeRemainingTime;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     PlantC4Uin;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DefuseC4Uin;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bC4Explode : 1;                                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                WinningTeamIndex;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTHUDBase.CanvasString
// 0x0014
struct FCanvasString
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                XL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                YL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTHUD.DamageInfo
// 0x001C
struct FDamageInfo
{
	float                                              FadeTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              FadeValue;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocationalHit : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     AttackerPos;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MatConstant;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGHUD.HUDTextInfo
// 0x0018
struct FHUDTextInfo
{
	struct FString                                     TextData;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      DrawColor;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   CurrentPos;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGHUD.HUDTextureInfo
// 0x0028
struct FHUDTextureInfo
{
	struct FVector2D                                   CurrentPos;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  DrawTexture;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FColor                                      DrawColor;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              XL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              YL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              U;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGHUD.DeathMessage
// 0x00A8
struct FDeathMessage
{
	struct FHUDTextInfo                                KilledInfo;                                       		// 0x0000 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FHUDTextureInfo                             DeathTexInfo;                                     		// 0x0018 (0x0028) [0x0000000000000000]              
	struct FHUDTextInfo                                KillerInfo;                                       		// 0x0040 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FHUDTextureInfo                             HeadShotInfo;                                     		// 0x0058 (0x0028) [0x0000000000000000]              
	struct FHUDTextureInfo                             MultiKillInfo;                                    		// 0x0080 (0x0028) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.RankStarMapping
// 0x0008
struct FRankStarMapping
{
	unsigned char                                      MinNum;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      MaxNum;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                GetStar;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.KDStarMapping
// 0x0008
struct FKDStarMapping
{
	unsigned char                                      KDRate;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                GetStar;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.ActiveMatchCountMapping
// 0x0008
struct FActiveMatchCountMapping
{
	int                                                NormalMatchCountThreshold;                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TiredMatchCountThreshold;                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.PersonalGameTopInfo
// 0x002A
struct FPersonalGameTopInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                LevelScore;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                LoseTimes;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      MatchLevel;                                       		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned char                                      PlayerStatus;                                     		// 0x0029 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.PersonalMatchDataInfo
// 0x0070
struct FPersonalMatchDataInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                FightScore;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                SkillLevelScore;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MatchCount;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      MatchLevel;                                       		// 0x0024 (0x0001) [0x0000000000000000]              
	int                                                DayMatchCount;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TopRank;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                TotalRankCount;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                KillTimes;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                KilledTimes;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                HeadShotTimes;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                DrawTimes;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                LoseTimes;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                SeasonMatchCount;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                GetMPValueWeek;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                GetMPValueSeason;                                 		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                LevelNeedMatchCount;                              		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                MatchCountTotal;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                BeatCountTotal;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           PlayerOtherInfoArray;                             		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.PMThrowWeapon
// 0x0024
struct FPMThrowWeapon
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      LocationInConfig;                                 		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                WeaponItemId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ThrowTimes;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                KillTimes;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Damagevalue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DamageTimes;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponIconPath;                                   		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.PMMainWeapon
// 0x0028
struct FPMMainWeapon
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                WeaponItemId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TimesKill;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TimesHeadShot;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ShotBulletNumber;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ShotBulletHitNumber;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                DamagerValue;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponIconPath;                                   		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.PMBasicMatchStatis
// 0x0020
struct FPMBasicMatchStatis
{
	unsigned char                                      CurMatchRank;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurMatchLevel;                                    		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      DamageRank;                                       		// 0x0002 (0x0001) [0x0000000000000000]              
	int                                                MatchPower;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AddPower;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MatchTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MatchModeId;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MatchMapId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TotalScore;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RecommendWeaponCommodityId;                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.PMAnalyseTotalStatis
// 0x0080
struct FPMAnalyseTotalStatis
{
	unsigned long                                      bFleeInMatch : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHaveArmorHead : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHaveArmorTorsor : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                KillTimes;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HeadShotTimes;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                KillAlongTimes;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AssistTimes;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BeKilledTimes;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RoundWinTimes;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                CampWinTimes;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                KillScore;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                HeadShotScore;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                KillAlongScore;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                AssistScore;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                BeKilledScore;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                RoundWinScore;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                CampWinScore;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                TakeDamage;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                TakeDamageReduce;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                SpecialMedal;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FPMBasicMatchStatis                         BasicMatchStatis;                                 		// 0x0048 (0x0020) [0x0000000000000000]              
	TArray< struct FPMMainWeapon >                     MainWeaponStatis;                                 		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPMThrowWeapon >                    ThrowWeaponStatis;                                		// 0x0074 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.PMAnalyseInGameRecord
// 0x002C
struct FPMAnalyseInGameRecord
{
	float                                              TimeSeconds;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Killer;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WeaponSubType;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                WeaponSubID;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                KillType;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     Victim;                                           		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MultiKillLevels;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGPlayerReplicationInfo.TechStatsInfo
// 0x001C
struct FTechStatsInfo
{
	struct FString                                     VictimName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bKilled : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsHeadShot : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsOneshotDead : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bKilledByOther : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              TakeDamageTime;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGTeamHUD.HUDEffect
// 0x0078
struct FHUDEffect
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  Image;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         ImageCoords;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	class UFont*                                       Font;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	TArray< float >                                    Periods;                                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         InitPos;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         PosOffsets;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         SizeScales;                                       		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         Alphas;                                           		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         PeriodRanges;                                     		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.UTPawn.GibInfo
// 0x0010
struct FGibInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      GibClass;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHighDetailOnly : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGPawnEffectComponent.BurningEffect
// 0x0010
struct FBurningEffect
{
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInstanceConstant* >         MICList;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.TypeMirror
// 0x0010
struct FTypeMirror
{
	unsigned char                                      ResType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     TypeName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.BagMirror
// 0x0010
struct FBagMirror
{
	unsigned char                                      BagType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     BagName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.WeaponMirror
// 0x0010
struct FWeaponMirror
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     WeaponName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.FunctionItemMirror
// 0x0010
struct FFunctionItemMirror
{
	unsigned char                                      FunctionItemType;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     FunctionItemName;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.SocketMirror
// 0x0010
struct FSocketMirror
{
	unsigned char                                      SocketType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     SocketName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.FamilyPathMirror
// 0x0020
struct FFamilyPathMirror
{
	unsigned char                                      FamilyType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     FamilyString;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      FamilyID;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	struct FString                                     FamilyPath;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.CharacterMirror
// 0x0010
struct FCharacterMirror
{
	unsigned char                                      CharacterSubType;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     CharacterName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.SkillMirror
// 0x0010
struct FSkillMirror
{
	unsigned char                                      SkillSubType;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     SkillName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGResManager.WeaponInfo
// 0x0030
struct FWeaponInfo
{
	struct FString                                     WeaponName;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Weapon1p;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector                                     OriginPickUpMesh;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RotOriginPickUpMesh;                              		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGResManager.WeaponContentMirror
// 0x0018
struct FWeaponContentMirror
{
	struct FString                                     WeaponContentName;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FirstPersonMeshName;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGPawn.Replicate_PendingWeaponInfo
// 0x000C
struct FReplicate_PendingWeaponInfo
{
	class AWeapon*                                     PendingWeapon;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      PendingWeaponClass;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ReplicateIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGPawn.WeaponAttachmentInfo
// 0x0034
struct FWeaponAttachmentInfo
{
	class ATGPawn*                                     AttachPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       LoadAttachmentName;                               		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonWeaponAnimSets;                        		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonWeaponAnimSets_G;                      		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonWeaponMesh;                            		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       ThirdPersonWeaponMeshL;                           		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       PickUpWeaponMesh;                                 		// 0x002C (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGPawn.HelloMessageInfo
// 0x000C
struct FHelloMessageInfo
{
	unsigned long                                      bNeedHideWeapon : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       HelloAnimation;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTPlayerReplicationInfo.IntStat
// 0x000C
struct FIntStat
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                StatValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTPlayerReplicationInfo.TimeStat
// 0x0010
struct FTimeStat
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TotalTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CurrentStart;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGPlayerReplicationInfo.PlayerSkillScoreRecord
// 0x0020
struct FPlayerSkillScoreRecord
{
	class ATGPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Uin;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SkillScore;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              GamePoint;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TimesKill;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TimesDeaths;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTCommonDataStruct.PlayerKillDetail
// 0x001C
struct FPlayerKillDetail
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                KillNormal;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                KillHeadshot;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                KillGenerator;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                KillMelee;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTCommonDataStruct.PlayerBeKillDetail
// 0x0018
struct FPlayerBeKillDetail
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BeKilledNormal;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BeKilledHeadshot;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BeKilledGenerator;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRoundPlayerReplicationInfo.RPlayerStat
// 0x0018
struct FRPlayerStat
{
	int                                                RKill;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RKilled;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RDamage;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RTime;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RPlayerCount;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RWinerTeamIndex;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTWeaponLocker.PawnToucher
// 0x0008
struct FPawnToucher
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              NextTouchTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTWeaponLocker.WeaponEntry
// 0x0008
struct FWeaponEntry
{
	class UClass*                                      WeaponClass;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPrimitiveComponent*                         PickupMesh;                                       		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct UTGame.UTWeaponLocker.ReplacementWeaponEntry
// 0x0008
struct FReplacementWeaponEntry
{
	unsigned long                                      bReplaced : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UClass*                                      WeaponClass;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRoundMatch.PMTeamCount
// 0x0008
struct FPMTeamCount
{
	int                                                PMTeamIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGAvatarChar_Preview.EquipAttachItemContent
// 0x0008
struct FEquipAttachItemContent
{
	int                                                nEquipItemID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              EquipMeshComp;                                    		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct UTGame.TGAvatarChar_Preview.EquipItemContent
// 0x0008
struct FEquipItemContent
{
	int                                                nEquipItemID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              EquipMeshComp;                                    		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct UTGame.TGAvatarChar_Preview.EquipWeaponContent
// 0x0008
struct FEquipWeaponContent
{
	int                                                nEquipItemID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              EquipMeshComp;                                    		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct UTGame.TGAvatarChar_Preview.EquipBagContent
// 0x0008
struct FEquipBagContent
{
	int                                                nEquipItemID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              EquipMeshComp;                                    		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct UTGame.TGAvatarChar_Preview.EquipFunctionItemContent
// 0x0008
struct FEquipFunctionItemContent
{
	int                                                nEquipItemID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              EquipMeshComp;                                    		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct UTGame.UTCommonDataStruct.LocalDateTime
// 0x0020
struct FLocalDateTime
{
	struct FLocalDate                                  Date;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FLocalTime                                  Time;                                             		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGBMBombMessage.BombVoiceData
// 0x0010
struct FBombVoiceData
{
	class USoundCue*                                   MaleSoundCue_INT;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   MaleSoundCue_LOC;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FemaleSoundCue_INT;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FemaleSoundCue_LOC;                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTInventoryManager.AmmoStore
// 0x0008
struct FAmmoStore
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      WeaponClass;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGCardResourceManager.CardResourceData
// 0x0014
struct FCardResourceData
{
	int                                                CardID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  CardResource;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ResourcePath;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGCardResourceManager.RankResourceData
// 0x0014
struct FRankResourceData
{
	int                                                Rank;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  RankResource;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ResourcePath;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGCardResourceManager.TeamBadgeIconResourceData
// 0x0014
struct FTeamBadgeIconResourceData
{
	int                                                TeamBadgeIconID;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TeamBadgeIconResource;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ResourcePath;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGCardResourceManager.TeamBadgeBorderResourceData
// 0x0014
struct FTeamBadgeBorderResourceData
{
	int                                                TeamBadgeBorderID;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TeamBadgeBorderResource;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ResourcePath;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGCardResourceManager.TeamBadgeBgResourceData
// 0x0014
struct FTeamBadgeBgResourceData
{
	int                                                TeamBadgeBgID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TeamBadgeBgResource;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ResourcePath;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.UTEventCallbackParam.OnEnterChannel_Param
// 0x0004
struct FOnEnterChannel_Param
{
	unsigned long                                      bFisrt : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnEnterRoom_Param
// 0x0004
struct FOnEnterRoom_Param
{
	unsigned long                                      bFisrt : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnChatMovieOpen_Param
// 0x0004
struct FOnChatMovieOpen_Param
{
	unsigned long                                      bIsInMatch : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.UTEventCallbackParam.OnResolutionChanged_Param
// 0x0008
struct FOnResolutionChanged_Param
{
	struct FVector2D                                   NewResolution;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEventCallbackParam.OnShopRoomImageDownloadComplete_Param
// 0x0008
struct FOnShopRoomImageDownloadComplete_Param
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGFPSCommodityLibrary.FrontPageCommodityGroup
// 0x001C
struct FFrontPageCommodityGroup
{
	int                                                CommodityGroupID;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CommodityDataCommodityIDArray;                    		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGFPSItemLibrary.ExchargeCard
// 0x0018
struct FExchargeCard
{
	int                                                CardID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CardItemID;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CardItemIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ExchargeType;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ExchargeNum;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ExchargeLimit;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGGameStat.HeatmapPosition
// 0x0008
struct FHeatmapPosition
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatKeywordLinkNode
// 0x001C
struct FChatKeywordLinkNode
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Begin;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                End;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Length;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Content;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatRepeatShield
// 0x0010
struct FChatRepeatShield
{
	struct FString                                     ChatContent;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ChatTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatTarget
// 0x0018
struct FChatTarget
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatActionBinding
// 0x0020
struct FChatActionBinding
{
	unsigned char                                      ChatAction;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bPutGunDown : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ActionKeyword;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ActionDesc;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.SystemTimeData
// 0x0020
struct FSystemTimeData
{
	int                                                Year;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Month;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DayOfWeek;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Hour;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Min;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Sec;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MSec;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatMessage
// 0x0050
struct FChatMessage
{
	unsigned long                                      bSystemMessage : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Part0;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Part1;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Part2;                                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Part3;                                            		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AchievNames;                                      		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AchievIds;                                        		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.AchieveArrivedBufferStruct
// 0x0040
struct FAchieveArrivedBufferStruct
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     UINFrom;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NickNameFrom;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AchiUniqueIds;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AchiNames;                                        		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatHistoryAchievementData
// 0x001C
struct FChatHistoryAchievementData
{
	int                                                ChatHistoryID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                StartPos;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EndPos;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AchievId;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     AchieveName;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatHistoryContentData
// 0x0010
struct FChatHistoryContentData
{
	int                                                ChatHistoryID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ChatHistoryContent;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.AchiInChatData
// 0x002C
struct FAchiInChatData
{
	int                                                AchiUniqueId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     AchiName;                                         		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AchiID;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                CurLevel;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                AchievedTime;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Accumulation;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatPlayer
// 0x001C
struct FChatPlayer
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Relationship;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.GeneralPlayerData
// 0x008C
struct FGeneralPlayerData
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamName;                                         		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MarkName;                                         		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                FriendChummy;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                PlayerStatus;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFriend : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsTeamMate : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FGeneralPlayerAddress                       Status;                                           		// 0x0044 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MatchInfo;                                        		// 0x0074 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     IconPath;                                         		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.DeferredCommand
// 0x0018
struct FDeferredCommand
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Arg;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChatManager.ChatTypeInfo
// 0x0020
struct FChatTypeInfo
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              SendTimeInterval;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ChannelName;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChannelTextColor;                                 		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMultiGameLobby.ChannelInfo
// 0x0040
struct FChannelInfo
{
	int                                                MainChannelID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ChannelId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ChannelName;                                      		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Host;                                             		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Port;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PlayerCount;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                NormalPlayerCount;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                OnlineMatchPlayerCount;                           		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                RAMatchPlayerCount;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PlayerCapacity;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      FriendCount;                                      		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned long                                      bFullChannel : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFalseChannel : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.TGOnlineMultiGameLobby.SimpleSubChannelInfo
// 0x0020
struct FSimpleSubChannelInfo
{
	int                                                SubChannelID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     SubChannelName;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Host;                                             		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMultiGameLobby.MainChannelInfo
// 0x002C
struct FMainChannelInfo
{
	int                                                MainChannelID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlayerCount;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PlayerCapacity;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      MainChannelType;                                  		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      FriendCount;                                      		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      nIndex;                                           		// 0x000E (0x0001) [0x0000000000000000]              
	int                                                DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     MainChannelName;                                  		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FSimpleSubChannelInfo >             SubChannelList;                                   		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMultiGameLobby.MultiGameLobbyRoomInfo
// 0x004C
struct FMultiGameLobbyRoomInfo
{
	struct FQWord                                      RoomID;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                RoomItemId;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     RoomName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HostName;                                         		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RoomFlags;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                SubModeId;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MatchTypeIndex;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                RealMatchTypeIndex;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned char                                      MapIndex;                                         		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      MaxPlayerNumber;                                  		// 0x003D (0x0001) [0x0000000000000000]              
	unsigned char                                      PlayerCount;                                      		// 0x003E (0x0001) [0x0000000000000000]              
	unsigned char                                      MaxSpeculatorNumber;                              		// 0x003F (0x0001) [0x0000000000000000]              
	unsigned char                                      SpeculatorCount;                                  		// 0x0040 (0x0001) [0x0000000000000000]              
	unsigned char                                      Dummy[ 0x2 ];                                     		// 0x0041 (0x0002) [0x0000000000000000]              
	unsigned char                                      RespawnTime;                                      		// 0x0043 (0x0001) [0x0000000000000000]              
	unsigned char                                      RuleType;                                         		// 0x0044 (0x0001) [0x0000000000000000]              
	int                                                RuleValue;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineSubsystem.MultiGameRoomFilter
// 0x0010
struct FMultiGameRoomFilter
{
	int                                                RoomFlags;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      AtLeastPlayerCount;                               		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      Dummy[ 0x3 ];                                     		// 0x000D (0x0003) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMultiGameLobby.MainChannelRankMapping
// 0x0010
struct FMainChannelRankMapping
{
	unsigned char                                      MainChannelType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            RankSection;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMultiGameLobby.ExpertInfo
// 0x001C
struct FExpertInfo
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                HeadShot;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Win;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Lose;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineSubsystem.OnlineBuddyInfo
// 0x0020
struct FOnlineBuddyInfo
{
	struct FString                                     UINString;                                        		// 0x0000 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      State;                                            		// 0x0018 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                Exp;                                              		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGOnlineSubsystem.OnlineExceptionInfo
// 0x001C
struct FOnlineExceptionInfo
{
	class UObject*                                     Source;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InternalErrorCode;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ErrorCode;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     ErrorDesc;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.CreateRoomParam
// 0x0048
struct FCreateRoomParam
{
	struct FString                                     RoomName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     DsIP;                                             		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ModeId;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                SubModeId;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                RoomFlags;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                RoomRule;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                RuleValue;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                RespawnTime;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      MaxPlayer;                                        		// 0x0040 (0x0001) [0x0000000000000000]              
	unsigned char                                      MaxSpeculator;                                    		// 0x0041 (0x0001) [0x0000000000000000]              
	unsigned char                                      Dummy[ 0x2 ];                                     		// 0x0042 (0x0002) [0x0000000000000000]              
	int                                                RecodeType;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.HalfQuitGameParam
// 0x000C
struct FHalfQuitGameParam
{
	int                                                RoomItemId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHalfQuit : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              QuitTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.MultiGameRoomSeatInfo
// 0x0020
struct FMultiGameRoomSeatInfo
{
	unsigned char                                      SeatIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsEmpty : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTGOnlinePlayerData*                         PlayerData;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      PlayerFlags;                                      		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      PlayerState;                                      		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      PlayerStartMatchState;                            		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned long                                      bAlwaysObserver : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsInSettingPanel : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsEquipSpecifiedWeapon : 1;                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     TeamName;                                         		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.PVEDetailMatchInfo
// 0x002C
struct FPVEDetailMatchInfo
{
	int                                                GameTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DeathCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count1;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Kill_Count2;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count3;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count4;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count5;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Boss_Hurt;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Boss_Kill;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Boss_BeKill;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.PKInviteParam
// 0x0064
struct FPKInviteParam
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPKInvite : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCreateRoomParam                            RoomSettingParam;                                 		// 0x001C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.OnlineGamePlayerInfo
// 0x0020
struct FOnlineGamePlayerInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerInsteadName;                                		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PlayerTeamIndex;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                IsLastChampion;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.MatchInfoOfPreGame
// 0x000C
struct FMatchInfoOfPreGame
{
	int                                                ModeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SubModeId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.PVEPassCustomsInfoByMap
// 0x000C
struct FPVEPassCustomsInfoByMap
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDifficultPass : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHeroPass : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                BestHeroScore;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.CurrentMapsInfo_Room
// 0x0010
struct FCurrentMapsInfo_Room
{
	TArray< struct FGameMapMappings >                  MapArray;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasSpecialSubMode : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasSpecialPlayerCounts : 1;                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.TGOnlineMultiGameRoom.MVSRoomInfo
// 0x0018
struct FMVSRoomInfo
{
	struct FString                                     MVSFilePattern;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MVSDelaySec;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                GameElapsedTime;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                EachLiveFileDuration;                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTCommonDataStruct.PVETopRankInfo
// 0x0028
struct FPVETopRankInfo
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerUin;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Level;                                            		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      Rank;                                             		// 0x0019 (0x0001) [0x0000000000000000]              
	int                                                TopRank;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGMessageManager.GiftMessageContent
// 0x001C
struct FGiftMessageContent
{
	struct FUniquePropId                               GiftPropId;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     GiftContent;                                      		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGMessageManager.SingleMessage
// 0x00A4
struct FSingleMessage
{
	struct FUniquePropId                               MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned long                                      bHasChecked : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ProtocalId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RequestId;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      MessageType;                                      		// 0x001C (0x0001) [0x0000000000000000]              
	struct FString                                     SenderUin;                                        		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     SenderNickName;                                   		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageTital;                                     		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageBody;                                      		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageContent;                                   		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Result;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               ExtendId;                                         		// 0x0060 (0x0010) [0x0000000000000000]              
	struct FUniquePropId                               ExtendId1;                                        		// 0x0070 (0x0010) [0x0000000000000000]              
	struct FString                                     ItemIconPath;                                     		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HappenedTime;                                     		// 0x008C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FGiftMessageContent >               GiftList;                                         		// 0x0098 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineClient.WeaponFirstUseTipsRecord
// 0x000C
struct FWeaponFirstUseTipsRecord
{
	int                                                WeaponSubType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WeaponSubID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasUsed : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGOnlineClient.StoredZoneInfo
// 0x0010
struct FStoredZoneInfo
{
	struct FString                                     Host;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Port;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineClient.MapFpsLimitMapping
// 0x0014
struct FMapFpsLimitMapping
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              FPS;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineClient.FpsRecordItem
// 0x0010
struct FFpsRecordItem
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RecordFrameCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RecordTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineClient.QuickGameMapSetting
// 0x0020
struct FQuickGameMapSetting
{
	int                                                IndexOfMap;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      IndexOfModeIndexBySub;                            		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      IndexOfModeIndexByMap;                            		// 0x0005 (0x0001) [0x0000000000000000]              
	TArray< int >                                      SubModeIds;                                       		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SubModeNames;                                     		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineClient.NtfUpdatePlayerInfo
// 0x0008
struct FNtfUpdatePlayerInfo
{
	int                                                UpdateFlag;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlayerChangeValue;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineClient.QuickGameModeSetting
// 0x0018
struct FQuickGameModeSetting
{
	int                                                ModeIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CurrentMapIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      SubModeIndex;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      ContainedType;                                    		// 0x0009 (0x0001) [0x0000000000000000]              
	unsigned char                                      ModeType;                                         		// 0x000A (0x0001) [0x0000000000000000]              
	TArray< struct FQuickGameMapSetting >              MapSettingArray;                                  		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineClient.QuickGameSetting
// 0x0044
struct FQuickGameSetting
{
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0000 (0x003C) UNKNOWN PROPERTY: MapProperty UTGame.TGOnlineClient.QuickGameSetting.ModeSettings
	int                                                CurrentModeIndex;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadGotDataFromServer : 1;                        		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGOnlineClient.AllChannelQuickGameInfo
// 0x0018
struct FAllChannelQuickGameInfo
{
	int                                                ZoneIP;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                IsInLocalZone;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MainChannelID;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SubChannelID;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	struct FQWord                                      RoomID;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineClient.KickedOffInfo
// 0x0018
struct FKickedOffInfo
{
	unsigned long                                      bKickedOff : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ErrorCode;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FreezeHours;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     AntibotContent;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.RoomNZCommodityMapping
// 0x0010
struct FRoomNZCommodityMapping
{
	int                                                ModeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      CommodityIDArray;                                 		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.VoteStat
// 0x0014
struct FVoteStat
{
	int                                                ModeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               VoteCount;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.SkillsOnlyInPVEMapping
// 0x0010
struct FSkillsOnlyInPVEMapping
{
	unsigned char                                      nModeType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< int >                                      SkillItemIdArray;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.ComsumMoneyInfo
// 0x0030
struct FComsumMoneyInfo
{
	unsigned char                                      MoneyType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     UsePathIndexStr;                                  		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                MoneyValue;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BalanceValue;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     DataTimeBySec;                                    		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     DataTime;                                         		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.PVEChestMapping
// 0x0024
struct FPVEChestMapping
{
	unsigned char                                      ChestType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ScoreValue;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CostMoney;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     ChestTypeName;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MoneyType;                                        		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.MatchWorldTypeMapping
// 0x0028
struct FMatchWorldTypeMapping
{
	unsigned char                                      WorldType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            ModeTypeValueArray;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            ModeTypeNewArray;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ModeTypeNameArray;                                		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.UpdatePVECard
// 0x0008
struct FUpdatePVECard
{
	unsigned char                                      PVECardType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                PVECardPonts;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.DeathBackSettingControl
// 0x0004
struct FDeathBackSettingControl
{
	unsigned long                                      bDeathBackVisible : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultOpenInNewChannel : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.InfoTypeValueStruct
// 0x000C
struct FInfoTypeValueStruct
{
	int                                                InfoType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              InfoValueExtend;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              InfoValueMax;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.WeaponItemStruct
// 0x0018
struct FWeaponItemStruct
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UserPercentage;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InfoAmount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FInfoTypeValueStruct >              RelativeInfoList;                                 		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.RecommandWeaponStruct
// 0x0014
struct FRecommandWeaponStruct
{
	int                                                SourceTypeId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RecommandWeaponAmount;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FWeaponItemStruct >                 RecommandWeaponList;                              		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineShopData.ShopPayValue
// 0x001C
struct FShopPayValue
{
	int                                                GP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TP;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RP;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      DiscountCardArray;                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineShopData.RoleElement
// 0x004C
struct FRoleElement
{
	struct FString                                     RoleName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     IconPath;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RoleID;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RolePartIDs;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SocketItemIDs;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SocketLocations;                                  		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ShopIndex;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                CampID;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsBuyed : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGOnlineShopData.ResBuyCommodityInfo
// 0x0050
struct FResBuyCommodityInfo
{
	unsigned char                                      BuyType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TPPayType;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      GPPayType;                                        		// 0x0002 (0x0001) [0x0000000000000000]              
	int                                                TPErrorCode;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GPErrorCode;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ConsumeTP;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ConsumeGP;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     ConsignneNickName;                                		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ConsignneUin;                                     		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CommodityIDList;                                  		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AvalidPeriodList;                                 		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FUniquePropId >                     PropIdList;                                       		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlinePlayerData.PVPModeMatchData
// 0x0018
struct FPVPModeMatchData
{
	int                                                MatchMode;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillTimes;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                KilledTimes;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LoseTimes;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DrawTimes;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerPVPData
// 0x0060
struct FPlayerPVPData
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                KillTimes;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                KilledTimes;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HeadShotTimes;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                DrawTimes;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                LoseTimes;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MeleeWeaponKillTimes;                             		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                GrenadeKillTimes;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                ErrorKillTimes;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                BreakLineTimes;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                RifleKillTimes;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                SniperKillTimes;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                SMGKillTimes;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                EmmageeKillTimes;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                PistolKillTimes;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< struct FPVPModeMatchData >                 SubModeStatisticalData;                           		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlinePlayerData.LocalMatchInfo
// 0x0008
struct FLocalMatchInfo
{
	unsigned char                                      nModeId;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bFinish : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerLocalMatchInfo
// 0x000C
struct FPlayerLocalMatchInfo
{
	TArray< struct FLocalMatchInfo >                   MatchInfoList;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlinePlayerData.PVEModeMatchData
// 0x0018
struct FPVEModeMatchData
{
	unsigned char                                      PVELevel;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                KillTimes;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MatchTimes;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TopRecord;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DropOutCount;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerPVEData
// 0x0014
struct FPlayerPVEData
{
	int                                                ModeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FPVEModeMatchData >                 SubModeData;                                      		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlinePlayerData.Mech2ManRecord
// 0x0018
struct FMech2ManRecord
{
	int                                                UseTimes;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillTimesTotal;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                KillTimesByMGun;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                KillTimesByMissile;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                KillTimesByRolling;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.Man2MechRecord
// 0x0018
struct FMan2MechRecord
{
	int                                                UseTimes;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillTimesTotal;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                KillDriverTimes;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HitMechTimes;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                KillMechTimes;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerPVMData
// 0x0060
struct FPlayerPVMData
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                MatchType;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                GameTimes;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HighScore;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ACETimes;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FMech2ManRecord                             MechData;                                         		// 0x002C (0x0018) [0x0000000000100000]              
	struct FMan2MechRecord                             ManData;                                          		// 0x0044 (0x0018) [0x0000000000100000]              
	int                                                Exp;                                              		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PPZBreakthroughRecord
// 0x0018
struct FPPZBreakthroughRecord
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillTimes;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TotalGameTimes;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TopScore;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ForceQuitTimes;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerPPZBreakthroughData
// 0x0028
struct FPlayerPPZBreakthroughData
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PPZBreakthroughID;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< struct FPPZBreakthroughRecord >            ZombieRecordArray;                                		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlinePlayerData.PPZCompetitionRecord
// 0x0018
struct FPPZCompetitionRecord
{
	int                                                KillTimes;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KilledTimes;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SkillKillTimes;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CommonKillTimes;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AssistTimes;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TopDamage;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.PlayerPPZCompetitionData
// 0x0064
struct FPlayerPPZCompetitionData
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PPZCompetitionID;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TotalGameTimes;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                TotalScore;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                WinTimes;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                LoseTimes;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                KillTimesAsHuman;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                KilledTimesAsHuman;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                TopScoreAsHuman;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                GetResourceTimesAsHuman;                          		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                AssistHumanTimesAsHuman;                          		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                KillAIZombieTimesAsHuman;                         		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                RescueHumanTimesAsHuman;                          		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                KillTimesAsZombie;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                KilledTimesAsZombie;                              		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                TopScoreAsZombie;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                ZombieUseCount;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	TArray< struct FPPZCompetitionRecord >             ZombieRecordArray;                                		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.SingleSkillItem
// 0x0048
struct FSingleSkillItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemIconID;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ItemResID;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FUniquePropId                               PropId;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemDescription;                                  		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasOwned : 1;                                    		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEquiped : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                UnlockWay;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                UnlockWay01;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.ChestPropInfo
// 0x0008
struct FChestPropInfo
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ValidHours;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerData.InviteData
// 0x0010
struct FInviteData
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              InvitedTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGLotteryLibrary.LotteryData
// 0x004C
struct FLotteryData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PropId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     PropName;                                         		// 0x0014 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                PropPeriod;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PropCount;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              ChanceRate;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                IsBroadcast;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                SpecialSound;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Experience;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                MonthPoint;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                TGamePoint;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGLotteryLibrary.BulletTypeCountValueData
// 0x0010
struct FBulletTypeCountValueData
{
	int                                                Area;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MP;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGLotteryLibrary.PartExchangeData
// 0x002C
struct FPartExchangeData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PropId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     PropName;                                         		// 0x0014 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                PropPeriod;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PropCount;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                DepartCount;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGLotteryLibrary.PlayerLotteryGift
// 0x0024
struct FPlayerLotteryGift
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PositionId;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     StrAccount;                                       		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGHappyMatchData.DsIpAndMatchPair
// 0x000C
struct FDsIpAndMatchPair
{
	int                                                DsIP;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MatchBusIP;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Delay;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGHappyMatchData.HappyMatchModeInfo
// 0x0014
struct FHappyMatchModeInfo
{
	struct FString                                     ModeName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ModeId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      ModeEnable : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ModeTobeWait : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct UTGame.TGMapInfo.BornAreaInfo
// 0x0020
struct FBornAreaInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rotation;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocationRelativeToImageCenter;                    		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              Yaw;                                              		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct UTGame.TGMatchPlayerStat.RoundStat
// 0x0018
struct FRoundStat
{
	int                                                RoundKill;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RoundKilled;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RoundDamage;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RoundTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RoundPlayerCount;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RoundWinerTeamIndex;                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGMatchPlayerStat.PVERollWeaponRecord
// 0x0010
struct FPVERollWeaponRecord
{
	unsigned char                                      WeaponSubType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                WeaponSubID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuperWeapon : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Round;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGModeGuideData.ModeGudiePlayerInfo
// 0x0040
struct FModeGudiePlayerInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerTeamName;                                   		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RoleType;                                         		// 0x0024 (0x0004) [0x0000000000100000]              
	int                                                MemberState;                                      		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                CurRank;                                          		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                ChooseIndex[ 0x4 ];                               		// 0x0030 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGModeGuideData.ModeGuideMatchData
// 0x0028
struct FModeGuideMatchData
{
	unsigned char                                      MatchType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Match_ModeId;                                     		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                Match_SubModeId;                                  		// 0x0008 (0x0004) [0x0000000000100000]              
	TArray< int >                                      Match_MapId;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Match_TeamId;                                     		// 0x0018 (0x0004) [0x0000000000100000]              
	struct FString                                     Match_Uin;                                        		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineChannelController.RoomSelectedParameter
// 0x002C
struct FRoomSelectedParameter
{
	unsigned char                                      ModeClassifyIndex;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ModeIndex;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                SubModeIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MapIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MapConfigIndex;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                GameStateIndex;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                IdlePlayerCountIndex;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TargetIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TargetValueIndex;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                RespawnTimeIndex;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                RoomFlags;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCloseRedNameDisabled : 1;                        		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFriendDamageDisabled : 1;                        		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bThrowWeaponDisabled : 1;                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDeathBackDisabled : 1;                           		// 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct UTGame.TGOnlineChannelController.DefaultRoomSelectedParameter
// 0x0031
struct FDefaultRoomSelectedParameter
{
	struct FRoomSelectedParameter                      SelectedParameter;                                		// 0x0000 (0x002C) [0x0000000000000000]              
	unsigned long                                      bDataValid : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      WorldType;                                        		// 0x0030 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineChannelController.EnterRoomInfo
// 0x0018
struct FEnterRoomInfo
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bRoomLocked : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bChangedChannel : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHadGetAllChannel : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FQWord                                      EnterRoomID;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                MainChannelID;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SubChannelID;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineChannelData.AllFindRoomInfo
// 0x005D
struct FAllFindRoomInfo
{
	struct FMultiGameLobbyRoomInfo                     BaseRoomInfo;                                     		// 0x0000 (0x004C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nMainChannelId;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nSubChannelId;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                DeltaTime;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInSameZone : 1;                                  		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      nIndex;                                           		// 0x005C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGWithCross.QTalkUsersInfo
// 0x001C
struct FQTalkUsersInfo
{
	struct FString                                     QTUsrId;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     QTUsrNickName;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nQTStatus;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGWithCross.QTalkRecord
// 0x0094
struct FQTalkRecord
{
	unsigned long                                      IsEnterQTRoom : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     EnterRoomID;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EnterSubRoomID;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EnterLastRoomID;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EnterRoomName;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RoomStatusText;                                   		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      HasBindRoom : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     BindRoomID;                                       		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BindSubRoomID;                                    		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BindLastRoomID;                                   		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsGameMaskPhone : 1;                              		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsEnterQTalkTeamRoom : 1;                         		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                SoundsValue;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                MicValue;                                         		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsKeyTalk : 1;                                    		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurTalkType;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     KeyString;                                        		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MouseString;                                      		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGWithCross.QTalkStatus
// 0x0029
struct FQTalkStatus
{
	unsigned long                                      bEnterQTRoom : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     strRoomID;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strSubRoomID;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strLastRoomID;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      eHistoryStatus;                                   		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGWithCross.BindTeamQTalk
// 0x0024
struct FBindTeamQTalk
{
	struct FString                                     QTRoomID;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     QTSubRoomID;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     QTLastRoomID;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineShopData.FCommodityBuyInfo
// 0x000D
struct FFCommodityBuyInfo
{
	int                                                nCommodityID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nPriceSelected;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nDiscountCardItemID;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      PayType;                                          		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.PMTeamPlayerInfo
// 0x0024
struct FPMTeamPlayerInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsLeader : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurRank;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                CurStatusType;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.MatchSeasonDateMapping
// 0x001C
struct FMatchSeasonDateMapping
{
	unsigned long                                      bHadSendReq : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StartDate;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EndDate;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NextDate;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NextEndDate;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                StartTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                EndTime;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.SkillScoreRangeMapping
// 0x0008
struct FSkillScoreRangeMapping
{
	int                                                MinSkillScore;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxSkillScore;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.OnlineMatchLevelMappings
// 0x0030
struct FOnlineMatchLevelMappings
{
	TArray< struct FString >                           LevelNameArray;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LevelValueArray;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SkillScoreValueArray;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      NextAddScoreArray;                                		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalPersonalGameData.ProhibitPersonalMatchInfo
// 0x0010
struct FProhibitPersonalMatchInfo
{
	unsigned long                                      bHadSendReq : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                IntervalSecondsToEnd;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                StartSeconds;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DropOutCount;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalPlayerData.AvatarMenuArray
// 0x001C
struct FAvatarMenuArray
{
	int                                                CurWorldIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      MenuValueArray;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MenuNameArray;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalTeamGameData.TeamMatchGroupRankInfo
// 0x0020
struct FTeamMatchGroupRankInfo
{
	struct FUniquePropId                               TeamID;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                GroupID;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           MemberNameArray;                                  		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalTeamGameData.TeamMatchGameMemberInfo
// 0x002D
struct FTeamMatchGameMemberInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerAliasName;                                  		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDropOut : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsLeader : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      PlayerStatus;                                     		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalTeamGameData.TeamMatchGamePlayersInfo
// 0x0014
struct FTeamMatchGamePlayersInfo
{
	unsigned long                                      bGameInfoEffective : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TeamMatchId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FTeamMatchGameMemberInfo >          GamePlayerList;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalTeamGameData.TeamMatchGroupSimpleInfo
// 0x0018
struct FTeamMatchGroupSimpleInfo
{
	int                                                GroupID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ScoreValue;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GroupLevel;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     GroupName;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalTeamGameData.TeamMatchGroupRecordInfo
// 0x0019
struct FTeamMatchGroupRecordInfo
{
	int                                                CurSeasonScore;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CurSeasonWinTimes;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CurSeasonLostTimes;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CurSeasonDrawTimes;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                CurSeasonMatchCount;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CurSeasonRank;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      LevelNum;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalTeamGameData.TeamMatchGroupMemberInfo
// 0x0024
struct FTeamMatchGroupMemberInfo
{
	unsigned long                                      bIsLeader : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      OnlineState;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     PlayerUin;                                        		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalTeamGameData.TeamMatchGroupInfo
// 0x003C
struct FTeamMatchGroupInfo
{
	unsigned long                                      bHasGroup : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LeaderUin;                                        		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FUniquePropId                               TeamID;                                           		// 0x001C (0x0010) [0x0000000000000000]              
	int                                                GroupID;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	TArray< struct FTeamMatchGroupMemberInfo >         GroupMemberList;                                  		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalTeamGameData.TeamMatchLevelMapping
// 0x000C
struct FTeamMatchLevelMapping
{
	TArray< struct FString >                           LevelNameArray;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineLocalTechnicalGameData.PrizeInfo
// 0x0008
struct FPrizeInfo
{
	int                                                PrizeId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PrizeUseTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalTechnicalGameData.TechnicalMatchInfo
// 0x0014
struct FTechnicalMatchInfo
{
	int                                                TMMatchType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TMMatchMode;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TMChargeTp;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TMMatchingCount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TMInMatchCount;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineLocalTechnicalGameData.TMTeamPlayerInfo
// 0x0034
struct FTMTeamPlayerInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsLeader : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurRank;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                CurStatusType;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                TMMatchType;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                TMMatchMode;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TMChargeTp;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                PayType;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMatchData.OnlineMatchItem
// 0x0024
struct FOnlineMatchItem
{
	int                                                Uid;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MatchName;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                CurrentStatus;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BusIP;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     DescURL;                                          		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMatchData.OnlineMatchRoomItem
// 0x0038
struct FOnlineMatchRoomItem
{
	int                                                RoomID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BusIP;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                JudgeStatus;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Team1PlayerCount;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Team2PlayerCount;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ObCount;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     Team1Name;                                        		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Team2Name;                                        		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Team1UID;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Team2UID;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMatchData.OnlineMatchPlayerInfo
// 0x001C
struct FOnlineMatchPlayerInfo
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Uin;                                              		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                State;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMatchData.OnlineMatchTeamInfo
// 0x0034
struct FOnlineMatchTeamInfo
{
	int                                                TeamID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LeaderUin;                                        		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineMatchPlayerInfo >            PlayerList;                                       		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlineMatchData.OnlineMatchMapRule
// 0x002C
struct FOnlineMatchMapRule
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ModeId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SubModeId;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RuleType;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RuleValue;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                RespawnTime;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                RecordType;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineMatchData.OnlineMatchRoomInfo
// 0x0298
struct FOnlineMatchRoomInfo
{
	int                                                RoomID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FOnlineMatchPlayerInfo                      Judge;                                            		// 0x0004 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FOnlineMatchPlayerInfo                      Director;                                         		// 0x0020 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentMapRuleId;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     Team1Name;                                        		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Team2Name;                                        		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Team1UID;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                Team2UID;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	struct FOnlineMatchTeamInfo                        Team1Info;                                        		// 0x0060 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FOnlineMatchTeamInfo                        Team2Info;                                        		// 0x0094 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineMatchPlayerInfo >            ObserverList;                                     		// 0x00C8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineMatchMapRule >               MapRuleList;                                      		// 0x00D4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FOnlineMatchMapRule                         Rules[ 0xA ];                                     		// 0x00E0 (0x01B8) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlinePersonalGame.PMDSInfoData
// 0x0014
struct FPMDSInfoData
{
	unsigned long                                      bHadPing : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      CurMatchType;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
	TArray< struct FUTCDS_DSInfo >                     DSPingInfoList;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGOnlinePlayerTaskData.PlayerTaskInfoWIP
// 0x0028
struct FPlayerTaskInfoWIP
{
	struct FUniquePropId                               Guid;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                TaskID;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< int >                                      TaskNodeValue;                                    		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      StatusType;                                       		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      ViewStatus;                                       		// 0x0021 (0x0001) [0x0000000000000000]              
	int                                                AcceptTimeSeconds;                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlinePlayerTaskData.PlayerTaskInfoDone
// 0x000C
struct FPlayerTaskInfoDone
{
	int                                                TaskID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FinishTimeSeconds;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineShopData.FGiftInfo
// 0x0038
struct FFGiftInfo
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FUniquePropId                               GiftId;                                           		// 0x000C (0x0010) [0x0000000000000000]              
	int                                                CommodityID;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     GiveTime;                                         		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                wAvailTime;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      wState;                                           		// 0x0030 (0x0001) [0x0000000000000000]              
	unsigned long                                      bSystermGive : 1;                                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGOnlineShopData.LimitedCommodityInfo
// 0x0008
struct FLimitedCommodityInfo
{
	int                                                CommodityID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BuyedCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineShopData.ExpireCommodityInfo
// 0x0028
struct FExpireCommodityInfo
{
	int                                                CommodityID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNewAdd : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExpired : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     CommodityType;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FUniquePropId                               ItemPropId;                                       		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineShopData.PropsProperty
// 0x0038
struct FPropsProperty
{
	struct FString                                     ullUin;                                           		// 0x0000 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ullGID;                                           		// 0x000C (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ullResId;                                         		// 0x0018 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                StackNums;                                        		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ObtainTime;                                       		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Validity;                                         		// 0x0030 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Durability;                                       		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGOnlineSystemSettings.KeyBindingData
// 0x0006
struct FKeyBindingData
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      KeyBindType;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      KeyBindCommandType;                               		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineSystemSettings.SettingMapData
// 0x0008
struct FSettingMapData
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGTaskTable.BasicInfo
// 0x007E
struct FBasicInfo
{
	int                                                UniqueId;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GroupID;                                          		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SequenceNum;                                      		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ClanPrestige;                                     		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Name;                                             		// 0x0010 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bClosed : 1;                                      		// 0x001C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	int                                                Difficulty;                                       		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Popularity;                                       		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Description;                                      		// 0x0028 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Requirement;                                      		// 0x0034 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      TaskType;                                         		// 0x0040 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     InGameModeStr;                                    		// 0x0044 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bGroupRandom : 1;                                 		// 0x0050 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bPreRandom : 1;                                   		// 0x0050 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	int                                                PreMissionId;                                     		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                PostMissionId;                                    		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MinRecomLevel;                                    		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxRecomLevel;                                    		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                StartTime;                                        		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                EndTime;                                          		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GPCost;                                           		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bNetBarLimit : 1;                                 		// 0x0070 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bVIPLimit : 1;                                    		// 0x0070 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bUinLimit : 1;                                    		// 0x0070 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	int                                                TeamLevelLimit;                                   		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                CycleTime;                                        		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      SuccessType;                                      		// 0x007C (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      AcceptType;                                       		// 0x007D (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGTaskTable.PropBasicInfo
// 0x0008
struct FPropBasicInfo
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGTaskTable.PropInfo
// 0x0010
struct FPropInfo
{
	unsigned char                                      UseType;                                          		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FPropBasicInfo                              PropBasic;                                        		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                Indate;                                           		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGTaskTable.AcceptLimit
// 0x000C
struct FAcceptLimit
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FVector2D                                   Value;                                            		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGTaskTable.TaskNodeInfo
// 0x0038
struct FTaskNodeInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Description;                                      		// 0x0004 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                Param1;                                           		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Param2;                                           		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Param3;                                           		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Param4;                                           		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Param5;                                           		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Param6;                                           		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Param7;                                           		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Param8;                                           		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Param9;                                           		// 0x0030 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TargetValue;                                      		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct UTGame.TGTaskTable.AwardPropInfo
// 0x0010
struct FAwardPropInfo
{
	struct FPropBasicInfo                              PropBasic;                                        		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                Indate;                                           		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bOptional : 1;                                    		// 0x000C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct UTGame.TGTaskTable.AwardInfo
// 0x0024
struct FAwardInfo
{
	int                                                StartLevel;                                       		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                EndLevel;                                         		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GP;                                               		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Exp;                                              		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MP;                                               		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TP;                                               		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FAwardPropInfo >                    AwardProps;                                       		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTaskTable.TaskStaticInfo
// 0x00BC
struct FTaskStaticInfo
{
	struct FBasicInfo                                  Basic;                                            		// 0x0000 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPropInfo >                         PropDemandList;                                   		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPropInfo >                         PropGivenList;                                    		// 0x008C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FAcceptLimit >                      AcceptLimitList;                                  		// 0x0098 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTaskNodeInfo >                     TaskNodeList;                                     		// 0x00A4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FAwardInfo >                        AwardList;                                        		// 0x00B0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTaskTable.TaskLinkedGroupList
// 0x0010
struct FTaskLinkedGroupList
{
	unsigned char                                      GroupType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< int >                                      TaskIDList;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTaskTable.TaskRandomGroupList
// 0x0010
struct FTaskRandomGroupList
{
	unsigned char                                      GroupType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< int >                                      TaskIDList;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGSurveyTable.OptionInfo
// 0x0024
struct FOptionInfo
{
	struct FString                                     Description;                                      		// 0x0000 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ShieldIdStr;                                      		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ShieldIdList;                                     		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGSurveyTable.QuestionInfo
// 0x0044
struct FQuestionInfo
{
	int                                                SurveyId;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                QuestionId;                                       		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GroupID;                                          		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                OptionCount;                                      		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MinOptionCount;                                   		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxOptionCount;                                   		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bMustAnswer : 1;                                  		// 0x0028 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	int                                                RightOption;                                      		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bShield : 1;                                      		// 0x0030 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	int                                                MinAnsStrlen;                                     		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FOptionInfo >                       Options;                                          		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGSurveyTable.SurveyInfo
// 0x0010
struct FSurveyInfo
{
	int                                                SurveyId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FQuestionInfo >                     Questions;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGSurveyTable.QuestionResult
// 0x0020
struct FQuestionResult
{
	int                                                QuestionId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GroupID;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ChoiceIdList;                                     		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     AnswerStr;                                        		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTaskManager.FinishedTask
// 0x0005
struct FFinishedTask
{
	int                                                TaskID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      AwardType;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGOnlineTechnicalGame.TechnicalMatchData
// 0x001D
struct FTechnicalMatchData
{
	int                                                eMode;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nMoney;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsTeam : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nTeamId;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     strUin;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      bPayType;                                         		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGPersonalScoreBoardData.PersonalGameScoreBoardInfo
// 0x0068
struct FPersonalGameScoreBoardInfo
{
	struct FString                                     PlayerUin;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     AnoymityName;                                     		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                TopRank;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                CurExperience;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                KillTimes;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                KilledTimes;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsDayFirstWin : 1;                                		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Feat_FPScore;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Round_FPScore;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                MatchLevel_FPScore;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ACE_FPScore;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Active_FPScore;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                TodayFirstWin_FPScore;                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MatchFightScore;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                GetFightScore;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                PreFightScore;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                PlayerScore;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDropOut : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MatchLevel;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGPersonalScoreBoardData.PVPGameStatis
// 0x0049
struct FPVPGameStatis
{
	int                                                GameTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ACEUin;                                           		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MVPUin;                                           		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     C4PlantExpert;                                    		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     C4DefuseExpert;                                   		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     CPPioneer;                                        		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RegularScore;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                RebelScore;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned char                                      WinnerTeamIndex;                                  		// 0x0048 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGPlayerScoreData.RankInfo
// 0x001C
struct FRankInfo
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     RankName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ExpValue;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                IncLevelExp;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                IncIncLevelExp;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGProj_Arrow.ArrowAttachInfo
// 0x0028
struct FArrowAttachInfo
{
	struct FName                                       AttachTargetBoneName;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bKillTarget : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      HitGroup;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	struct FVector                                     RelativeHitLocation;                              		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeHitRotation;                              		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGProj_Laser.LaserHitInfo
// 0x001C
struct FLaserHitInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRankListManager.RankLevelSection
// 0x0008
struct FRankLevelSection
{
	float                                              Position;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ShowPosition;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRankListManager.RankListType
// 0x0048
struct FRankListType
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PType;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Date;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasAward : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowPlayerInfo : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     MyDataDesc;                                       		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      UpdateType;                                       		// 0x001C (0x0001) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Titles;                                           		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                NumOfTitles;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     TipString;                                        		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGRankListManager.RankListItemValue
// 0x0014
struct FRankListItemValue
{
	struct FUniquePropId                               Value;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                UpOrDown;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRankListManager.RankListItemImpl
// 0x0044
struct FRankListItemImpl
{
	int                                                Rank;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Uin;                                              		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FUniquePropId                               Exp;                                              		// 0x0010 (0x0010) [0x0000000000100000]              
	struct FString                                     NickName;                                         		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FRankListItemValue                          Value;                                            		// 0x002C (0x0014) [0x0000000000000000]              
	int                                                ExtendSection;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRankListManager.RankListImpl
// 0x0028
struct FRankListImpl
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PType;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Date;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoaded : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SelfOffset;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              MyData;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadAskAward : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FRankListItemImpl >                 DataArray;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGRankListManager.RankListAwardValue
// 0x000D
struct FRankListAwardValue
{
	struct FString                                     Value;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRankListManager.RankListStayTimeRecord
// 0x0008
struct FRankListStayTimeRecord
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TimeSeconds;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRealGun.ClientAttackPawnInfo
// 0x0040
struct FClientAttackPawnInfo
{
	class APawn*                                       DamagePawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      DamageActor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      WallNum;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      HitGroup;                                         		// 0x0009 (0x0001) [0x0000000000000000]              
	int                                                HitDamage;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     DamagePawnLoc;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FName                                       HitBoneName;                                      		// 0x0034 (0x0008) [0x0000000000000000]              
	float                                              SAndCDistance;                                    		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGRefInventoryManager.InventoryClassContent
// 0x000C
struct FInventoryClassContent
{
	int                                                WeaponSubType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WeaponSubID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UClass*                                      InventoryClass;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGScoreBoardController.GameScoreHead
// 0x0070
struct FGameScoreHead
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BaseEXP;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                GetEXP;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SpecialEXP;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                PlayGameTime;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TeamRateEXP;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NetBarRateEXP;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ToolsRateEXP;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ClanTeamRateEXP;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                VipRateEXP;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                ActvRateEXP;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PendantEXP;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                TodayFirstWinEXP;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                SpecRateEXP;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                TimesKill;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                TimesBeKilled;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                GameScore;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpector : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                GetGP;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                SpecialGP;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                TeamRateGP;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                NetBarRateGP;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                ToolsRateGP;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                CommonRateGP;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                ActvRateGP;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                PendantGP;                                        		// 0x006C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGScoreBoardController.GamePlayerInfo
// 0x0028
struct FGamePlayerInfo
{
	struct FString                                     strUin;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strName;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nRankValue;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     strRankPath;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGScoreBoardData.PVEDetailKillInfo
// 0x002C
struct FPVEDetailKillInfo
{
	int                                                GameTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DeathCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count1;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Kill_Count2;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count3;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count4;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Kill_Count5;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Boss_Hurt;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Boss_Kill;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Boss_BeKill;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGShopManager.ShopRoomDisplayImageConfig
// 0x002C
struct FShopRoomDisplayImageConfig
{
	struct FString                                     ServerFileName;                                   		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalFileName;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                DownloadTaskID;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     ConfigLocalPath;                                  		// 0x0020 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGShopManager.ShopThirdClassify
// 0x0010
struct FShopThirdClassify
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000504000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGShopManager.ShopSecondClassify
// 0x001C
struct FShopSecondClassify
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000504000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FShopThirdClassify >                ThirdClassifyArray;                               		// 0x0010 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGShopManager.ShopClassify
// 0x001C
struct FShopClassify
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000504000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FShopSecondClassify >               SecondClassifyArray;                              		// 0x0010 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGShopManager.ShopRoomDisplayImagePathMapping
// 0x000C
struct FShopRoomDisplayImagePathMapping
{
	struct FString                                     ImagePath;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGShopManager.RoleSoundsPathMapping
// 0x0010
struct FRoleSoundsPathMapping
{
	int                                                nItemID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           SoundsPathArray;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGShopManager.ShopMenuArray
// 0x0018
struct FShopMenuArray
{
	TArray< int >                                      MenuValueArray;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MenuNameArray;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGSkelCtrl_FlamethrowerScaling.FlameScaleInParams
// 0x0014
struct FFlameScaleInParams
{
	struct FVector2D                                   ScaleInTimeRange;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ScaleRange;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pow;                                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UTGame.TGSkelCtrl_FlamethrowerScaling.FlameVelocityScaleParams
// 0x0014
struct FFlameVelocityScaleParams
{
	struct FVector2D                                   VelocityRange;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ScaleRange;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pow;                                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UTGame.TGSkelCtrl_FlamethrowerScaling.FlameBoneScaleParams
// 0x003C
struct FFlameBoneScaleParams
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CachedBoneIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bScaleIn : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FFlameScaleInParams                         ScaleInParams;                                    		// 0x0010 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bScaleWithVelocity : 1;                           		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FFlameVelocityScaleParams                   VelocityScaleParams;                              		// 0x0028 (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UTGame.TGTaskManager.PreRandomTask
// 0x0008
struct FPreRandomTask
{
	int                                                GroupID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TaskID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGTaskManager.TaskFilterInfo
// 0x0010
struct FTaskFilterInfo
{
	int                                                TaskFilterType;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TaskFilterDesc;                                   		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTaskManager.GameVideoViewRecord
// 0x0014
struct FGameVideoViewRecord
{
	int                                                ModeId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bViewed : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     WebAddress;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTaskManager.TaskInfoUI
// 0x0050
struct FTaskInfoUI
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Requirement;                                      		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                GPCost;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     NotAcceptableMsg;                                 		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsRandom : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsRecommended : 1;                               		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsAcceptable : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsNew : 1;                                       		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsFailed : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCanSubmit : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIsAbdicable : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHasFailNode : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                SequenceNum;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                AcceptTime;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   ProgressPct;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGTaskManager.NewTaskInfoUI
// 0x00B0
struct FNewTaskInfoUI
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SrcID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GroupID;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x000D (0x0001) [0x0000000000000000]              
	int                                                ClanPrestige;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Requirement;                                      		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ShortDescription;                                 		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Difficulty;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Popularity;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                GPCost;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     NotAcceptableMsg;                                 		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AwardMP;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                AwardGP;                                          		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                AwardTP;                                          		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FString                                     AwardItemString;                                  		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AwardItemIconString;                              		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsRandom : 1;                                    		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsRecommended : 1;                               		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsAcceptable : 1;                                		// 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsVisible : 1;                                   		// 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsNew : 1;                                       		// 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsFailed : 1;                                    		// 0x0080 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCanSubmit : 1;                                   		// 0x0080 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bIsAbdicable : 1;                                 		// 0x0080 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bHasFailNode : 1;                                 		// 0x0080 (0x0004) [0x0000000000000000] [0x00000100] 
	int                                                SequenceNum;                                      		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                AcceptTime;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                AchieveTimes;                                     		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNetBarLimit : 1;                                 		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ProgressName;                                     		// 0x0094 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector2D                                   ProgressPct;                                      		// 0x00A0 (0x0008) [0x0000000000000000]              
	int                                                PreMissionId;                                     		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                PostMissionId;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGTeamMatchController.OpenTeamMatchManagerInfo
// 0x001C
struct FOpenTeamMatchManagerInfo
{
	unsigned long                                      bHadGroup : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTempGroup : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsLeader : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanManagerGroupNow : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTipsManager.TipBaseData
// 0x0018
struct FTipBaseData
{
	int                                                TipID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GameFlag;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MatchFlag;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     TipString;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.TGTMPlayerReplicationInfo.EnemyKilledData
// 0x0010
struct FEnemyKilledData
{
	struct FString                                     Uin;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                KillTimes;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGUIAvatarWidget.MainWeaponAnimData
// 0x0010
struct FMainWeaponAnimData
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       WeaponAnimName;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseLeftWeaponSocket : 1;                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGUIAvatarWidget.AssiWeaponAnimData
// 0x0010
struct FAssiWeaponAnimData
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       WeaponAnimName;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseLeftWeaponSocket : 1;                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.TGUIAvatarWidget.MeleeWeaponAnimData
// 0x000C
struct FMeleeWeaponAnimData
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       WeaponAnimName;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGUIAvatarWidget.ThrowWeaponAnimData
// 0x000C
struct FThrowWeaponAnimData
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       WeaponAnimName;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UTGame.TGUIAvatarWidget.ResDataInfo
// 0x0008
struct FResDataInfo
{
	class UTGResData*                                  resData;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTVehicle.MaterialList
// 0x000C
struct FMaterialList
{
	TArray< class UMaterialInterface* >                Materials;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UTGame.UTVehicle.TimePosition
// 0x0010
struct FTimePosition
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTCommonDataStruct.AchiInChat
// 0x000C
struct FAchiInChat
{
	int                                                AchiID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CurLevel;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AchievedTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTEntryPlayerController.AvatarCameraConfig
// 0x0078
struct FAvatarCameraConfig
{
	struct FVector                                     CameraPos4X3;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CameraRotate4X3;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     CameraPos5X3;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CameraRotate5X3;                                  		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     CameraPos5X4;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CameraRotate5X4;                                  		// 0x003C (0x000C) [0x0000000000000000]              
	struct FVector                                     CameraPos16X9;                                    		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CameraRotate16X9;                                 		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FVector                                     CameraPos16X10;                                   		// 0x0060 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CameraRotate16X10;                                		// 0x006C (0x000C) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTGameObjective.ScorerRecord
// 0x0008
struct FScorerRecord
{
	class AUTPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Pct;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTGameViewportClient.LoadingTexSetting
// 0x0030
struct FLoadingTexSetting
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TexName;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WordTexName;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  LoadingTex;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  LoadingWordTex;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UTGame.UTGib.StaticMeshDatum
// 0x0014
struct FStaticMeshDatum
{
	class UStaticMesh*                                 TheStaticMesh;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               TheSkelMesh;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               ThePhysAsset;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DrawScale;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseSecondaryGibMeshMITV : 1;                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UTGame.UTPawnSoundGroup.FootstepSoundInfo
// 0x000C
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif