/*
#############################################################################################
# Assault Fire (1.0.0.26) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TGameGfxUI_classes.h
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

#define CONST_INVALIDE_TAB_INDEX                                 -1
#define CONST_INVALID_PAGE_INDEX                                 -1
#define CONST_DelimString                                        "@@"
#define CONST_BagContentCount                                    6
#define CONST_InvailID                                           -1
#define CONST_ClipBoardContentVarName                            ".ClipBoardContent"
#define CONST_SNS_BTFAIL_DISABLE                                 788
#define CONST_SNS_BTFAIL_FULL                                    787
#define CONST_SNS_BTFAIL_ACTV                                    786
#define CONST_SNS_BTFAIL_COUNT                                   785
#define CONST_SNS_BTFAIL_SEVERFULL                               784
#define CONST_EBTFT_CANINVITE                                    1
#define CONST_ACTV_ERR_ASKAWARD_FAIL                             2579
#define CONST_EABTE_DAILYNOTICE                                  6
#define CONST_EABTE_ASKAWARD                                     4
#define CONST_EABTE_DETAIL                                       3
#define CONST_EABTE_INVITE                                       2
#define CONST_EABTE_JOIN                                         1
#define CONST_SNS_INVITEFRIEND_IN_SPECIAL_PANEL                  783
#define CONST_SNS_ERR_SAMEADDR                                   782
#define CONST_ACH_ERR_FAIL                                       2561
#define CONST_ACH_ERR_SUCC                                       35328
#define CONST_ZONE_ROOM_ALLREADY_IN_ROOM                         413
#define CONST_GFX_EAFTE_BYNICKNAME                               2
#define CONST_GFX_EAFTE_BYQQ                                     1
#define CONST_GFXERROR_ZONE_FAIL_CHAT_DIRTY                      273
#define CONST_GFXERROR_ZONE_FAIL_CHAT_BANNED                     272
#define CONST_GFXERROR_ZONE_FAIL_CHAT_STATUSERROR                271
#define CONST_GFXERROR_ZONE_FAIL_CHAT_INMATCH                    270
#define CONST_GFXERROR_ZONE_FAIL_CHAT_OFFLINE                    269
#define CONST_GFXERROR_ZONE_FAIL_CHAT_NOTINROOM                  268
#define CONST_GFXERROR_ZONE_FAIL_CHAT_NOTINZONE                  267
#define CONST_INPUT_CHAR_BRAZILIAN_CRUZEIRO                      0x80
#define CONST_INPUT_CHAR_CP1252_OTHERS                           0x40
#define CONST_INPUT_CHAR_CP1252_LATIN                            0x20
#define CONST_INPUT_CHAR_PORTUGUESE_LATIN                        0x10
#define CONST_INPUT_CHAR_ASCII_PUNCTUATION                       0x08
#define CONST_INPUT_CHAR_SPECIAL                                 0x04
#define CONST_INPUT_CHAR_ASCII_LATIN                             0x02
#define CONST_INPUT_CHAR_ASCII_DIGIT                             0x01
#define CONST_STEAL_TYPE_COUNT                                   2
#define CONST_E_SCSTE_CLAN                                       2
#define CONST_E_SCSTE_SNS                                        1
#define CONST_REWARDCARD_ATDCARD                                 4
#define CONST_REWARDCARD_LDCARD                                  3
#define CONST_REWARDCARD_IFCARD                                  2
#define CONST_REWARDCARD_SVCARD                                  1
#define CONST_BOUNTYMATCHMODE_BM                                 7
#define CONST_BOUNTYMATCHMODE_AM                                 6
#define CONST_BOUNTYMATCHMODE_CP                                 5
#define CONST_BOUNTYMATCHMODE_SNIPE                              4
#define CONST_BOUNTYMATCHMODE_KNIFE                              3
#define CONST_BOUNTYMATCHMODE_IM                                 2
#define CONST_BOUNTYMATCHMODE_TDM                                1
#define CONST_RANKLIST_AWARDERROR_HADREQUERY                     0x06
#define CONST_RANKLIST_AWARDERROR_NOTINRANK                      0x05
#define CONST_RANKLIST_AWARDERROR_RANKPOS                        0x04
#define CONST_RANKLIST_AWARDERROR_RANKDATE                       0x03
#define CONST_RANKLIST_AWARDERROR_RANKTYPE                       0x02
#define CONST_RANKLIST_AWARDERROR_ERROR                          0x01
#define CONST_RANKLIST_AWARDERROR_SUCC                           0x00
#define CONST_MEMBER_PAY                                         1
#define CONST_LEADER_PAY                                         0
#define CONST_BTEAM_ERR_MEMBERCOUNT                              8254
#define CONST_BTEAM_ERR_PAYTYPE                                  8253
#define CONST_BTEAM_ERR_NOTINSEASON                              8252
#define CONST_BTEAM_ERR_TEAMINFIGHTING                           8251
#define CONST_BTEAM_ERR_TEAMINMATCHING                           8250
#define CONST_BTEAM_ERR_NOTLEADER                                8249
#define CONST_BTEAM_ERR_THETEAMFULL                              8248
#define CONST_BTEAM_ERR_SEND2BMATCHFAIL                          8247
#define CONST_BTEAM_ERR_PACK2BMATCHFAIL                          8246
#define CONST_BTEAM_ERR_TEAMNOTEXIST                             8245
#define CONST_BTEAM_ERR_LEADERNOTMATCHING                        8244
#define CONST_BTEAM_ERR_NOTALLREADY                              8243
#define CONST_BTEAM_ERR_ALREADYINTEAM                            8242
#define CONST_BTEAM_ERR_NOEMPTYPOS                               8241
#define CONST_BTEAM_ERR_SUCC                                     8240
#define CONST_BOUNTYMATCH_ERR_NOTEXIST_DSSERVER                  8556
#define CONST_BOUNTYMATCH_ERR_NOTEXIST_MATCHPLAYER               8456
#define CONST_BOUNTYMATCH_ERR_INVALID_MATCHPOOL                  8455
#define CONST_BOUNTYMATCH_ERR_UNAVAILABLE_MATCHSERVER            8454
#define CONST_BOUNTYMATCH_ERR_DUPLICATE_MATCHPLAYER              8453
#define CONST_BOUNTYMATCH_ERR_TIMEOUT                            8452
#define CONST_BOUNTYMATCH_ERR_NOMONEY                            8451
#define CONST_BOUNTYMATCH_ERR_NOTMATCHTIME                       8450
#define CONST_BOUNTYMATCH_ERR_FAIL                               8449
#define CONST_BOUNTYMATCH_ERR_SUCC                               8448
#define CONST_TEAM_ERR_TEAMNOTEXIST                              8198
#define CONST_TEAM_ERR_LEADERNOTMATCHING                         8197
#define CONST_TEAM_ERR_NOTALLREADY                               8196
#define CONST_TEAM_ERR_NOEMPTYPOS                                8194
#define CONST_STAT_ERR_FAIL_PROHIBIT                             6406
#define CONST_STAT_ERR_FAIL_LOWLEVEL                             6405
#define CONST_STAT_ERR_FAIL_ALREADYJOIN                          6404
#define CONST_STAT_ERR_FAIL_NOTINTIME                            6403
#define CONST_STAT_ERR_FAIL_NOTINSEASON                          6402
#define CONST_STAT_ERR_FAIL                                      6401
#define CONST_EVOTETYPE_MASTER_Rank                              15
#define CONST_EVOTETYPE_SKILLED_Rank                             8
#define CONST_EVOTETYPE_NEWER_Rank                               5
#define CONST_SysNtf_SPECIALFORTUNE                              14
#define CONST_SysNtf_Lottery                                     12
#define CONST_SysNtf_HallNotice                                  11
#define CONST_SysNtf_SmallTromba                                 10
#define CONST_SysNtf_BigTromba                                   9
#define CONST_SysNtf_AchievementGlobal                           8
#define CONST_SysNtf_AchievementZONE                             7
#define CONST_SysNtf_AchievementChannel                          6
#define CONST_SysNtf_AchievementRoom                             5
#define CONST_SysNtf_Achievement                                 4
#define CONST_SysNtf_Svrdown                                     3
#define CONST_SysNtf_Onetime                                     2
#define CONST_SysNtf_Regular                                     1
#define CONST_EACHITYPE_NONFIGHT                                 2
#define CONST_PR_GM                                              9
#define CONST_ETRACEENTERROOM_NONE                               0
#define CONST_ECHATTYPE_P2PGM                                    5120
#define CONST_ECHATTYPE_P2PSTRANGER                              1024
#define CONST_ECHATTYPE_P2PCLAN                                  512
#define CONST_ECHATTYPE_P2PFRIEND                                256
#define CONST_ECHATTYPE_BRDGAMETEAM                              128
#define CONST_ECHATTYPE_BRDTACTIC                                64
#define CONST_ECHATTYPE_BRDGAMECAMP                              32
#define CONST_ECHATTYPE_BRDGAME                                  16
#define CONST_ECHATTYPE_BRDCLAN                                  4
#define CONST_ECHATTYPE_BRDROOM                                  2
#define CONST_ECHATTYPE_BRDCHANNEL                               1
#define CONST_ECHATTYPE_TROMBA                                   0
#define CONST_CHATBROADCAST_MODEMATCHINGTEAM                     26
#define CONST_CHATBROADCAST_TACTICS                              23
#define CONST_CHATBROADCAST_CLANMATCHTEAM                        17
#define CONST_CHATBROADCAST_PMTEAM                               16
#define CONST_ECAMP_OBSERVER                                     2
#define CONST_EPVELEVEL_HERO                                     3
#define CONST_EPVELEVEL_HARD                                     2
#define CONST_EPVELEVEL_COMMON                                   1
#define CONST_ID_MT_PVP_TM32                                     4104
#define CONST_EPLAYMODE_OBSERVE                                  1
#define CONST_EPLAYMODE_MATCH                                    0
#define CONST_PS_LOADINGMATCH                                    11
#define CONST_EGAMERECORDTYPE_LIVE                               2
#define CONST_EGAMERECORDTYPE_RECORD                             1
#define CONST_EGAMERECORDTYPE_NULL                               0
#define CONST_RF_MOREWATCHER_ENABLED                             0x80000
#define CONST_LEAVEROOM_TO_TRACEROOM                             4
#define CONST_LEAVEROOM_TO_PK                                    3
#define CONST_TIMERCMD_STOP                                      2
#define CONST_TIMERCMD_START                                     1
#define CONST_EXCHANGE_ERR_OFFSALETIME                           1796
#define CONST_EXCHANGE_ERR_FAIL                                  1794
#define CONST_EXCHANGE_ERR_SUCC                                  1793
#define CONST_MAX_SHOWLOADINGRANKUI_TIME                         6
#define CONST_MIN_SHOWLOADINGRANKUI_TIME                         0.8
#define CONST_ZONE_FAIL_CHAT_INCMMATCH                           278
#define CONST_ZONE_FAIL_CHAT_CLAN_FREEZE                         274
#define CONST_MIN_NICK_NAME_LEN                                  4
#define CONST_MAX_NICK_NAME_LEN                                  16
#define CONST_CTEAM_ERR_MEMBERCOUNT                              8222
#define CONST_CTEAM_ERR_NOTINSEASON                              8221
#define CONST_CTEAM_ERR_TEAMINFIGHTING                           8220
#define CONST_CTEAM_ERR_TEAMINMATCHING                           8219
#define CONST_CTEAM_ERR_NOTLEADER                                8218
#define CONST_CTEAM_ERR_LEADERNOTMATCHING                        8213
#define CONST_CTEAM_ERR_MEMBERISREADY                            8212
#define CONST_CTEAM_ERR_NOTALLREADY                              8211
#define CONST_CTEAM_ERR_NOEMPTYPOS                               8209
#define CONST_CTEAM_ERR_SUCC                                     8208
#define CONST_CLAN_ERR_FIRE_NEWPLAYER                            4146
#define CONST_CLAN_ERR_NOTICE_NOT_ENOUGH_MONEY                   4142
#define CONST_CLAN_ERR_EXCEEDS_MAX_NOTICE_COUNT                  4141
#define CONST_CLAN_ERR_MATCH_NOT_IN_TIME                         4140
#define CONST_CLAN_ERR_MATCH_NOT_IN_SEASON                       4139
#define CONST_CLAN_ERR_GROUP_IN_MATCH                            4138
#define CONST_CREATETEAM_LIMIT                                   10
#define CONST_MIN_TEAMGROUP_NAME_LEN                             4
#define CONST_MAX_TEAMGROUP_NAME_LEN                             4
#define CONST_MIN_CLAN_SAFECODE_LEN                              4
#define CONST_MAX_CLAN_SAFECODE_LEN                              10
#define CONST_MIN_CLAN_NAME_LEN                                  4
#define CONST_MAX_CLAN_NAME_LEN                                  16
#define CONST_CLAN_ERR_EXCEEDS_MAX_INVITE_COUNT                  4153
#define CONST_CLAN_ERR_INVALID_MEMBER_COUNT                      4152
#define CONST_CLAN_ERR_PRAY_COOLING                              4147
#define CONST_EGSTE_STRANGER                                     4
#define CONST_EGSTE_CLAN                                         3
#define CONST_EGSTE_SNS                                          1
#define CONST_QI_ERR_SUCC                                        35361
#define CONST_QI_ERR_TODAY_FULL                                  2598
#define CONST_QI_ERR_TIME_LESS                                   2597
#define CONST_QI_ERR_NOT_QQFRIEND                                2596
#define CONST_QI_ERR_TODAY_DONE                                  2595
#define CONST_QI_ERR_ACCOUNT_EXIST                               2594
#define CONST_SNS_SCERR_ZERO                                     796
#define CONST_SNS_SCERR_FAIL                                     795
#define CONST_SNS_FAIL_WRONG_FM_FULL                             794
#define CONST_SNS_FAIL_WRONG_FM_DONE                             793
#define CONST_SNS_FAIL_WRONG_FMID                                792
#define CONST_SNS_FAIL_CHUMMY_INSUFFICIENT                       791
#define CONST_SNS_FAIL_MSG_FULL                                  790
#define CONST_SNS_FAIL_BADGROUPNAME                              789
#define CONST_DefaultGrenadeLocation                             3
#define CONST_EUPDATEPROPERTYTYPE_SPECIALFORTUNEPROP             52
#define CONST_EUPDATEPROPERTYTYPE_LOTTERYUSECOMPONENT            40
#define CONST_EUPDATEPROPERTYTYPE_LOTTEREXCHANGEPROP             39
#define CONST_EUPDATEPROPERTYTYPE_LOTTERYUSEBULLET               38
#define CONST_EUPDATEPROPERTYTYPE_LOTTERYFIRE                    37
#define CONST_EUPDATEPROPERTYTYPE_LOTTERYBULLET                  36
#define CONST_EUPDATEPROPERTYTYPE_CONSUMESTACK                   29
#define CONST_EUPDATEPROPERTYTYPE_CONSUMEOUT                     24
#define CONST_EUPDATEPROPERTYTYPE_BOUNTYMATCH_PROP               49
#define CONST_EUPDATEPROPERTYTYPE_CLANPRAY                       47
#define CONST_EUPDATEPROPERTYTYPE_ACTV                           32
#define CONST_ZONE_FAIL_PROPTYPEMISMATCH                         265
#define CONST_EUPDATEPROPERTYTYPE_EXCHANGE_PROP                  43
#define CONST_EUPDATEPROPERTYTYPE_LEVELUP                        16
#define CONST_EUPDATEPROPERTYTYPE_QBQP2TP                        15
#define CONST_EUPDATEPROPERTYTYPE_MIS_DEL                        14
#define CONST_EUPDATEPROPERTYTYPE_EXPIRE_LOGIN                   13
#define CONST_EUPDATEPROPERTYTYPE_ACH                            12
#define CONST_EUPDATEPROPERTYTYPE_MIS_COMMIT                     11
#define CONST_EUPDATEPROPERTYTYPE_MIS_ACCEPT                     10
#define CONST_EUPDATEPROPERTYTYPE_ADDAVAILD_RB                   9
#define CONST_EUPDATEPROPERTYTYPE_ADDAVAILD                      8
#define CONST_EUPDATEPROPERTYTYPE_RENEW_RB                       7
#define CONST_EUPDATEPROPERTYTYPE_RENEW                          6
#define CONST_EUPDATEPROPERTYTYPE_PRESENT                        5
#define CONST_EUPDATEPROPERTYTYPE_DEMAND                         4
#define CONST_EUPDATEPROPERTYTYPE_BUY_RB                         3
#define CONST_EUPDATEPROPERTYTYPE_BUY                            2
#define CONST_EUPDATEPROPERTYTYPE_EXPIRE_ONLINE                  1
#define CONST_MAX_BUY_COMMODITY_COUNT                            20
#define CONST_ZONE_FAIL_FULLDURABILITY                           354
#define CONST_EFREEROLE_NOCHOLAS                                 5
#define CONST_EFREEROLE_DJMAN02                                  4
#define CONST_EFREEROLE_VARIANCE                                 3
#define CONST_EFREEROLE_RUSSIAN                                  2
#define CONST_EFREEROLE_JAY                                      1
#define CONST_EFREEROLE_GHOSTARMY                                0
#define CONST_LIVE_ERR                                           9217
#define CONST_LIVE_SUCCESS                                       9216
#define CONST_ZONE_FAIL_CHANNEL_ROOM_FULL                        336
#define CONST_ZONE_FAIL_INVALID_ROLE                             421
#define CONST_AchievementListCount                               6
#define CONST_PackageName                                        "UTGameUI"
#define CONST_SectionName                                        "GfxMovie_AchiScoreAwards"
#define CONST_AskAwardInterval                                   30
#define CONST_CheckDailyResult_YouCheckedAllDay                  10
#define CONST_SectionName01                                      "GfxMovie_ActivitySystem"
#define CONST_MAX_QQ_LEN                                         12
#define CONST_PerPageItemNum                                     10
#define CONST_LOADINGTIME                                        1
#define CONST_CHARACTERCOUNT                                     3
#define CONST_CommodityID_Bag3                                   200026
#define CONST_CommodityID_Bag4                                   200027
#define CONST_CommodityID_Bag5                                   200028
#define CONST_CommodityID_GrenadeBag                             200159
#define CONST_CommodityID_ExtendSkill                            200210
#define CONST_CODED_BOX_KEY_SHOP_ID                              200489
#define CONST_GiftType                                           4
#define CONST_PingValueThreshold                                 100
#define CONST_Max_SpeakerMessage                                 3
#define CONST_ChatInputMaxChar_Normal                            126
#define CONST_ChatInputMaxChar_SpeakerRestrict                   40
#define CONST_ChatInputMaxANSIChar_SpeakerTextfield              50
#define CONST_FillMessageBanTime                                 600
#define CONST_MsgType_All                                        0
#define CONST_MsgType_RoomOrLobby                                1
#define CONST_MsgType_Team                                       2
#define CONST_MsgType_Whisper                                    3
#define CONST_ComplainReasonID                                   1
#define CONST_CommodityID_Speaker                                200062
#define CONST_NTF_PLAYERSTATUSCHANGED_LOGIN                      14
#define CONST_NTF_PLAYERSTATUSCHANGED_LOGOUT                     15
#define CONST_HIDE_CHATAREA_COUNT                                8.0
#define CONST_HIDE_CHATAREA_COUNT_TACTICALCOMMAND                3.0
#define CONST_SectionName02                                      "GfxMovie_Complaint"
#define CONST_RoomPlayerCount_Max                                16
#define CONST_SectionName03                                      "GfxMovie_FpsTips"
#define CONST_SectionName04                                      "GfxMovie_FriendWhisper"
#define CONST_MAX_BAG                                            5
#define CONST_InviteFriendTimerInterval                          30
#define CONST_MyFriendPanelID                                    0
#define CONST_MyTeammatePanelID                                  1
#define CONST_OnlinePlayersPanelID                               2
#define CONST_MyTempTeamPanelID                                  3
#define CONST_PlayedPlayersPanelID                               4
#define CONST_SingleMatchTopPanelID                              5
#define CONST_GetPlayerAddressCount                              100
#define CONST_LevelCountMax                                      3
#define CONST_EM_HAPPYPOINT                                      10000
#define CONST_EM_HAPPYPOINT01                                    30000
#define CONST_EM_HAPPYPOINT02                                    100000
#define CONST_EM_TOEXP                                           10000
#define CONST_EM_TOEXP01                                         50000
#define CONST_EM_TOEXP02                                         200000
#define CONST_MAXROOMIDLEN                                       3
#define CONST_MINROOMIDLEN                                       1
#define CONST_MAXGAGTIMELEN                                      6
#define CONST_MINGAGTIMELEN                                      1
#define CONST_MAXFREEZETIMELEN                                   4
#define CONST_MINFREEZETIMELEN                                   1
#define CONST_MAXEMAILLEN                                        64
#define CONST_MINEMAILLEN                                        5
#define CONST_ROOM_PASSWORD_MAX                                  6
#define CONST_ROOM_PASSWORD_MIN                                  1
#define CONST_QQ_LEN_MAX                                         20
#define CONST_QQ_LEN_MIN                                         1
#define CONST_MAX_MATE_MSG_LEN                                   120
#define CONST_DEFAULTNAME                                        
#define CONST_CartItemCount_Max                                  20
#define CONST_FirstItemInCommodity                               0
#define CONST_DefaultIconPath                                    "img://TGUI_Texture.Texture.DefaultUnequip"
#define CONST_FormatGiftValueString                              "<FONT COLOR='#2ae200' >$LotteryValue$</FONT>"
#define CONST_FormatLotteryGiftString                            "<FONT COLOR='#2ae200' >$LotteryGift$</FONT>"
#define CONST_FormatNickNameString                               "<FONT COLOR='#2ae200' >$NickName$</FONT>"
#define CONST_MaxShowAllPeopleLotteryInfoCount                   8
#define CONST_MaxSaveMarqueeDataCount                            50
#define CONST_DefaultGetMarqueePeriod                            20
#define CONST_MaxSelfLotteryDataCount                            50
#define CONST_DefaultValue                                       0
#define CONST_MaxPositionCount                                   12
#define CONST_MaxLotteryAreas                                    5
#define CONST_SearchStateTime1                                   20
#define CONST_SearchStateTime2                                   60
#define CONST_CommonRoomPlayerCount_Max                          16
#define CONST_PLAY_INSETTINGPANEL                                7
#define CONST_PLAY_READYTOOBSERVE                                4
#define CONST_PLAY_INMATCH_FIGHT                                 3
#define CONST_PLAY_INMATCH_WATCH                                 5
#define CONST_PLAY_READYTOMATCH                                  2
#define CONST_PLAY_UNREADYTOMATCH                                6
#define CONST_PVP_TYPE                                           0
#define CONST_PVE_TYPE                                           1
#define CONST_PM_TYPE                                            2
#define CONST_TEAM_TYPE                                          3
#define CONST_PERSONAL_TYPE                                      4
#define CONST_ShowSpecialAwardIconCount_Max                      4
#define CONST_CardListCount                                      10
#define CONST_CHANGE_NAME_CARD_PROP_ID                           100181
#define CONST_CHANGE_NAME_CARD_SHOP_ID                           200197
#define CONST_HeadArmorItemId                                    100032
#define CONST_TorsorArmorItemId                                  100033
#define CONST_PVE_DIFFICULT_BASEVALUE                            4096
#define CONST_GetExpInTwoDays                                    100000
#define CONST_SectionName05                                      "GfxMovie_Ranking"
#define CONST_CTM_DATA_INDEX                                     3
#define CONST_TANK_DATA_INDEX                                    3
#define CONST_BIO_DATA_INDEX                                     13
#define CONST_PVM_DATA_INDEX                                     3
#define CONST_MDM_DATA_INDEX                                     3
#define CONST_MAX_RECOMMAND_WEAPON_COUNT                         3
#define CONST_SectionName06                                      "GfxMovie_Respawn"
#define CONST_MAXGIVEPLAYERNUM                                   10
#define CONST_Max_LeaveMessageNum                                254
#define CONST_PMTEAMPLAYERNUMMAX                                 6
#define CONST_FIGHT_SCORE_MAX                                    50000
#define CONST_MAX_SIDE_SPECTATOR_COUNT                           7
#define CONST_ItemNumMax                                         18
#define CONST_SendMessagePerMoney                                50
#define CONST_MAX_CLAN_NOTICE_LEN                                100
#define CONST_MAX_CLAN_RECRUITMESSAGE_LEN                        100
#define CONST_MAX_CLAN_SCALE_NUM                                 1000
#define CONST_SpeakerMessageRefreshInterval                      10
#define CONST_enum_EASD_Cancel_DontShowAgain                     18
#define CONST_enum_EASD_ManualConfig_DontShowAgain               17
#define CONST_enum_EASD_FastConfig_DontShowAgain                 16
#define CONST_enum_EASD_Cancel                                   2
#define CONST_enum_EASD_ManualConfig                             1
#define CONST_enum_EASD_FastConfig                               0
#define CONST_enum_EASD_NotAvailable                             -1
#define CONST_ThrowWeaponFirstLocation                           3
#define CONST_EquipmentContentCount                              4
#define CONST_BadgeLocation                                      3
#define CONST_ListCount                                          5
#define CONST_DefaultMCPos_X                                     677
#define CONST_DefaultMCPos_Y                                     193
#define CONST_LeaveMessageInitmacyLimited                        50
#define CONST_MessageBoxMaxNumber                                9
#define CONST_EOMI_FRIENDDEMAND                                  5
#define CONST_EOMI_INVITEJOINPMMATCH                             536
#define CONST_GIFTLIST_COUNT                                     6
#define CONST_TempTeamPlayerCount_Max                            5
#define CONST_ITEMCOUNT_MAX                                      10
#define CONST_SKILLCOUNT_MAX                                     10
#define CONST_TABBUTTONCOUNT_MAX                                 3
#define CONST_CRYPT_WEAPON_BOX                                   100501
#define CONST_ITEMTOTALCOUNT_MAX                                 10
#define CONST_CommodityType_NoSale                               "NoSale"
#define CONST_InvalidCommodityID                                 -1
#define CONST_FROM_MODE                                          0
#define CONST_FROM_SUBMODE                                       1
#define CONST_FROM_MAP                                           2
#define CONST_PLAYMATELIST_COUNT                                 5
#define CONST_GOODSCOUNT_MAX                                     6
#define CONST_PartPreviewCount_Max                               3
#define CONST_WeaponPreviewCount_Max                             4
#define CONST_ItemNumMax01                                       10
#define CONST_CreateTeamTimeFirst                                20111212
#define CONST_APPROVECOUNT                                       7
#define CONST_SORT_MEMEBER_NUM_THRESHOLD                         50
#define CONST_ITEMCOUNT                                          12
#define CONST_QueryPlayerByNickName                              2
#define CONST_CLAN_ERR_EXCEEDS_MAX_FIRE_COUNT                    4157
#define CONST_MAX_ITEM_PER_PAGE                                  11

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum TGameGfxUI.GfxMovie_TGBase.ECharSet
/*enum ECharSet
{
	ECharSet_AsciiDigit                                = 0,
	ECharSet_AsciiLatin                                = 1,
	ECharSet_Special                                   = 2,
	ECharSet_AsciiPunctuation                          = 3,
	ECharSet_PortugueseLatin                           = 4,
	ECharSet_Cp1252Latin                               = 5,
	ECharSet_Cp1252Others                              = 6,
	ECharSet_BrazilianCruzeiro                         = 7,
	ECharSet_MAX                                       = 8
};*/

// Enum TGameGfxUI.GfxMovie_TGBase.EUserInput
/*enum EUserInput
{
	EUserInput_NickName                                = 0,
	EUserInput_ClanName                                = 1,
	EUserInput_ClanAnnouncement                        = 2,
	EUserInput_GroupName                               = 3,
	EUserInput_ChatMsg                                 = 4,
	EUserInput_RoomName                                = 5,
	EUserInput_RoomPassword                            = 6,
	EUserInput_MAX                                     = 7
};*/

// Enum TGameGfxUI.GfxMovie_TGBase.EMoviePriority
/*enum EMoviePriority
{
	EMP_None                                           = 0,
	EMP_Login                                          = 1,
	EMP_FontLib                                        = 2,
	EMP_LoginLobby                                     = 3,
	EMP_TGBase                                         = 4,
	EMP_Avatar                                         = 5,
	EMP_ShopRoom                                       = 6,
	EMP_LittleShopRoom                                 = 7,
	EMP_AvatarRoom                                     = 8,
	EMP_AvatarLoading                                  = 9,
	EMP_TutorialKeyBoard                               = 10,
	EMP_TutorialMouseRightClick                        = 11,
	EMP_TutorialKeyBoard_A                             = 12,
	EMP_TutorialKeyBoard_D                             = 13,
	EMP_TutorialKeyBoard_S                             = 14,
	EMP_TutorialKeyBoard_W                             = 15,
	EMP_ChatInMatch                                    = 16,
	EMP_PlayerExp                                      = 17,
	EMP_OnlineMatch                                    = 18,
	EMP_OnlineMatchRoom                                = 19,
	EMP_TechnicalMatch                                 = 20,
	EMP_BagList                                        = 21,
	EMP_ChanelList                                     = 22,
	EMP_SinglePersonalMatch                            = 23,
	EMP_MultiPlayerRoom                                = 24,
	EMP_ChanelRoomList                                 = 25,
	EMP_ModeChange                                     = 26,
	EMP_HappyMatch                                     = 27,
	EMP_TeamMatch                                      = 28,
	EMP_QuickGame                                      = 29,
	EMP_GeneralPlayerList                              = 30,
	EMP_ZombieMask                                     = 31,
	EMP_AddFriend                                      = 32,
	EMP_Chat                                           = 33,
	EMP_QTalkPanel                                     = 34,
	EMP_MessageManager                                 = 35,
	EMP_QBQP2TP                                        = 36,
	EMP_KeySystemMessage                               = 37,
	EMP_GameBag                                        = 38,
	EMP_SpectatorHUD                                   = 39,
	EMP_QuitOption                                     = 40,
	EMP_ActivitySystem                                 = 41,
	EMP_ActivityDailyCheck                             = 42,
	EMP_TaskTip                                        = 43,
	EMP_CreateRole                                     = 44,
	EMP_ShieldChatInGame                               = 45,
	EMP_KickPlayerInGame                               = 46,
	EMP_ExpiredList                                    = 47,
	EMP_RecommandWeapon                                = 48,
	EMP_FindRoomList                                   = 49,
	EMP_PersonalScoreboard                             = 50,
	EMP_SingleMatchScoreboard                          = 51,
	EMP_QTalkMaskPanel                                 = 52,
	EMP_ChestMovie                                     = 53,
	EMP_PVEEncouragement                               = 54,
	EMP_TMPrizeIntroduce                               = 55,
	EMP_HelpHall                                       = 56,
	EMP_RankList                                       = 57,
	EMP_AchievementSystem                              = 58,
	EMP_SaveVideo                                      = 59,
	EMP_GuideMode                                      = 60,
	EMP_AchiScoreAwards                                = 61,
	EMP_Respawn                                        = 62,
	EMP_ShowTMPrize                                    = 63,
	EMP_Connecting                                     = 64,
	EMP_FriendWhisper                                  = 65,
	EMP_NewGuide                                       = 66,
	EMP_Complaint                                      = 67,
	EMP_TeamRoom                                       = 68,
	EMP_PropShitMovie                                  = 69,
	EMP_LevelUp                                        = 70,
	EMP_StoryGameMenu                                  = 71,
	EMP_TeamMatchDescription                           = 72,
	EMP_TeamMatchManager                               = 73,
	EMP_Task                                           = 74,
	EMP_ShopGiveSingle                                 = 75,
	EMP_AddTeammate                                    = 76,
	EMP_ShopBuySingle                                  = 77,
	EMP_CreateRoom                                     = 78,
	EMP_WorldChoose                                    = 79,
	EMP_SystemSettings                                 = 80,
	EMP_FeedSuggestion                                 = 81,
	EMP_ShopBuyTogether                                = 82,
	EMP_NewAchievedArrived                             = 83,
	EMP_InvitePlayers                                  = 84,
	EMP_Input                                          = 85,
	EMP_PlayerDetailInfo                               = 86,
	EMP_MessageTip                                     = 87,
	EMP_HelpMenu                                       = 88,
	EMP_MDMGuide                                       = 89,
	EMP_Survey                                         = 90,
	EMP_FpsTips                                        = 91,
	EMP_PlayerComebackAwards                           = 92,
	EMP_LeaveMessage                                   = 93,
	EMP_PVETopRank                                     = 94,
	EMP_RecordVideo                                    = 95,
	EMP_PMAnalysis                                     = 96,
	EMP_MatchWaitMovie                                 = 97,
	EMP_TeamReputationList                             = 98,
	EMP_ConsumList                                     = 99,
	EMP_OptionalMode                                   = 100,
	EMP_TeamBadgeSystem                                = 101,
	EMP_RoomSetting                                    = 102,
	EMP_LotteryUI                                      = 103,
	EMP_EncryptionBox                                  = 104,
	EMP_AllRank                                        = 105,
	EMP_TaskComplete                                   = 106,
	EMP_NewModeNotice                                  = 107,
	EMP_QuitGame                                       = 108,
	EMP_Reconnect                                      = 109,
	EMP_MessageBox                                     = 110,
	EMP_MessageTipBox                                  = 111,
	EMP_WebWindow                                      = 112,
	EMP_MAX                                            = 113
};*/

// Enum TGameGfxUI.GfxMovie_AchievementSystem.VariableID
/*enum VariableID
{
	ID_Var_LogString                                   = 0,
	ID_Var_LiBagIconPath                               = 1,
	ID_Var_AllAchievementCount                         = 2,
	ID_Var_LiBagAwardString                            = 3,
	ID_Var_AchievePoint                                = 4,
	ID_Var_ActivityTimes                               = 5,
	ID_Var_AwardLevel                                  = 6,
	ID_Var_AwardFlag                                   = 7,
	ID_Var_AchiClassifyNameArray                       = 8,
	ID_Var_AchiClassifyTypeArray                       = 9,
	ID_Var_AchiClassifyPTypeArray                      = 10,
	ID_Var_AchiClassifyDataCurArray                    = 11,
	ID_Var_AchiClassifyDataMaxArray                    = 12,
	ID_Var_MAX                                         = 13
};*/

// Enum TGameGfxUI.GfxMovie_AchievementSystem.FunctionId
/*enum FunctionId
{
	ID_Fun_OnInitialize                                = 0,
	ID_Fun_CleanupAchievementList                      = 1,
	ID_Fun_ReSetAchivementList                         = 2,
	ID_Fun_ShowBottomProgressPanel                     = 3,
	ID_Fun_onAchiTotalBtnClickedComplete               = 4,
	ID_Fun_onBtnClickedComplete                        = 5,
	ID_Fun_OnShowFrontAchievedCompleted                = 6,
	ID_Fun_OnReturnButtonClicked                       = 7,
	ID_Fun_OnSetRequestAwardBtn                        = 8,
	ID_Fun_MAX                                         = 9
};*/

// Enum TGameGfxUI.GfxMovie_AchiScoreAwards.VariableID
/*enum VariableID
{
	ID_Var_LiBagNameArray                              = 0,
	ID_Var_LiBagIconArray                              = 1,
	ID_Var_AchiScoreArray                              = 2,
	ID_Var_WeaponNameArrayArray                        = 3,
	ID_Var_WeaponIconArrayArray                        = 4,
	ID_Var_LogString                                   = 5,
	ID_Var_MAX                                         = 6
};*/

// Enum TGameGfxUI.GfxMovie_AchiScoreAwards.FuncionID
/*enum FuncionID
{
	ID_Fun_InitAwardsBoard                             = 0,
	ID_Fun_UpdateAwardsState                           = 1,
	ID_Fun_MAX                                         = 2
};*/

// Enum TGameGfxUI.GfxMovie_ActivityDailyCheck.VariableID
/*enum VariableID
{
	ID_Var_ToCheckDateArray                            = 0,
	ID_Var_CheckedDateArray                            = 1,
	ID_Var_MAX                                         = 2
};*/

// Enum TGameGfxUI.GfxMovie_ActivityDailyCheck.FunctionId
/*enum FunctionId
{
	ID_Fun_UpdateUI                                    = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_ActivitySystem.VariableID
/*enum VariableID
{
	ID_Var_AutoShowState                               = 0,
	ID_Var_DailyTitle                                  = 1,
	ID_Var_DailyTitleArray                             = 2,
	ID_Var_DailyIndex                                  = 3,
	ID_Var_DailyActivityArray                          = 4,
	ID_Var_DailyActivityIconArray                      = 5,
	ID_Var_DailyActivityTipsArray                      = 6,
	ID_Var_DailyActivityIdArray                        = 7,
	ID_Var_DailyHasActivityArray                       = 8,
	ID_Var_ActivityTipString                           = 9,
	ID_Var_ActivityList_Id                             = 10,
	ID_Var_ActivityList_Name                           = 11,
	ID_Var_ActivityList_State                          = 12,
	ID_Var_ActivityList_BtnType                        = 13,
	ID_Var_ActivityList_BtnName                        = 14,
	ID_Var_ActivityList_Enable                         = 15,
	ID_Var_ActivityList_Detail                         = 16,
	ID_Var_ActivityName                                = 17,
	ID_Var_ActivityExplain                             = 18,
	ID_Var_ActivityRules                               = 19,
	ID_Var_ActivityReward                              = 20,
	ID_Var_ActivtiyForeground                          = 21,
	ID_Var_ActivtiyBackground                          = 22,
	ID_Var_ProcessNameArray                            = 23,
	ID_Var_ProcessMaxValueArray                        = 24,
	ID_Var_ProcessCurValueArray                        = 25,
	ID_Var_ProcessShowProcessArray                     = 26,
	ID_Var_DateOffset                                  = 27,
	ID_Var_TodayOffset                                 = 28,
	ID_Var_SystemAnnounce                              = 29,
	ID_Var_AdvertisePicture                            = 30,
	ID_Var_AdvertiseTime                               = 31,
	ID_Var_LogStringStr                                = 32,
	ID_Var_ActDetailNameArray                          = 33,
	ID_Var_ActDetailIDArray                            = 34,
	ID_Var_ActDetailPicPathArray                       = 35,
	ID_Var_ActDetailNewFlagArray                       = 36,
	ID_Var_TodayDateString                             = 37,
	ID_Var_ActivityList_IDArray                        = 38,
	ID_Var_ActivityList_NameArray                      = 39,
	ID_Var_ActivityList_FlowArray                      = 40,
	ID_Var_ActivityList_DetailArray                    = 41,
	ID_Var_ActivityList_TipsArray                      = 42,
	ID_Var_ActivityList_TimeArray                      = 43,
	ID_Var_ActivityList_StateArray                     = 44,
	ID_Var_ActivityList_bFinishArray                   = 45,
	ID_Var_ActivityList_BtnArray                       = 46,
	ID_Var_ActivityList_BtnTextArray                   = 47,
	ID_Var_ActivityList_ImageIndexArray                = 48,
	ID_Var_ActivityList_ProgressNameArray              = 49,
	ID_Var_ActivityList_ProgressCurArray               = 50,
	ID_Var_ActivityList_ProgressMaxArray               = 51,
	ID_Var_FirstWeekday                                = 52,
	ID_Var_BeginYear                                   = 53,
	ID_Var_EndYear                                     = 54,
	ID_Var_BeginMonth                                  = 55,
	ID_Var_EndMonth                                    = 56,
	ID_Var_BeginDate                                   = 57,
	ID_Var_EndDate                                     = 58,
	ID_Var_CheckedDateArray                            = 59,
	ID_Var_CurrentCheckTimes                           = 60,
	ID_Var_MaxCheckTimes                               = 61,
	ID_Var_CurrentOnlineTime                           = 62,
	ID_Var_OnlineTimeLimit                             = 63,
	ID_Var_bCanCheckYestoday                           = 64,
	ID_Var_bCanCheckToday                              = 65,
	ID_Var_bCanGetAward                                = 66,
	ID_Var_DailyCheckProgressTitle                     = 67,
	ID_Var_CheckYestodayTips                           = 68,
	ID_Var_AwardGroupLabelArray                        = 69,
	ID_Var_AwardGroupIndexArray                        = 70,
	ID_Var_AwardItemNameArray                          = 71,
	ID_Var_AwardItemTimeLimitArray                     = 72,
	ID_Var_AwardItemIconArray                          = 73,
	ID_Var_MAX                                         = 74
};*/

// Enum TGameGfxUI.GfxMovie_ActivitySystem.FunctionId
/*enum FunctionId
{
	ID_Fun_UpdateCalendar                              = 0,
	ID_Fun_UpdateDaily                                 = 1,
	ID_Fun_UpdateDailyActivity                         = 2,
	ID_Fun_UpdateActivityList                          = 3,
	ID_Fun_UpdateActivityInfo                          = 4,
	ID_Fun_UpdateDailyProgress                         = 5,
	ID_Fun_SetEachLogin                                = 6,
	ID_Fun_Show                                        = 7,
	ID_Fun_Hiden                                       = 8,
	ID_Fun_SetActivityImage                            = 9,
	ID_Fun_SetActivityMainImage                        = 10,
	ID_Fun_ShowActivityPanel                           = 11,
	ID_Fun_ShowDailyCheckPanel                         = 12,
	ID_Fun_UpdateDailyCheckUI                          = 13,
	ID_Fun_UpdateActivityInfoUI                        = 14,
	ID_Fun_EffectIn                                    = 15,
	ID_Fun_EffectOut                                   = 16,
	ID_Fun_MAX                                         = 17
};*/

// Enum TGameGfxUI.GfxMovie_ActivitySystem.ActivityRefreshType
/*enum ActivityRefreshType
{
	ART_ActivityPicture                                = 0,
	ART_ActivityConfig                                 = 1,
	ART_MAX                                            = 2
};*/

// Enum TGameGfxUI.GfxMovie_ActivitySystem.ActivityPanelType
/*enum ActivityPanelType
{
	APT_None                                           = 0,
	APT_ActivityInfo                                   = 1,
	APT_DailyCheck                                     = 2,
	APT_MAX                                            = 3
};*/

// Enum TGameGfxUI.GfxMovie_AddFriend.EAddFriendType
/*enum EAddFriendType
{
	UIN_NULL                                           = 0,
	AddFriend_Uin                                      = 1,
	AddFriend_NickName                                 = 2,
	EAddFriendType_MAX                                 = 3
};*/

// Enum TGameGfxUI.GfxMovie_AddTeammate.AddTeammateVariableId
/*enum AddTeammateVariableId
{
	ID_VAR_ADDTEAMMATE_AddContent                      = 0,
	ID_VAR_ADDTEAMMATE_NameLenMax                      = 1,
	ID_VAR_ADDTEAMMATE_QQLenMax                        = 2,
	ID_VAR_ADDTEAMMATE_AddHelpTiptxt                   = 3,
	ID_VAR_ADDTEAMMATE_RankValues                      = 4,
	ID_VAR_ADDTEAMMATE_RankPaths                       = 5,
	ID_VAR_ADDTEAMMATE_NickNames                       = 6,
	ID_VAR_ADDTEAMMATE_MatchLevelIconPaths             = 7,
	ID_VAR_ADDTEAMMATE_bFriends                        = 8,
	ID_VAR_ADDTEAMMATE_RecrutiListVisible              = 9,
	ID_VAR_ADDTEAMMATE_MAX                             = 10
};*/

// Enum TGameGfxUI.GfxMovie_AddTeammate.AddTeammateFunId
/*enum AddTeammateFunId
{
	ID_FUN_ADDTEAMMATE_ShowTipContent                  = 0,
	ID_FUN_ADDTEAMMATE_CloseThis                       = 1,
	ID_FUN_ADDTEAMMATE_ClearMemberData                 = 2,
	ID_FUN_ADDTEAMMATE_UpdateMemberData                = 3,
	ID_FUN_ADDTEAMMATE_MAX                             = 4
};*/

// Enum TGameGfxUI.GfxMovie_AllRank.AllRankVarId
/*enum AllRankVarId
{
	ID_AllRank_VAR_RankIcon                            = 0,
	ID_AllRank_VAR_MAX                                 = 1
};*/

// Enum TGameGfxUI.GfxMovie_AvatarRoom.AvatarRoomVar
/*enum AvatarRoomVar
{
	ID_VAR_AR_ShieldLayerVisible                       = 0,
	ID_VAR_AR_FirstPageButtonDisabled                  = 1,
	ID_VAR_AR_PrePageButtonDisabled                    = 2,
	ID_VAR_AR_NextPageButtonDisabled                   = 3,
	ID_VAR_AR_LastPageButtonDisabled                   = 4,
	ID_VAR_AR_GoAndPageButtonDisabled                  = 5,
	ID_VAR_AR_PageNumberText                           = 6,
	ID_VAR_AR_BindType                                 = 7,
	ID_VAR_AR_SubType                                  = 8,
	ID_VAR_AR_ThreeLevelType                           = 9,
	ID_VAR_AR_DefaultIconPath                          = 10,
	ID_VAR_AR_GPValueText                              = 11,
	ID_VAR_AR_TPValueText                              = 12,
	ID_VAR_AR_MPValueText                              = 13,
	ID_VAR_AR_Menu5_Visible                            = 14,
	ID_VAR_AR_RoleIdArray                              = 15,
	ID_VAR_AR_CurrItemIndexInItemList                  = 16,
	ID_VAR_AR_CurrItemIndexOnCharacter                 = 17,
	ID_VAR_AR_RoleIDIndex                              = 18,
	ID_VAR_AR_CompareTotalIndex                        = 19,
	ID_VAR_AR_CompareRightSubType                      = 20,
	ID_VAR_AR_ShowRepariAllPriceText                   = 21,
	ID_VAR_AR_RepairAllPropsBtnDisabled                = 22,
	ID_VAR_AR_RoleTurnPage                             = 23,
	ID_VAR_AR_BagListPreview                           = 24,
	ID_VAR_AR_EquipmentPreview                         = 25,
	ID_VAR_AR_CurrentBagIndex                          = 26,
	ID_VAR_AR_PVESkillItem                             = 27,
	ID_VAR_AR_CurrItemIndexInBag                       = 28,
	ID_VAR_AR_PageNumText                              = 29,
	ID_VAR_AR_EquipSkillNames                          = 30,
	ID_VAR_AR_EquipSkillDescriptions                   = 31,
	ID_VAR_AR_EquipSkillGridNums                       = 32,
	ID_VAR_AR_EquipSkillIconPaths                      = 33,
	ID_VAR_AR_MonthPointTip                            = 34,
	ID_VAR_AR_MoneyRefreshTip                          = 35,
	ID_VAR_AR_ItemTipVisible                           = 36,
	ID_VAR_AR_ItemTipIndex                             = 37,
	ID_VAR_AR_ItemTipShowName                          = 38,
	ID_VAR_AR_MAX                                      = 39
};*/

// Enum TGameGfxUI.GfxMovie_AvatarRoom.AvatarRoomFun
/*enum AvatarRoomFun
{
	ID_FUN_AR_CloseThis                                = 0,
	ID_FUN_AR_ReturnButtonClicked                      = 1,
	ID_FUN_AR_CleanupSkillShow                         = 2,
	ID_FUN_AR_ShowEquipedSkill                         = 3,
	ID_FUN_AR_OnInitialize                             = 4,
	ID_FUN_AR_CorrectSelectMenu                        = 5,
	ID_FUN_AR_ShowPVETips                              = 6,
	ID_FUN_AR_UpdatePageIndexShow                      = 7,
	ID_FUN_AR_ShowNewGiftTips                          = 8,
	ID_FUN_AR_HideNewGiftTips                          = 9,
	ID_FUN_AR_UpdateSkillExtend                        = 10,
	ID_FUN_AR_OnShowClearMPTip                         = 11,
	ID_FUN_AR_OnShowNewTipOfTab                        = 12,
	ID_FUN_AR_OnClearNewTipOfTab                       = 13,
	ID_FUN_AR_MAX                                      = 14
};*/

// Enum TGameGfxUI.GfxMovie_BagList.BagListVarId
/*enum BagListVarId
{
	ID_VAR_BAGLIST_BagButton                           = 0,
	ID_VAR_BAGLIST_Weapon                              = 1,
	ID_VAR_BAGLIST_RepariAllPrice                      = 2,
	ID_VAR_BAGLIST_RepairAllPropsbtnDisabled           = 3,
	ID_VAR_BAGLIST_MAX                                 = 4
};*/

// Enum TGameGfxUI.GfxMovie_BagList.BagListFunId
/*enum BagListFunId
{
	ID_FUN_BAGLIST_UpdateButtonState                   = 0,
	ID_FUN_MoveUp                                      = 1,
	ID_FUN_MoveDown                                    = 2,
	ID_Fun_MAX                                         = 3
};*/

// Enum TGameGfxUI.GfxMovie_BaseRoom.MatchInfoChangeType
/*enum MatchInfoChangeType
{
	MatchInfoChangeType_None                           = 0,
	MatchInfoChangeType_Init                           = 1,
	MatchInfoChangeType_MatchType                      = 2,
	MatchInfoChangeType_SubMode                        = 3,
	MatchInfoChangeType_Map                            = 4,
	MatchInfoChangeType_PlayerCounts                   = 5,
	MatchInfoChangeType_MAX                            = 6
};*/

// Enum TGameGfxUI.GfxMovie_ChanelList.ChannelListAsVariableId
/*enum ChannelListAsVariableId
{
	ID_VAR_ChannelNameDataProvider                     = 0,
	ID_VAR_ChannelNetworkStateProvider                 = 1,
	ID_VAR_ChannelIdArrayProvider                      = 2,
	ID_VAR_ChannelPlayerCountProvider_Max              = 3,
	ID_VAR_ChannelPlayerCountProvider_Normal           = 4,
	ID_VAR_ChannelPlayerCountProvider_SPM              = 5,
	ID_VAR_ChannelPlayerCountProvider_RA               = 6,
	ID_VAR_ChannelPlayerFrientCount                    = 7,
	ID_VAR_ChannelbFullChannelProvider                 = 8,
	ID_VAR_ChannelPingValueProvider                    = 9,
	ID_VAR_ChannelIconPath                             = 10,
	ID_VAR_ChannelbUnOpenedArray                       = 11,
	ID_Var_MAX                                         = 12
};*/

// Enum TGameGfxUI.GfxMovie_ChanelList.ChannelListAsFunId
/*enum ChannelListAsFunId
{
	ID_FUN_ClearChannelData                            = 0,
	ID_FUN_ChangeChannel                               = 1,
	ID_Fun_MAX                                         = 2
};*/

// Enum TGameGfxUI.GfxMovie_ChanelRoomList.RoomListSortType
/*enum RoomListSortType
{
	RoomSort_ID                                        = 0,
	RoomSort_RoomName                                  = 1,
	RoomSort_MatchMode                                 = 2,
	RoomSort_MatchMap                                  = 3,
	RoomSort_PlayerCount                               = 4,
	RoomSort_Status                                    = 5,
	RoomSort_Default                                   = 6,
	RoomSort_MAX                                       = 7
};*/

// Enum TGameGfxUI.GfxMovie_ChanelRoomList.RoomListAsVariableId
/*enum RoomListAsVariableId
{
	ID_VAR_MatchTypeDataProvider                       = 0,
	ID_VAR_MapDataProvider                             = 1,
	ID_VAR_RoomStateDataProvider                       = 2,
	ID_VAR_PlayerCountDataProvider                     = 3,
	ID_VAR_RoomId                                      = 4,
	ID_VAR_TopPlayer                                   = 5,
	ID_VAR_CurrentChannelInfo                          = 6,
	ID_VAR_SpecialMapIconPath                          = 7,
	ID_Var_MAX                                         = 8
};*/

// Enum TGameGfxUI.GfxMovie_ChanelRoomList.RoomListFuncId
/*enum RoomListFuncId
{
	ID_FUN_ShowNewGuideBtnFlick                        = 0,
	ID_FUN_HideNewGuideBtnFlick                        = 1,
	ID_FUN_ShowNewGuideTips                            = 2,
	ID_Fun_MAX                                         = 3
};*/

// Enum TGameGfxUI.GfxMovie_Chat.ChatVariableId
/*enum ChatVariableId
{
	ID_VAR_ChatContent                                 = 0,
	ID_VAR_ChatAchievIds                               = 1,
	ID_VAR_BHASTEAM                                    = 2,
	ID_VAR_BBANSPEECH                                  = 3,
	ID_VAR_chatTeamMemberUin                           = 4,
	ID_VAR_SwitchTargetName                            = 5,
	ID_VAR_ChatColors                                  = 6,
	ID_VAR_ChatChannels                                = 7,
	ID_VAR_ChatTargets                                 = 8,
	ID_VAR_ChatTargetsCount                            = 9,
	ID_VAR_CurrentChatTarget                           = 10,
	ID_VAR_ChatTargetSelect                            = 11,
	ID_VAR_ChatHistory                                 = 12,
	ID_VAR_ChatRecvAchievIds                           = 13,
	ID_VAR_ChatRecvAchievNames                         = 14,
	ID_VAR_SpeakerTipText                              = 15,
	ID_VAR_ChatTargetsDisable                          = 16,
	ID_VAR_SpeakerText                                 = 17,
	ID_VAR_ChatInputMaxChars                           = 18,
	ID_VAR_FilterLobby                                 = 19,
	ID_VAR_FilterRoom                                  = 20,
	ID_VAR_FilterGroup                                 = 21,
	ID_VAR_FilterTeamate                               = 22,
	ID_VAR_FilterStranger                              = 23,
	ID_VAR_CurrentChatHistoryContent                   = 24,
	ID_VAR_CurrentChatHistoryID                        = 25,
	ID_VAR_CurrentChatHistoryStartPos                  = 26,
	ID_VAR_CurrentChatHistoryEndPos                    = 27,
	ID_VAR_CurrentChatHistoryAchieveID                 = 28,
	ID_VAR_CurrentChatHistoryAchieveName               = 29,
	ID_VAR_ChatbGMPlayer                               = 30,
	ID_VAR_QTalkContent                                = 31,
	ID_VAR_SpeakerStateFlag                            = 32,
	ID_VAR_ClickedLinkString                           = 33,
	ID_VAR_LinkTextTypeArray                           = 34,
	ID_VAR_LinkTextBeginArray                          = 35,
	ID_VAR_LinkTextEndArray                            = 36,
	ID_VAR_LinkTextContentArray                        = 37,
	ID_Var_MAX                                         = 38
};*/

// Enum TGameGfxUI.GfxMovie_Chat.ChatFunctionId
/*enum ChatFunctionId
{
	ID_FUN_INITIALIZEUI                                = 0,
	ID_FUN_CHATREFRESHUI                               = 1,
	ID_FUN_SETINPUTFOCUS                               = 2,
	ID_FUN_SETACHIEVEMENTDATA                          = 3,
	ID_FUN_SETACHIEVEMENTNAME                          = 4,
	ID_FUN_PushMessage                                 = 5,
	ID_FUN_PushQTMessage                               = 6,
	ID_FUN_PushSystemMessage                           = 7,
	ID_FUN_PushLocalMessage                            = 8,
	ID_FUN_ShowTips                                    = 9,
	ID_FUN_ShowMenu                                    = 10,
	ID_FUN_RemoveRightClick                            = 11,
	ID_FUN_UseSpeakerChatInputRestrict                 = 12,
	ID_FUN_SetChatInputMaxSize                         = 13,
	ID_FUN_CleanChatHistory                            = 14,
	ID_FUN_SetChatHistoryAchievement                   = 15,
	ID_FUN_SetChatHistoryContent                       = 16,
	ID_FUN_UpdateSpeakerContent                        = 17,
	ID_FUN_UpdateChatTargets                           = 18,
	ID_FUN_BetaTesting                                 = 19,
	ID_FUN_CleanupChatTargets                          = 20,
	ID_FUN_OnEnterKeyPressed                           = 21,
	ID_FUN_RemoveAllMessages                           = 22,
	ID_FUN_SetCardMC                                   = 23,
	ID_FUN_SwitchChatTextArea                          = 24,
	ID_FUN_OpenSpeaker                                 = 25,
	ID_FUN_SwitchToChatTarget                          = 26,
	ID_FUN_PushWindowModeText                          = 27,
	ID_FUN___PushMessage                               = 28,
	ID_Fun_MAX                                         = 29
};*/

// Enum TGameGfxUI.GfxMovie_ChatInMatch.ChatInMatchVariableId
/*enum ChatInMatchVariableId
{
	ID_VAR_INMATCH_BBANSPEECH                          = 0,
	ID_VAR_INMATCH_chatTeamMemberUin                   = 1,
	ID_VAR_INMATCH_bObserver                           = 2,
	ID_VAR_INMATCH_LogString                           = 3,
	ID_VAR_INMATCH_ColorMap                            = 4,
	ID_VAR_INMATCH_MessageType                         = 5,
	ID_VAR_INMATCH_ChatOperationDescription            = 6,
	ID_VAR_INMATCH_ChatChannelIDArray                  = 7,
	ID_VAR_INMATCH_MAX                                 = 8
};*/

// Enum TGameGfxUI.GfxMovie_ChatInMatch.ChatInMatchFunId
/*enum ChatInMatchFunId
{
	ID_FUN_INMATCH_ChatToObserver                      = 0,
	ID_FUN_INMATCH_SetObserverFlag                     = 1,
	ID_FUN_INMATCH_SetGameMode                         = 2,
	ID_FUN_INMATCH_ChatReceiveBroadcastInGame          = 3,
	ID_FUN_INMATCH_ChatReceiveActionInGame             = 4,
	ID_FUN_INMATCH_PushLocalMessage                    = 5,
	ID_FUN_INMATCH_FastShout                           = 6,
	ID_FUN_INMATCH_FastResWishper                      = 7,
	ID_FUN_INMATCH_SetFriendWhisperFromUI              = 8,
	ID_FUN_INMATCH_SetGameParameter                    = 9,
	ID_FUN_INMATCH_ShowChatInput                       = 10,
	ID_FUN_INMATCH_MAX                                 = 11
};*/

// Enum TGameGfxUI.GfxMovie_ChestMovie.ChestMovieVar
/*enum ChestMovieVar
{
	ID_ChestMovie_VAR_CommonChsetTip                   = 0,
	ID_ChestMovie_VAR_SpecialChestTip                  = 1,
	ID_ChestMovie_VAR_ValieTimeTip                     = 2,
	ID_ChestMovie_VAR_GetPropIcon                      = 3,
	ID_ChestMovie_VAR_GetPropName                      = 4,
	ID_ChestMovie_VAR_ChestLevel                       = 5,
	ID_ChestMovie_VAR_CanOpenChestTimes                = 6,
	ID_ChestMovie_VAR_CommonPropIcons                  = 7,
	ID_ChestMovie_VAR_CommonPropNames                  = 8,
	ID_ChestMovie_VAR_SpecialPropIcons                 = 9,
	ID_ChestMovie_VAR_SpecialPropNames                 = 10,
	ID_ChestMovie_VAR_MAX                              = 11
};*/

// Enum TGameGfxUI.GfxMovie_ChestMovie.ChestMovieFUN
/*enum ChestMovieFUN
{
	ID_ChestMovie_FUN_UpdateChestLevel                 = 0,
	ID_ChestMovie_FUN_ClearCommonChestData             = 1,
	ID_ChestMovie_FUN_ShowCommonGetProp                = 2,
	ID_ChestMovie_FUN_OnShowCommonChestProps           = 3,
	ID_ChestMovie_FUN_ClearSpecialChestData            = 4,
	ID_ChestMovie_FUN_ShowSpecialGetProp               = 5,
	ID_ChestMovie_FUN_OnShowSpecialChestProps          = 6,
	ID_ChestMovie_FUN_OnChestTimeOut                   = 7,
	ID_ChestMovie_FUN_OnDisableSpecialChest            = 8,
	ID_ChestMovie_FUN_NtfAutoResult                    = 9,
	ID_ChestMovie_FUN_EnableQuitBtn                    = 10,
	ID_ChestMovie_FUN_MAX                              = 11
};*/

// Enum TGameGfxUI.GfxMovie_Complaint.VariableID
/*enum VariableID
{
	ID_Var_SelfName                                    = 0,
	ID_Var_SelfId                                      = 1,
	ID_Var_RPlayerNameArray                            = 2,
	ID_Var_RPlayerUinArray                             = 3,
	ID_Var_GPlayerNameArray                            = 4,
	ID_Var_GPlayerUinArray                             = 5,
	ID_Var_ComplaintReasonArray                        = 6,
	ID_Var_ComplaintIdArray                            = 7,
	ID_Var_CurrentSelectedId                           = 8,
	ID_Var_ComplaintClassify                           = 9,
	ID_Var_ComplaintContent                            = 10,
	ID_Var_MAX                                         = 11
};*/

// Enum TGameGfxUI.GfxMovie_Complaint.FunctionId
/*enum FunctionId
{
	ID_Fun_PersonalGameModeOption                      = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_ConsumList.ConsumSortType
/*enum ConsumSortType
{
	ConsumSortType_None                                = 0,
	ConsumSortType_Date                                = 1,
	ConsumSortType_Path                                = 2,
	ConsumSortType_ChangeMoney                         = 3,
	ConsumSortType_RemainMoney                         = 4,
	ConsumSortType_MAX                                 = 5
};*/

// Enum TGameGfxUI.GfxMovie_ConsumList.MoneyTypeEnums
/*enum MoneyTypeEnums
{
	EMONEYTYPE_None                                    = 0,
	EMONEYTYPE_TP                                      = 1,
	EMONEYTYPE_GP                                      = 2,
	EMONEYTYPE_MP                                      = 3,
	EMONEYTYPE_MAX                                     = 4
};*/

// Enum TGameGfxUI.GfxMovie_ConsumList.ConsumListFun
/*enum ConsumListFun
{
	ID_FUN_AR_CONSUMLIST_ClearListData                 = 0,
	ID_FUN_AR_CONSUMLIST_UpdateListData                = 1,
	ID_FUN_AR_CONSUMLIST_UpdateButtonState             = 2,
	ID_FUN_AR_CONSUMLIST_MAX                           = 3
};*/

// Enum TGameGfxUI.GfxMovie_ConsumList.ConsumListVar
/*enum ConsumListVar
{
	ID_VAR_AR_CONSUMLIST_DataArray                     = 0,
	ID_VAR_AR_CONSUMLIST_TypeArray                     = 1,
	ID_VAR_AR_CONSUMLIST_UsePathArray                  = 2,
	ID_VAR_AR_CONSUMLIST_MoneyArray                    = 3,
	ID_VAR_AR_CONSUMLIST_BalanceArray                  = 4,
	ID_VAR_AR_CONSUMLIST_MAX                           = 5
};*/

// Enum TGameGfxUI.GfxMovie_CreateRole.CreateRoleAsVariableId
/*enum CreateRoleAsVariableId
{
	ID_VAR_RoleName                                    = 0,
	ID_VAR_ErrorTipText                                = 1,
	ID_VAR_AvailTipText                                = 2,
	ID_VAR_GiveWeaponText                              = 3,
	ID_VAR_CR_GPValue                                  = 4,
	ID_VAR_CR_MaxLen                                   = 5,
	ID_Var_MAX                                         = 6
};*/

// Enum TGameGfxUI.GfxMovie_CreateRole.CreateRoleAsFunctionId
/*enum CreateRoleAsFunctionId
{
	ID_FUN_GotoGiveRole                                = 0,
	ID_FUN_GotoSuccessful                              = 1,
	ID_FUN_GotoLobby                                   = 2,
	ID_FUN_CR_AddCreateNameListener                    = 3,
	ID_FUN_CR_AddCheckNameListener                     = 4,
	ID_FUN_CR_AddSelectRoleListener                    = 5,
	ID_FUN_CR_ClearFirstSetTimer                       = 6,
	ID_FUN_CR_ClearSelectTimer                         = 7,
	ID_FUN_CR_CloseThis                                = 8,
	ID_Fun_MAX                                         = 9
};*/

// Enum TGameGfxUI.GfxMovie_CreateRoom.CreateRoomVariableId
/*enum CreateRoomVariableId
{
	ID_VAR_CR_MapSelectIndex                           = 0,
	ID_VAR_CR_RespawnTimeSelectIndexSet                = 1,
	ID_VAR_CR_RespawnTimeSelectIndexGet                = 2,
	ID_VAR_CR_RespawnTimeDisable                       = 3,
	ID_VAR_CR_MatchTypeSelectIndex                     = 4,
	ID_VAR_CR_SubMatchTypeSelectIndex                  = 5,
	ID_VAR_CR_PlayerCountSelectIndexSet                = 6,
	ID_VAR_CR_PlayerCountSelectIndexGet                = 7,
	ID_VAR_CR_SubTypeDisable                           = 8,
	ID_VAR_CR_FriendDamageSelect                       = 9,
	ID_VAR_CR_FriendDamageDisable                      = 10,
	ID_VAR_CR_RuleSelectIndex                          = 11,
	ID_VAR_CR_RuleValueSelectIndex                     = 12,
	ID_VAR_CR_SpeculatorCountDisable                   = 13,
	ID_VAR_CR_SpeculatableDisable                      = 14,
	ID_VAR_CR_SpeculatableSelect                       = 15,
	ID_VAR_CR_SpeculatorCountSelectIndex               = 16,
	ID_VAR_CR_RoomName                                 = 17,
	ID_VAR_CR_ID_MT_BIO                                = 18,
	ID_VAR_CR_Password                                 = 19,
	ID_VAR_CR_Dsip                                     = 20,
	ID_VAR_CR_JoinableDisable                          = 21,
	ID_VAR_CR_JoinableSelect                           = 22,
	ID_VAR_CR_ThirdViewSelect                          = 23,
	ID_VAR_CR_ThrowableDisable                         = 24,
	ID_VAR_CR_ThrowableSelect                          = 25,
	ID_VAR_CR_DefendableSelect                         = 26,
	ID_VAR_CR_ShotHeadbleSelect                        = 27,
	ID_VAR_CR_RuleDisable                              = 28,
	ID_VAR_CR_SubRuleDisable                           = 29,
	ID_VAR_CR_ArmorDisable                             = 30,
	ID_VAR_CR_GrenadeDisable                           = 31,
	ID_VAR_CR_FlashBangDisable                         = 32,
	ID_VAR_CR_SmokeDisable                             = 33,
	ID_VAR_CR_MatchTypeArray                           = 34,
	ID_VAR_CR_EnableVedioMatchIndex                    = 35,
	ID_VAR_CR_SubTypeArray                             = 36,
	ID_VAR_CR_RuleTypeArray                            = 37,
	ID_VAR_CR_RuleVauleArray                           = 38,
	ID_VAR_CR_MapArray                                 = 39,
	ID_VAR_CR_bMapNewArray                             = 40,
	ID_VAR_CR_RespawnTimeArray                         = 41,
	ID_VAR_CR_PlayerCountArray                         = 42,
	ID_VAR_CR_ObNumberArray                            = 43,
	ID_VAR_CR_CloseRedNameTip                          = 44,
	ID_VAR_CR_CompetitiveNewIcon                       = 45,
	ID_VAR_CR_CheckpointsNewIcon                       = 46,
	ID_VAR_CR_ContestNewIcon                           = 47,
	ID_VAR_CR_MAX                                      = 48
};*/

// Enum TGameGfxUI.GfxMovie_CreateRoom.CreateRoomFunIds
/*enum CreateRoomFunIds
{
	ID_FUN_CR_ClearMatchType                           = 0,
	ID_FUN_CR_ClearMap                                 = 1,
	ID_FUN_CR_ClearRule                                = 2,
	ID_FUN_CR_ClearRivivalTime                         = 3,
	ID_FUN_CR_ClearPlayerLimit                         = 4,
	ID_FUN_CR_ClearObNumber                            = 5,
	ID_FUN_CR_ClearSubRule                             = 6,
	ID_FUN_CR_ClearSubMatchType                        = 7,
	ID_FUN_CR_CloseThis                                = 8,
	ID_FUN_CR_InitalButtonSounds                       = 9,
	ID_FUN_CR_UpdateSelectedSetting                    = 10,
	ID_FUN_CR_SetMatchTypeData                         = 11,
	ID_FUN_CR_SetSubMatchTypeData                      = 12,
	ID_FUN_CR_SetMapData                               = 13,
	ID_FUN_CR_SetRuleTypeData                          = 14,
	ID_FUN_CR_SetRuleValueData                         = 15,
	ID_FUN_CR_SetRivivalTimeData                       = 16,
	ID_FUN_CR_SetPlayerLimitData                       = 17,
	ID_FUN_CR_SetObNumberData                          = 18,
	ID_FUN_CR_ShowErrorTip                             = 19,
	ID_FUN_CR_MAX                                      = 20
};*/

// Enum TGameGfxUI.GfxMovie_ExpiredList.ExpiredListVarId
/*enum ExpiredListVarId
{
	ID_VAR_EXPIREDLIST_NameArray                       = 0,
	ID_VAR_EXPIREDLIST_IconPathArray                   = 1,
	ID_VAR_EXPIREDLIST_PriceDataArray                  = 2,
	ID_VAR_EXPIREDLIST_PriceSelectedArray              = 3,
	ID_VAR_EXPIREDLIST_PayAllBtnDisabled               = 4,
	ID_VAR_EXPIREDLIST_TotalPriceText                  = 5,
	ID_VAR_EXPIREDLIST_TotalCountText                  = 6,
	ID_VAR_EXPIREDLIST_TPMoneyName                     = 7,
	ID_VAR_EXPIREDLIST_MPMoneyName                     = 8,
	ID_VAR_EXPIREDLIST_ExpiredListUITitle              = 9,
	ID_VAR_EXPIREDLIST_MAX                             = 10
};*/

// Enum TGameGfxUI.GfxMovie_ExpiredList.ExpiredListFunId
/*enum ExpiredListFunId
{
	ID_FUN_EXPIREDLIST_ClearData                       = 0,
	ID_FUN_EXPIREDLIST_UpdateData                      = 1,
	ID_FUN_EXPIREDLIST_UpdateUI                        = 2,
	ID_FUN_EXPIREDLIST_MAX                             = 3
};*/

// Enum TGameGfxUI.GfxMovie_FeedSuggestion.tagESuggestionTypeEnums
/*enum tagESuggestionTypeEnums
{
	ESUGGESTIONTYPE_None                               = 0,
	ESUGGESTIONTYPE_BUG                                = 1,
	ESUGGESTIONTYPE_WEAPON                             = 2,
	ESUGGESTIONTYPE_MODE                               = 3,
	ESUGGESTIONTYPE_UI                                 = 4,
	ESUGGESTIONTYPE_OTHER                              = 5,
	ESUGGESTIONTYPE_MAX                                = 6
};*/

// Enum TGameGfxUI.GfxMovie_FpsTips.VariableID
/*enum VariableID
{
	ID_Var_WarnningContent                             = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_FpsTips.FunctionId
/*enum FunctionId
{
	ID_Fun_Example                                     = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_FriendWhisper.VariableID
/*enum VariableID
{
	ID_Var_FriendNameArray                             = 0,
	ID_Var_FriendUinArray                              = 1,
	ID_Var_SelectedFriendName                          = 2,
	ID_Var_SelectedFriendUin                           = 3,
	ID_Var_LogString                                   = 4,
	ID_Var_MAX                                         = 5
};*/

// Enum TGameGfxUI.GfxMovie_FriendWhisper.FunctionId
/*enum FunctionId
{
	ID_Fun_UpdateUI                                    = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_GameBag.BagVarId
/*enum BagVarId
{
	ID_VAR_BAG                                         = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_GameBag.BagFunctionId
/*enum BagFunctionId
{
	ID_FUN_SELECTBAG                                   = 0,
	ID_FUN_SETWEAPONICON                               = 1,
	ID_FUN_SETWEAPONNAME                               = 2,
	ID_FUN_GB_LockBag                                  = 3,
	ID_Fun_MAX                                         = 4
};*/

// Enum TGameGfxUI.GfxMovie_GeneralPlayerList.GeneralPlayerListPageTag
/*enum GeneralPlayerListPageTag
{
	GPPT_None                                          = 0,
	GPPT_OnlineFriendList                              = 1,
	GPPT_OnlineMyTeamMateList                          = 2,
	GPPT_OnlineOnlinelayerList                         = 3,
	GPPT_OnlineTempTeamList                            = 4,
	GPPT_OnlinePlayedFriendList                        = 5,
	GPPT_OnlineSingleMatchTopList                      = 6,
	GPPT_MessageList                                   = 7,
	GPPT_MAX                                           = 8
};*/

// Enum TGameGfxUI.GfxMovie_GeneralPlayerList.GeneralPlayerInviteType
/*enum GeneralPlayerInviteType
{
	GPPT_InviteFriend                                  = 0,
	GPPT_InvitePlayers                                 = 1,
	GPPT_TempGroup                                     = 2,
	GPPT_TeamGame                                      = 3,
	GPPT_PMTeam                                        = 4,
	GPPT_TMTeam                                        = 5,
	GPPT_TeamMatchGroup                                = 6,
	GPPT_TeamMatchGroup_Temp                           = 7,
	GPPT_InvitePMMatch                                 = 8,
	GPPT_InviteHappyMatch                              = 9,
	GPPT_AllModeMatch                                  = 10,
	GPPT_MAX                                           = 11
};*/

// Enum TGameGfxUI.GfxMovie_GuideMode.ChestMovieVar
/*enum ChestMovieVar
{
	ID_GuideMode_VAR_ModeIconPaths                     = 0,
	ID_GuideMode_VAR_ModeNameIconPaths                 = 1,
	ID_GuideMode_VAR_ModeDescriptions                  = 2,
	ID_GuideMode_VAR_RecommendModeTypes                = 3,
	ID_GuideMode_VAR_MAX                               = 4
};*/

// Enum TGameGfxUI.GfxMovie_GuideMode.ChestMovieFUN
/*enum ChestMovieFUN
{
	ID_GuideMode_FUN_InitUIData                        = 0,
	ID_GuideMode_UpdateModeData                        = 1,
	ID_GuideMode_ClearModeData                         = 2,
	ID_GuideMode_MAX                                   = 3
};*/

// Enum TGameGfxUI.GfxMovie_HappyMatch.VarId
/*enum VarId
{
	ID_VAR_CheckMatchTimeResult                        = 0,
	ID_VAR_CurrentSelectMode                           = 1,
	ID_VAR_TipStringArray                              = 2,
	ID_VAR_PlayerWaittingText                          = 3,
	ID_VAR_CurrentHappyPoint                           = 4,
	ID_VAR_HappyPointCostArray                         = 5,
	ID_VAR_ExperienceExchangeArray                     = 6,
	ID_Var_MAX                                         = 7
};*/

// Enum TGameGfxUI.GfxMovie_HappyMatch.FunId
/*enum FunId
{
	ID_FUN_ResEnterMatch                               = 0,
	ID_FUN_ResLeaveMatch                               = 1,
	ID_FUN_UpdateMatchInfo                             = 2,
	ID_FUN_UpdateMatchPlayerCount                      = 3,
	ID_FUN_UpdateMatchPlayerInfo                       = 4,
	ID_FUN_Freeze                                      = 5,
	ID_FUN_UpdateMatchPlayerNumInfo                    = 6,
	ID_FUN_BeginMatchMoive                             = 7,
	ID_FUN_EnableMatchBtn                              = 8,
	ID_FUN_ShowMatchPlayerCountText                    = 9,
	ID_FUN_SetCurrentHappyMatchProgress                = 10,
	ID_FUN_OpenHappyPointExchageDialog                 = 11,
	ID_Fun_MAX                                         = 12
};*/

// Enum TGameGfxUI.GfxMovie_HappyMatch.HappyMatchUIFreezeState
/*enum HappyMatchUIFreezeState
{
	HMUIFS_Normal                                      = 0,
	HMUIFS_ShowPlayerNum                               = 1,
	HMUIFS_WaittingText                                = 2,
	HMUIFS_FinalWaittingText                           = 3,
	HMUIFS_MAX                                         = 4
};*/

// Enum TGameGfxUI.GfxMovie_HappyMatch.HappyMatchProgress
/*enum HappyMatchProgress
{
	HMP_None                                           = 0,
	HMP_Primary                                        = 1,
	HMP_Second                                         = 2,
	HMP_Final                                          = 3,
	HMP_MAX                                            = 4
};*/

// Enum TGameGfxUI.GfxMovie_Input.InputMovieType
/*enum InputMovieType
{
	InputMovieType_Common                              = 0,
	InputMovieType_QuitTeam                            = 1,
	InputMovieType_ChangeSafeCode                      = 2,
	InputMovieType_HandOverTeam                        = 3,
	InputMovieType_MAX                                 = 4
};*/

// Enum TGameGfxUI.GfxMovie_Input.InputTypes
/*enum InputTypes
{
	InputType_None                                     = 0,
	InputType_PassWord                                 = 1,
	InputType_PlayerName                               = 2,
	InputType_TeamName                                 = 3,
	InputType_TeamGroupName                            = 4,
	InputType_Number                                   = 5,
	InputType_Email                                    = 6,
	InputType_Char                                     = 7,
	InputType_QQ                                       = 8,
	InputType_ClipedVideo                              = 9,
	InputType_MAX                                      = 10
};*/

// Enum TGameGfxUI.GfxMovie_Input.InputVariableId
/*enum InputVariableId
{
	ID_INPUT_VAR_Message                               = 0,
	ID_INPUT_VAR_TitleString                           = 1,
	ID_INPUT_VAR_SecondMessage                         = 2,
	ID_INPUT_VAR_Description                           = 3,
	ID_INPUT_VAR_MaxLen                                = 4,
	ID_INPUT_VAR_MinLen                                = 5,
	ID_INPUT_VAR_TypeLimit                             = 6,
	ID_INPUT_VAR_RadioButton                           = 7,
	ID_INPUT_VAR_ErrorText                             = 8,
	ID_INPUT_VAR_TipText                               = 9,
	ID_INPUT_VAR_CurMovieType                          = 10,
	ID_INPUT_VAR_ResetInputIndex                       = 11,
	ID_INPUT_VAR_SecondConfirmInputIndex               = 12,
	ID_INPUT_VAR_MAX                                   = 13
};*/

// Enum TGameGfxUI.GfxMovie_Input.InputFunId
/*enum InputFunId
{
	ID_INPUT_FUN_SetInputData                          = 0,
	ID_INPUT_FUN_ShowErrorTip                          = 1,
	ID_INPUT_FUN_ShowCorrectTip                        = 2,
	ID_INPUT_FUN_OnSetButtons                          = 3,
	ID_INPUT_FUN_MAX                                   = 4
};*/

// Enum TGameGfxUI.GfxMovie_InvitePlayers.InvitePlayerType
/*enum InvitePlayerType
{
	InvitePlayerType_Friend                            = 0,
	InvitePlayerType_Teammate                          = 1,
	InvitePlayerType_IdlePlayers                       = 2,
	InvitePlayerType_TeamGroupMembers                  = 3,
	InvitePlayerType_PMTeam                            = 4,
	InvitePlayerType_TMTeam                            = 5,
	InvitePlayerType_TeamMatchTeam                     = 6,
	InvitePlayerType_TeamModeMatch                     = 7,
	InvitePlayerType_MAX                               = 8
};*/

// Enum TGameGfxUI.GfxMovie_InvitePlayers.MovieRequestType
/*enum MovieRequestType
{
	MovieRequestType_TempTeam                          = 0,
	MovieRequestType_Room                              = 1,
	MovieRequestType_IdlePlayers                       = 2,
	MovieRequestType_TeamGroupMembers                  = 3,
	MovieRequestType_PMTeam                            = 4,
	MovieRequestType_TMTeam                            = 5,
	MovieRequestType_TeamMatchTeam                     = 6,
	MovieRequestType_TeamModeMatch                     = 7,
	MovieRequestType_MAX                               = 8
};*/

// Enum TGameGfxUI.GfxMovie_KeySystemMessage.FunctionId
/*enum FunctionId
{
	ID_Fun_ShowSystemMessage                           = 0,
	ID_Fun_ShowSystemMessageSecond                     = 1,
	ID_Fun_MAX                                         = 2
};*/

// Enum TGameGfxUI.GfxMovie_KickPlayerInGame.KickPlayerInGameVarId
/*enum KickPlayerInGameVarId
{
	ID_VAR_KPIG_bShowResistPanel                       = 0,
	ID_VAR_KPIG_bShowGSDUPanel                         = 1,
	ID_VAR_KPIG_bShowAllPanel                          = 2,
	ID_VAR_KPIG_ResistPlayerUins                       = 3,
	ID_VAR_KPIG_ResistPlayerNickNames                  = 4,
	ID_VAR_KPIG_ResistPlayerDidabled                   = 5,
	ID_VAR_KPIG_ResistPlayerBeVoteCounts               = 6,
	ID_VAR_KPIG_ResistPlayerVotePlayerCounts           = 7,
	ID_VAR_KPIG_GSDUPlayerUins                         = 8,
	ID_VAR_KPIG_GSDUPlayerNickNames                    = 9,
	ID_VAR_KPIG_GSDUPlayerDidabled                     = 10,
	ID_VAR_KPIG_GSDUPlayerBeVoteCounts                 = 11,
	ID_VAR_KPIG_GSDUPlayerVotePlayerCounts             = 12,
	ID_VAR_KPIG_AllPlayerUins                          = 13,
	ID_VAR_KPIG_AllPlayerNickNames                     = 14,
	ID_VAR_KPIG_AllPlayerDisabled                      = 15,
	ID_VAR_KPIG_AllPlayerBeVoteCounts                  = 16,
	ID_VAR_KPIG_AllPlayerVotePlayerCounts              = 17,
	ID_VAR_KPIG_AllHumanHeros                          = 18,
	ID_VAR_KPIG_KickPlayerUin                          = 19,
	ID_VAR_KPIG_KickReasonID                           = 20,
	ID_VAR_KPIG_CustomKickReason                       = 21,
	ID_VAR_KPIG_VoteChanceCount                        = 22,
	ID_VAR_KPIG_VoteChanceType                         = 23,
	ID_VAR_KPIG_DisableVoteCountingDown                = 24,
	ID_VAR_KPIG_MAX                                    = 25
};*/

// Enum TGameGfxUI.GfxMovie_KickPlayerInGame.KickPlayerInGameFunId
/*enum KickPlayerInGameFunId
{
	ID_FUN_KPIG_ClearData                              = 0,
	ID_FUN_KPIG_ReSetKickPlayerList                    = 1,
	ID_FUN_KPIG_MAX                                    = 2
};*/

// Enum TGameGfxUI.GfxMovie_LeaveMessage.LeaveMessageVarId
/*enum LeaveMessageVarId
{
	ID_LeaveMessage_VAR_MaxLen                         = 0,
	ID_LeaveMessage_VAR_PlayerName                     = 1,
	ID_LeaveMessage_VAR_MessageContent                 = 2,
	ID_LeaveMessage_VAR_MAX                            = 3
};*/

// Enum TGameGfxUI.GfxMovie_LeaveMessage.LeaveMessageFunId
/*enum LeaveMessageFunId
{
	ID_LeaveMessage_Fun_UpdateMessageUI                = 0,
	ID_LeaveMessage_Fun_MAX                            = 1
};*/

// Enum TGameGfxUI.GfxMovie_ShopRoom.ShopRoomVariableId
/*enum ShopRoomVariableId
{
	ID_VAR_SR_GoodsNum                                 = 0,
	ID_VAR_SR_ShoppingCart                             = 1,
	ID_VAR_SR_TPArea                                   = 2,
	ID_VAR_SR_ShopQuitType                             = 3,
	ID_VAR_SR_AreaUIPage                               = 4,
	ID_VAR_SR_RightType                                = 5,
	ID_VAR_SR_SubType                                  = 6,
	ID_VAR_SR_ThreeLevelType                           = 7,
	ID_VAR_SR_CartTipName                              = 8,
	ID_VAR_SR_CartTipVisible                           = 9,
	ID_VAR_SR_TryEquipment                             = 10,
	ID_VAR_SR_MixPay                                   = 11,
	ID_VAR_SR_IsAddCart                                = 12,
	ID_VAR_SR_CartGoodsType                            = 13,
	ID_VAR_SR_ShieldLayerVisible                       = 14,
	ID_VAR_SR_TPValueText                              = 15,
	ID_VAR_SR_GPValueText                              = 16,
	ID_VAR_SR_MPValueText                              = 17,
	ID_VAR_SR_GiveText                                 = 18,
	ID_VAR_SR_CartGoodsNum                             = 19,
	ID_VAR_SR_SortSelectedIndex                        = 20,
	ID_VAR_SR_bBuyedText                               = 21,
	ID_VAR_SR_RootCompare                              = 22,
	ID_VAR_SR_PrePageButtonDisabled                    = 23,
	ID_VAR_SR_NextPageButtonDisabled                   = 24,
	ID_VAR_SR_GoAnyPageButtonDisabled                  = 25,
	ID_VAR_SR_HasWeaponNumText                         = 26,
	ID_VAR_SR_HasWeaponNumTextVisible                  = 27,
	ID_VAR_SR_ShowMonthMoneyTip                        = 28,
	ID_VAR_SR_DefaultIconPath                          = 29,
	ID_VAR_SR_MoneyRefreshTip                          = 30,
	ID_VAR_SR_SearchText                               = 31,
	ID_VAR_SR_bRotateLeftDown                          = 32,
	ID_VAR_SR_bRotateRightDown                         = 33,
	ID_VAR_SR_WeaponsPreviewVisible                    = 34,
	ID_VAR_SR_CompareID                                = 35,
	ID_VAR_SR_CommdityIDArray                          = 36,
	ID_VAR_SR_ItemNameArray                            = 37,
	ID_VAR_SR_ItemDescriptionArray                     = 38,
	ID_VAR_SR_ItemCommentArray                         = 39,
	ID_VAR_SR_bAvailableArray                          = 40,
	ID_VAR_SR_CommodityPriceArray                      = 41,
	ID_VAR_SR_CommodityOriginalPriceArray              = 42,
	ID_VAR_SR_WeaponTypeArray                          = 43,
	ID_VAR_SR_PayLoadArray                             = 44,
	ID_VAR_SR_VIPRateArray                             = 45,
	ID_VAR_SR_CommonRateArray                          = 46,
	ID_VAR_SR_bCompareBtnArray                         = 47,
	ID_VAR_SR_GiveBtnVisibleArray                      = 48,
	ID_VAR_SR_AskForBtnVisibleArray                    = 49,
	ID_VAR_SR_AddCartBtnVisibleArray                   = 50,
	ID_VAR_SR_SaleTagArray                             = 51,
	ID_VAR_SR_bLockArray                               = 52,
	ID_VAR_SR_RankIconPathArray                        = 53,
	ID_VAR_SR_CommodityIconPathArray                   = 54,
	ID_VAR_SR_RankLevelNumArray                        = 55,
	ID_VAR_SR_bEquipedArray                            = 56,
	ID_VAR_SR_bHasCommodityArray                       = 57,
	ID_VAR_SR_ProgressArrayArray                       = 58,
	ID_VAR_SR_CommodityTypeArray                       = 59,
	ID_VAR_SR_CommodityGetPahArray                     = 60,
	ID_VAR_SR_bCanTryWeaponArray                       = 61,
	ID_VAR_SR_bCanBuyArray                             = 62,
	ID_VAR_SR_bUpgradeArray                            = 63,
	ID_VAR_SR_ExtendBulletArray                        = 64,
	ID_VAR_SR_ExtendFunctionArray                      = 65,
	ID_VAR_SR_CartItemNameArray                        = 66,
	ID_VAR_SR_CartItemDescriptionArray                 = 67,
	ID_VAR_SR_CartPriceSelectedArray                   = 68,
	ID_VAR_SR_CartPriceShowArrayArray                  = 69,
	ID_VAR_SR_CartItemIconPathArray                    = 70,
	ID_VAR_SR_ShopCartVisible                          = 71,
	ID_VAR_SR_PreviewLocationArray                     = 72,
	ID_VAR_SR_PreviewIconPathArray                     = 73,
	ID_VAR_SR_HasCommodityIconPath                     = 74,
	ID_VAR_SR_MainMenuNameArray                        = 75,
	ID_VAR_SR_MainMenuTypeArray                        = 76,
	ID_VAR_SR_SubMenuNameArray                         = 77,
	ID_VAR_SR_SubMenuIDArray                           = 78,
	ID_VAR_SR_SubSubMenuNameListArray                  = 79,
	ID_VAR_SR_SubSubMenuIDListArray                    = 80,
	ID_VAR_SR_MAX                                      = 81
};*/

// Enum TGameGfxUI.GfxMovie_ShopRoom.ShopRoomFunId
/*enum ShopRoomFunId
{
	ID_FUN_SR_OnInitialize                             = 0,
	ID_FUN_SR_ShopQuitFun                              = 1,
	ID_FUN_SR_SetSortListener                          = 2,
	ID_FUN_SR_SetRoleInfomation                        = 3,
	ID_FUN_SR_ClearCart                                = 4,
	ID_FUN_SR_ClearCompareTip                          = 5,
	ID_FUN_SR_GotoShopCart                             = 6,
	ID_FUN_SR_ClearDataWhenCloseShop                   = 7,
	ID_FUN_SR_CloseThis                                = 8,
	ID_FUN_SR_UpdatePageIndexShow                      = 9,
	ID_FUN_SR_OnShowClearMPTip                         = 10,
	ID_FUN_SR_EscKeyShotFunction                       = 11,
	ID_FUN_SR_MidTagClearMainMenuData                  = 12,
	ID_FUN_SR_UpdateMoneyLocation                      = 13,
	ID_FUN_SR_ClearMainMenuData                        = 14,
	ID_FUN_SR_UpdateMainMenuName                       = 15,
	ID_FUN_SR_ShowWeaponFiringMovie                    = 16,
	ID_FUN_SR_ResetSortButtonselectedIndex             = 17,
	ID_FUN_SR_ClearCommodityListData                   = 18,
	ID_FUN_SR_UpdateCommodityList                      = 19,
	ID_FUN_SR_RefreshCommodityList                     = 20,
	ID_FUN_SR_UpdateFrontPageList                      = 21,
	ID_FUN_SR_ClearCartListData                        = 22,
	ID_FUN_SR_UpdateCartListData                       = 23,
	ID_FUN_SR_UpdateCartTotalPriceInfo                 = 24,
	ID_FUN_SR_AddSomeCommodityCart                     = 25,
	ID_FUN_SR_ClearPreviewListData                     = 26,
	ID_FUN_SR_UpdatePriewListData                      = 27,
	ID_FUN_SR_SetSortManage                            = 28,
	ID_FUN_SR_UpdateNewCommodityTips                   = 29,
	ID_FUN_SR_LocalizeNotForSaleTip                    = 30,
	ID_FUN_SR_MAX                                      = 31
};*/

// Enum TGameGfxUI.GfxMovie_LittleShopRoom.AsVarPathID
/*enum AsVarPathID
{
	ID_VAR_LITTLESHOP_                                 = 0,
	ID_VAR_LITTLESHOP_MAX                              = 1
};*/

// Enum TGameGfxUI.GfxMovie_LittleShopRoom.AsFunPathID
/*enum AsFunPathID
{
	ID_FUN_LITTLESHOP_                                 = 0,
	ID_FUN_LITTLESHOP_MAX                              = 1
};*/

// Enum TGameGfxUI.GfxMovie_LoginLobby.LoginLobbyVarId
/*enum LoginLobbyVarId
{
	ID_VAR_LL_LogString                                = 0,
	ID_VAR_LL_ShopButtonDisabled                       = 1,
	ID_VAR_LL_AvatarButtonDisabled                     = 2,
	ID_VAR_LL_ShopButtonSelected                       = 3,
	ID_VAR_LL_TaskButtonDisabled                       = 4,
	ID_VAR_LL_AchievenButtonDisabled                   = 5,
	ID_VAR_LL_CommonGameButtonDisabled                 = 6,
	ID_VAR_LL_TeamButtonDisabled                       = 7,
	ID_VAR_LL_TechnicalGameButtonDisabled              = 8,
	ID_VAR_LL_SingleButtonDisabled                     = 9,
	ID_VAR_LL_TeamGameButtonDisabled                   = 10,
	ID_VAR_LL_ExitButtonDisabled                       = 11,
	ID_VAR_LL_bIsMusicing                              = 12,
	ID_VAR_LL_MAX                                      = 13
};*/

// Enum TGameGfxUI.GfxMovie_LoginLobby.LoginLobbyFunId
/*enum LoginLobbyFunId
{
	ID_FUN_LL_ResizeWindow                             = 0,
	ID_FUN_LL_SetFlickTaskBtnEnabled                   = 1,
	ID_FUN_LL_SetFlickSurveyBtnEnabled                 = 2,
	ID_FUN_LL_SetFlickAchievementBtnEnabled            = 3,
	ID_FUN_LL_SetTaskBtnSubmit                         = 4,
	ID_FUN_LL_BshowFirendClickMC                       = 5,
	ID_FUN_LL_QuitGame                                 = 6,
	ID_FUN_LL_CloseThis                                = 7,
	ID_FUN_LL_OnUpdateMusicButtonState                 = 8,
	ID_FUN_LL_SetPersonalGameBtnStartState             = 9,
	ID_FUN_LL_ShowTaskCommitable                       = 10,
	ID_FUN_LL_ShowTaskAcceptable                       = 11,
	ID_FUN_LL_FlashTaskBtn                             = 12,
	ID_FUN_LL_SetHappyMatchHide                        = 13,
	ID_FUN_LL_SetNewCommodityNum                       = 14,
	ID_FUN_LL_MAX                                      = 15
};*/

// Enum TGameGfxUI.GfxMovie_LotteryUI.LotterySoundID
/*enum LotterySoundID
{
	ID_FireSound                                       = 0,
	ID_NormalGiftSound                                 = 1,
	ID_SpecialGiftSound                                = 2,
	ID_MAX                                             = 3
};*/

// Enum TGameGfxUI.GfxMovie_LotteryUI.OperatorType
/*enum OperatorType
{
	OPFire                                             = 0,
	OPBuyBullet                                        = 1,
	OPExchange                                         = 2,
	OperatorType_MAX                                   = 3
};*/

// Enum TGameGfxUI.GfxMovie_LotteryUI.LotteryAreaType
/*enum LotteryAreaType
{
	ID_LotteryArea_A                                   = 0,
	ID_LotteryArea_B                                   = 1,
	ID_LotteryArea_C                                   = 2,
	ID_LotteryArea_D                                   = 3,
	ID_LotteryArea_E                                   = 4,
	ID_LotteryArea_MAX                                 = 5
};*/

// Enum TGameGfxUI.GfxMovie_LotteryUI.BuyBulletCountType
/*enum BuyBulletCountType
{
	ID_BuyBullet_One                                   = 0,
	ID_BuyBullet_Five                                  = 1,
	ID_BuyBullet_Ten                                   = 2,
	ID_BuyBullet_Thirty                                = 3,
	ID_BuyBullet_MAX                                   = 4
};*/

// Enum TGameGfxUI.GfxMovie_LotteryUI.ErrotTipType
/*enum ErrotTipType
{
	ID_Lottery_Error_NoBullet                          = 0,
	ID_Lottery_Error_NoEnoughTP                        = 1,
	ID_Lottery_Error_NoEnoughMP                        = 2,
	ID_Lottery_Error_MAX                               = 3
};*/

// Enum TGameGfxUI.GfxMovie_LotteryUI.LotteryMovieVar
/*enum LotteryMovieVar
{
	ID_Lottery_VAR_StrNickName                         = 0,
	ID_Lottery_VAR_Tip                                 = 1,
	ID_Lottery_VAR_AllLotteryTips                      = 2,
	ID_Lottery_VAR_CurrGamePointValue                  = 3,
	ID_Lottery_VAR_CurrMonthPointValue                 = 4,
	ID_Lottery_VAR_CurrEquipValue                      = 5,
	ID_Lottery_VAR_CurrAreaBulletCount                 = 6,
	ID_Lottery_VAR_BulletTPValue                       = 7,
	ID_Lottery_VAR_BulletMPValue                       = 8,
	ID_Lottery_VAR_PointValue                          = 9,
	ID_Lottery_VAR_MonthValue                          = 10,
	ID_Lottery_VAR_LotteryPic                          = 11,
	ID_Lottery_VAR_LotteryName                         = 12,
	ID_Lottery_VAR_LotteryTimer                        = 13,
	ID_Lottery_VAR_LotteryCount                        = 14,
	ID_Lottery_VAR_LotteryExperience                   = 15,
	ID_Lottery_VAR_LotteryMonthPoint                   = 16,
	ID_Lottery_VAR_LotteryGamePoint                    = 17,
	ID_Lottery_VAR_ShotCount                           = 18,
	ID_Lottery_VAR_BuyBulletIntroText                  = 19,
	ID_Lottery_VAR_BetweenFireAndShotPeriod            = 20,
	ID_Lottery_VAR_LotteryPositionId                   = 21,
	ID_Lottery_VAR_ShotEffectPeriod                    = 22,
	ID_Lottery_VAR_BetweenFireMoreAgain                = 23,
	ID_Lottery_VAR_ShowLotteryGiftPeriod               = 24,
	ID_Lottery_VAR_IsShowTipDialog                     = 25,
	ID_Lottery_VAR_PartExchangePic                     = 26,
	ID_Lottery_VAR_PartExchangeName                    = 27,
	ID_Lottery_VAR_PartExchangeTimer                   = 28,
	ID_Lottery_VAR_PartExchangeCount                   = 29,
	ID_Lottery_VAR_NeedPartCount                       = 30,
	ID_Lottery_VAR_NeedPartCountText                   = 31,
	ID_Lottery_VAR_ShowTipLotteryIdx                   = 32,
	ID_Lottery_VAR_LotteryInstroBtText                 = 33,
	ID_Lottery_VAR_DayUnitName                         = 34,
	ID_Lottery_VAR_HourUnitName                        = 35,
	ID_Lottery_VAR_NZPointUnitName                     = 36,
	ID_Lottery_VAR_MonthPointUnitName                  = 37,
	ID_Lottery_VAR_CountUnitName                       = 38,
	ID_Lottery_VAR_WanUnitName                         = 39,
	ID_Lottery_VAR_ExperienceName                      = 40,
	ID_Lottery_VAR_AreaBulletText                      = 41,
	ID_Lottery_VAR_ShotCountText                       = 42,
	ID_Lottery_VAR_SystemGiveText                      = 43,
	ID_Lottery_VAR_LeftFireCountText                   = 44,
	ID_Lottery_VAR_FirstShowGuide                      = 45,
	ID_Lottery_VAR_IsPropFull                          = 46,
	ID_Lottery_VAR_IsLateRelease                       = 47,
	ID_Lottery_VAR_Current_LotteryArea                 = 48,
	ID_Lottery_VAR_MAX                                 = 49
};*/

// Enum TGameGfxUI.GfxMovie_LotteryUI.LotteryMovieFun
/*enum LotteryMovieFun
{
	ID_Lottery_FUN_ShowBuyBullet                       = 0,
	ID_Lottery_FUN_OnUpdateAllData                     = 1,
	ID_Lottery_FUN_OnUpdateTP                          = 2,
	ID_Lottery_FUN_OnUpdateFireResult                  = 3,
	ID_Lottery_FUN_OnUpdateFireFailed                  = 4,
	ID_Lottery_FUN_OnUpdateBuyBulletResult             = 5,
	ID_Lottery_FUN_OnUpdateExchangeResult              = 6,
	ID_Lottery_FUN_OnUpdateExchangeByTools             = 7,
	ID_Lottery_FUN_OnErrorTip                          = 8,
	ID_Lottery_FUN_PlayShotEffective                   = 9,
	ID_Lottery_FUN_UpdateAfterPlayEffect               = 10,
	ID_Lottery_FUN_UpdateAfterFireForUsingBullet       = 11,
	ID_Lottery_FUN_UpdateAfterFireForTools             = 12,
	ID_Lottery_FUN_UpdateAllPeopleLotteryTips          = 13,
	ID_Lottery_FUN_MAX                                 = 14
};*/

// Enum TGameGfxUI.GfxMovie_MatchWaitMovie.MatchWaitMovieVarId
/*enum MatchWaitMovieVarId
{
	ID_VAR_WAITMOVIE_CurMatchType                      = 0,
	ID_VAR_WAITMOVIE_WaitingTimeMax                    = 1,
	ID_VAR_WAITMOVIE_SearchStateString1                = 2,
	ID_VAR_WAITMOVIE_SearchStateString2                = 3,
	ID_VAR_WAITMOVIE_SearchStateTime1                  = 4,
	ID_VAR_WAITMOVIE_SearchStateTime2                  = 5,
	ID_VAR_WAITMOVIE_CancelBtnVisible                  = 6,
	ID_VAR_WAITMOVIE_MAX                               = 7
};*/

// Enum TGameGfxUI.GfxMovie_MatchWaitMovie.MatchWaitMovieFunId
/*enum MatchWaitMovieFunId
{
	ID_FUN_WAITMOVIE_SetSateText                       = 0,
	ID_FUN_WAITMOVIE_OnSetMatchNeedTime                = 1,
	ID_FUN_WAITMOVIE_OnClearMatchNeedTime              = 2,
	ID_FUN_WAITMOVIE_OnNtfStartMatch                   = 3,
	ID_FUN_WAITMOVIE_MAX                               = 4
};*/

// Enum TGameGfxUI.GfxMovie_MatchWaitMovie.EnterMatchPlayerType
/*enum EnterMatchPlayerType
{
	EnterMatchPlayerType_Normal                        = 0,
	EnterMatchPlayerType_Host                          = 1,
	EnterMatchPlayerType_Member                        = 2,
	EnterMatchPlayerType_MAX                           = 3
};*/

// Enum TGameGfxUI.GfxMovie_MDMGuide.FuncID
/*enum FuncID
{
	ID_FUNC_RemoveListener                             = 0,
	ID_FUNC_MAX                                        = 1
};*/

// Enum TGameGfxUI.GfxMovie_MessageBox.MBVariableId
/*enum MBVariableId
{
	ID_VAR_Title                                       = 0,
	ID_VAR_Message                                     = 1,
	ID_VAR_MB_OKText                                   = 2,
	ID_VAR_MB_CancelText                               = 3,
	ID_VAR_MB_SelectedBagIndex                         = 4,
	ID_VAR_MB_SelectedRadioIndex                       = 5,
	ID_VAR_MB_SelectedBagContent                       = 6,
	ID_VAR_MB_MessageArray                             = 7,
	ID_VAR_MB_bNtfNextBtnSelected                      = 8,
	ID_Var_MAX                                         = 9
};*/

// Enum TGameGfxUI.GfxMovie_MessageBox.MBFUNId
/*enum MBFUNId
{
	ID_FUN_MB_SetData                                  = 0,
	ID_FUN_MB_EnableBtn                                = 1,
	ID_FUN_MB_SetBagData                               = 2,
	ID_FUN_MB_InitBagData                              = 3,
	ID_FUN_MB_UpdateRadioButtonInfo                    = 4,
	ID_FUN_MB_UpdateNtfNextInfo                        = 5,
	ID_FUN_MB_MAX                                      = 6
};*/

// Enum TGameGfxUI.GfxMovie_MultiPlayerRoom.PlayerStateType
/*enum PlayerStateType
{
	ST_ROOMHOST                                        = 0,
	ST_UNREADYMATCH                                    = 1,
	ST_READYMATCH                                      = 2,
	ST_JOINMATCH                                       = 3,
	ST_UNREADYWATCH                                    = 4,
	ST_READYWATCH                                      = 5,
	ST_JOINWATCH                                       = 6,
	ST_GMUI                                            = 7,
	ST_JOINMATCH_GM                                    = 8,
	ST_MAX                                             = 9
};*/

// Enum TGameGfxUI.GfxMovie_MultiPlayerRoom.NZPropMCType
/*enum NZPropMCType
{
	NZPropMCType_None                                  = 0,
	NZPropMCType_PVEModeMC                             = 1,
	PVEModeMC_NZPropMC                                 = 2,
	NZPropMCType_MAX                                   = 3
};*/

// Enum TGameGfxUI.GfxMovie_MultiPlayerRoom.PlayerRelationShipType
/*enum PlayerRelationShipType
{
	PlayerRelationShip_None                            = 0,
	PlayerRelationShip_Friend                          = 1,
	PlayerRelationShip_Team                            = 2,
	PlayerRelationShip_Black                           = 3,
	PlayerRelationShip_MAX                             = 4
};*/

// Enum TGameGfxUI.GfxMovie_MultiPlayerRoom.MultiRoomVariableId
/*enum MultiRoomVariableId
{
	ID_VAR_MR_Player                                   = 0,
	ID_VAR_MR_GameTypeSelectIndex                      = 1,
	ID_VAR_MR_GameTypeIndex                            = 2,
	ID_VAR_MR_SubGameTypeDisable                       = 3,
	ID_VAR_MR_MatchTypeDisable                         = 4,
	ID_VAR_MR_MapTypeDisable                           = 5,
	ID_VAR_MR_SubGameTypeSelect                        = 6,
	ID_VAR_MR_RuleTypeSelectIndex                      = 7,
	ID_VAR_MR_RuleValueSelectIndex                     = 8,
	ID_VAR_MR_RuleValueText                            = 9,
	ID_VAR_MR_GameMapSelectIndex                       = 10,
	ID_VAR_MR_RespawnTimeText                          = 11,
	ID_VAR_MR_SubModeText                              = 12,
	ID_VAR_MR_RespawnTimeDisable                       = 13,
	ID_VAR_MR_PlayerRespawnTimeSelectIndex             = 14,
	ID_VAR_MR_FriendDamageSelect                       = 15,
	ID_VAR_MR_FriendDamageDisable                      = 16,
	ID_VAR_MR_JoinSelect                               = 17,
	ID_VAR_MR_JoinDisable                              = 18,
	ID_VAR_MR_ThirdViewSelect                          = 19,
	ID_VAR_MR_ThirdViewDisable                         = 20,
	ID_VAR_MR_ThrowSelect                              = 21,
	ID_VAR_MR_ThrowDisable                             = 22,
	ID_VAR_MR_DefendSelect                             = 23,
	ID_VAR_MR_ShotHeadSelect                           = 24,
	ID_VAR_MR_DefendDisable                            = 25,
	ID_VAR_MR_ShotHeadDisable                          = 26,
	ID_VAR_MR_GameRuleDisable                          = 27,
	ID_VAR_MR_MapDisable                               = 28,
	ID_VAR_MR_RuleValueDisable                         = 29,
	ID_VAR_MR_GameRuleText                             = 30,
	ID_VAR_MR_RuleValueCount                           = 31,
	ID_VAR_MR_RoomPassword                             = 32,
	ID_VAR_MR_bSpectator                               = 33,
	ID_VAR_MR_BattleNum                                = 34,
	ID_VAR_MR_SpectatorNum                             = 35,
	ID_VAR_MR_CurrentRoomInfo                          = 36,
	ID_VAR_MR_MatchTypeArray                           = 37,
	ID_VAR_MR_SubTypeArray                             = 38,
	ID_VAR_MR_RuleTypeArray                            = 39,
	ID_VAR_MR_RuleVauleArray                           = 40,
	ID_VAR_MR_MapArray                                 = 41,
	ID_VAR_MR_RespawnTimeArray                         = 42,
	ID_VAR_MR_SkillIconPath                            = 43,
	ID_VAR_MR_SkillNameArray                           = 44,
	ID_VAR_MR_SkillGridNum                             = 45,
	ID_VAR_MR_PVETaskIDArray                           = 46,
	ID_VAR_MR_PVETaskNameArray                         = 47,
	ID_VAR_MR_PVETaskAcceptedArray                     = 48,
	ID_VAR_MR_bSkillAbledArray                         = 49,
	ID_VAR_MR_ID_MT_PVE_IF                             = 50,
	ID_VAR_MR_IID_MT_MHM                               = 51,
	ID_VAR_MR_ID_MT_BIO                                = 52,
	ID_VAR_MR_bGMPlayer                                = 53,
	ID_VAR_MR_bEnterPVEQTRoom                          = 54,
	ID_VAR_MR_bDeathBackChecked                        = 55,
	ID_VAR_MR_bShowQTChecked                           = 56,
	ID_VAR_MR_bShowDeathBackChecked                    = 57,
	ID_VAR_MR_bDisableDeathBackChecked                 = 58,
	ID_VAR_MR_ScoreboardLabel                          = 59,
	ID_VAR_MR_cbCloseRedNameSelected                   = 60,
	ID_VAR_MR_cbCloseRedName_Visible                   = 61,
	ID_VAR_MR_cbCloseRedName_Disable                   = 62,
	ID_VAR_MR_cbCloseVedioRecordSelected               = 63,
	ID_VAR_MR_cbCloseVedioRecord_Visible               = 64,
	ID_VAR_MR_cbCloseVedioRecord_Disable               = 65,
	ID_VAR_MR_MAX                                      = 66
};*/

// Enum TGameGfxUI.GfxMovie_MultiPlayerRoom.MultiRoomFunctionId
/*enum MultiRoomFunctionId
{
	ID_FUN_SetRoomId                                   = 0,
	ID_FUN_SetRoomName                                 = 1,
	ID_FUN_SetChanelName                               = 2,
	ID_FUN_SetGameType                                 = 3,
	ID_FUN_SetRuleType                                 = 4,
	ID_FUN_SetMap                                      = 5,
	ID_FUN_ClearMatchType                              = 6,
	ID_FUN_ClearSubMatchType                           = 7,
	ID_FUN_ClearMap                                    = 8,
	ID_FUN_ClearRule                                   = 9,
	ID_FUN_ClearRuleValue                              = 10,
	ID_FUN_ClearRivivalTime                            = 11,
	ID_FUN_ClearJoin                                   = 12,
	ID_FUN_ResetRuleValueSelect                        = 13,
	ID_FUN_SetCamp                                     = 14,
	ID_FUN_OpenRightClickMenu                          = 15,
	ID_FUN_CloseRightClickMenu                         = 16,
	ID_FUN_SetHost                                     = 17,
	ID_FUN_SetNotReady                                 = 18,
	ID_FUN_SetReadyMatch                               = 19,
	ID_FUN_SetReadyWatch                               = 20,
	ID_FUN_SetJionGame                                 = 21,
	ID_FUN_SetRoomPlace                                = 22,
	ID_FUN_bCanChangeToGSDUCamp                        = 23,
	ID_FUN_bCanChangeToResistanceCamp                  = 24,
	ID_FUN_bCanChangeToSpectator                       = 25,
	ID_FUN_MR_CloseThis                                = 26,
	ID_FUN_MR_ShowHostTips                             = 27,
	ID_FUN_MR_SetMatchTypeData                         = 28,
	ID_FUN_MR_SetSubTypeData                           = 29,
	ID_FUN_MR_SetRuleTypeData                          = 30,
	ID_FUN_MR_SetRuleValueData                         = 31,
	ID_FUN_MR_SetMapData                               = 32,
	ID_FUN_MR_SetRespawnTimeData                       = 33,
	ID_FUN_MR_UpdateRoomPanel                          = 34,
	ID_FUN_MR_InitalButtonSounds                       = 35,
	ID_FUN_MR_SetCardMC                                = 36,
	ID_FUN_MR_OnSetTimerStartMatch                     = 37,
	ID_FUN_MR_OnSetTimerJoinMatch                      = 38,
	ID_FUN_MR_OnCancelTimerStartMatch                  = 39,
	ID_FUN_MR_OnCancelTimerJoinMatch                   = 40,
	ID_FUN_MR_OnPVMShowSkill                           = 41,
	ID_FUN_MR_SetGMUI                                  = 42,
	ID_FUN_MR_SetGMJoinWatch                           = 43,
	ID_FUN_MR_DisabledRoomSettingButtons               = 44,
	ID_FUN_MR_SetRoomPassword                          = 45,
	ID_FUN_MR_UpdateSkillExtend                        = 46,
	ID_FUN_MR_ClearSkillModeData                       = 47,
	ID_FUN_MR_SetSkillModeData                         = 48,
	ID_FUN_MR_IsShowVedioRecordChecked                 = 49,
	ID_Fun_MAX                                         = 50
};*/

// Enum TGameGfxUI.GfxMovie_MultiPlayerRoom.CheckConditionalTarget
/*enum CheckConditionalTarget
{
	CheckTarget_None                                   = 0,
	CheckTarget_StartMatch                             = 1,
	CheckTarget_JoinMatch                              = 2,
	CheckTarget_Ready                                  = 3,
	CheckTarget_MAX                                    = 4
};*/

// Enum TGameGfxUI.GfxMovie_NewAchievedArrived.VariableID
/*enum VariableID
{
	ID_Var_AchieveFlag                                 = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_NewAchievedArrived.FunctionId
/*enum FunctionId
{
	ID_Fun_ShowMovie                                   = 0,
	ID_Fun_ShowNext                                    = 1,
	ID_Fun_AsCloseMovie                                = 2,
	ID_Fun_MAX                                         = 3
};*/

// Enum TGameGfxUI.GfxMovie_NewGuide.ChestMovieVar
/*enum ChestMovieVar
{
	ID_NewGuide_VAR_Titles                             = 0,
	ID_NewGuide_VAR_LevelTitles                        = 1,
	ID_NewGuide_VAR_LevelContents                      = 2,
	ID_NewGuide_VAR_ModeTypeList                       = 3,
	ID_NewGuide_VAR_ModeEnum                           = 4,
	ID_NewGuide_VAR_SignList                           = 5,
	ID_NewGuide_VAR_CanClose                           = 6,
	ID_NewGuide_VAR_XCanClose                          = 7,
	ID_NewGuide_VAR_MAX                                = 8
};*/

// Enum TGameGfxUI.GfxMovie_NewGuide.ChestMovieFUN
/*enum ChestMovieFUN
{
	ID_NewGuide_FUN_OnInitContents                     = 0,
	ID_NewGuide_FUN_OnSetModeList                      = 1,
	ID_NewGuide_FUN_CloseLoading                       = 2,
	ID_NewGuide_FUN_StopParentFlick                    = 3,
	ID_NewGuide_FUN_StopChildrenFlick                  = 4,
	ID_NewGuide_FUN_MAX                                = 5
};*/

// Enum TGameGfxUI.GfxMovie_NewGuide.ModeType
/*enum ModeType
{
	ID_MODE_PVP1                                       = 0,
	ID_MODE_PVP2                                       = 1,
	ID_MODE_PVP3                                       = 2,
	ID_MODE_PVP4                                       = 3,
	ID_MODE_PVP5                                       = 4,
	ID_MODE_PVP6                                       = 5,
	ID_MODE_PVP7                                       = 6,
	ID_MODE_PVE1                                       = 7,
	ID_MODE_PVE2                                       = 8,
	ID_MODE_PVB                                        = 9,
	ID_MODE_CTM                                        = 10,
	ID_MODE_PVM                                        = 11,
	ID_MODE_PVT1                                       = 12,
	ID_MODE_PVT2                                       = 13,
	ID_MODE_MAX                                        = 14
};*/

// Enum TGameGfxUI.GfxMovie_NewModeNotice.VariableID
/*enum VariableID
{
	ID_Var_ModeIdArray                                 = 0,
	ID_Var_ModeVoteCountArray                          = 1,
	ID_Var_ModeBeVoteArray                             = 2,
	ID_Var_MAX                                         = 3
};*/

// Enum TGameGfxUI.GfxMovie_NewModeNotice.FunctionId
/*enum FunctionId
{
	ID_Fun_UpdateVoteUI                                = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_OnlineMatch.OnlineMatchVarID
/*enum OnlineMatchVarID
{
	ID_VAR_TECH_PER_TYPENAMES                          = 0,
	ID_VAR_TECH_PER_MAX                                = 1
};*/

// Enum TGameGfxUI.GfxMovie_OnlineMatch.OnlineMatchFunId
/*enum OnlineMatchFunId
{
	ID_FUN_ONLINE_MATCH_REFRESH_MATCH_LIST             = 0,
	ID_FUN_ONLINE_MATCH_REFRESH_MATCH_MAX              = 1
};*/

// Enum TGameGfxUI.GfxMovie_PersonalScoreboard.PVEScoreBoardVarId
/*enum PVEScoreBoardVarId
{
	ID_VAR_PERSONALSB_RankLevelMax                     = 0,
	ID_VAR_PERSONALSB_MatchName                        = 1,
	ID_VAR_PERSONALSB_MapName                          = 2,
	ID_VAR_PERSONALSB_ModeId                           = 3,
	ID_VAR_PERSONALSB_TaskState                        = 4,
	ID_VAR_PERSONALSB_MVPDescription                   = 5,
	ID_VAR_PERSONALSB_ACEDescription                   = 6,
	ID_VAR_PERSONALSB_FKillDescription                 = 7,
	ID_VAR_PERSONALSB_LKillDescription                 = 8,
	ID_VAR_PERSONALSB_C4DefuseDescription              = 9,
	ID_VAR_PERSONALSB_C4PlantDescription               = 10,
	ID_VAR_PERSONALSB_TeamStartDescription             = 11,
	ID_VAR_PERSONALSB_CPointDescription                = 12,
	ID_VAR_PERSONALSB_EXPProgress_Now                  = 13,
	ID_VAR_PERSONALSB_SelfRank                         = 14,
	ID_VAR_PERSONALSB_RankIcon                         = 15,
	ID_VAR_PERSONALSB_NextRankIcon                     = 16,
	ID_VAR_PERSONALSB_Exp_Base                         = 17,
	ID_VAR_PERSONALSB_Exp_Special                      = 18,
	ID_VAR_PERSONALSB_Exp_TeamAdd                      = 19,
	ID_VAR_PERSONALSB_Exp_NetBarAdd                    = 20,
	ID_VAR_PERSONALSB_Exp_ToolsAdd                     = 21,
	ID_VAR_PERSONALSB_Exp_ClanTeamAdd                  = 22,
	ID_VAR_PERSONALSB_Exp_VIPAdd                       = 23,
	ID_VAR_PERSONALSB_Exp_ActvAdd                      = 24,
	ID_VAR_PERSONALSB_Exp_SpecAdd                      = 25,
	ID_VAR_PERSONALSB_Exp_Pendant                      = 26,
	ID_VAR_PERSONALSB_SelfKill                         = 27,
	ID_VAR_PERSONALSB_SelfKilledl                      = 28,
	ID_VAR_PERSONALSB_PlayTime                         = 29,
	ID_VAR_PERSONALSB_GetGP                            = 30,
	ID_VAR_PERSONALSB_GP_Special                       = 31,
	ID_VAR_PERSONALSB_GP_TeamAdd                       = 32,
	ID_VAR_PERSONALSB_GP_NetBarAdd                     = 33,
	ID_VAR_PERSONALSB_GP_ToolsAdd                      = 34,
	ID_VAR_PERSONALSB_GP_CommonAdd                     = 35,
	ID_VAR_PERSONALSB_GP_ActvAdd                       = 36,
	ID_VAR_PERSONALSB_GP_Pendant                       = 37,
	ID_VAR_PERSONALSB_AddictionIconPath                = 38,
	ID_VAR_PERSONALSB_AchiveIcon                       = 39,
	ID_VAR_PERSONALSB_AchiveName                       = 40,
	ID_VAR_PERSONALSB_AwardIcon                        = 41,
	ID_VAR_PERSONALSB_AwardCount                       = 42,
	ID_VAR_PERSONALSB_WinnerName                       = 43,
	ID_VAR_PERSONALSB_Uin                              = 44,
	ID_VAR_PERSONALSB_Name                             = 45,
	ID_VAR_PERSONALSB_KillInfo                         = 46,
	ID_VAR_PERSONALSB_Experience                       = 47,
	ID_VAR_PERSONALSB_InternetCafesPlus                = 48,
	ID_VAR_PERSONALSB_Award                            = 49,
	ID_VAR_PERSONALSB_RankValue                        = 50,
	ID_VAR_PERSONALSB_GameRankValue                    = 51,
	ID_VAR_PERSONALSB_RankPath                         = 52,
	ID_VAR_PERSONALSB_bMe                              = 53,
	ID_VAR_PERSONALSB_bSpector                         = 54,
	ID_VAR_PERSONALSB_bTeamAward                       = 55,
	ID_VAR_PERSONALSB_TeamAward1                       = 56,
	ID_VAR_PERSONALSB_TeamAward2                       = 57,
	ID_VAR_PERSONALSB_TeamAward3                       = 58,
	ID_VAR_PERSONALSB_bIsFriendArray                   = 59,
	ID_VAR_PERSONALSB_KILL_Uin                         = 60,
	ID_VAR_PERSONALSB_KILL_Name                        = 61,
	ID_VAR_PERSONALSB_KILL_RankValue                   = 62,
	ID_VAR_PERSONALSB_KILL_RankPath                    = 63,
	ID_VAR_PERSONALSB_KILL_Commonkill                  = 64,
	ID_VAR_PERSONALSB_KILL_ShotHeadKill                = 65,
	ID_VAR_PERSONALSB_KILL_GrenadesKill                = 66,
	ID_VAR_PERSONALSB_KILL_ClosedKill                  = 67,
	ID_VAR_PERSONALSB_BEKILL_Uin                       = 68,
	ID_VAR_PERSONALSB_BEKILL_Name                      = 69,
	ID_VAR_PERSONALSB_BEKILL_RankValue                 = 70,
	ID_VAR_PERSONALSB_BEKILL_RankPath                  = 71,
	ID_VAR_PERSONALSB_BEKILL_Commonkill                = 72,
	ID_VAR_PERSONALSB_BEKILL_ShotHeadKill              = 73,
	ID_VAR_PERSONALSB_BEKILL_GrenadesKill              = 74,
	ID_VAR_PERSONALSB_TASK_TaskName                    = 75,
	ID_VAR_PERSONALSB_TASK_TaskCurrent                 = 76,
	ID_VAR_PERSONALSB_TASK_TaskTarget                  = 77,
	ID_VAR_PERSONALSB_NETBAR_GOLD                      = 78,
	ID_VAR_PERSONALSB_NETBAR_SILVER                    = 79,
	ID_VAR_PERSONALSB_NETBAR_COPPER                    = 80,
	ID_VAR_PERSONALSB_ISHIDEBUTTON                     = 81,
	ID_VAR_PERSONALSB_ISTECHNICAL                      = 82,
	ID_VAR_PERSONALSB_MAX                              = 83
};*/

// Enum TGameGfxUI.GfxMovie_PersonalScoreboard.ScoreBoardFunId
/*enum ScoreBoardFunId
{
	ID_FUN_PERSONALSB_ClearPalyersData                 = 0,
	ID_FUN_PERSONALSB_ClearSelfAchiveData              = 1,
	ID_FUN_PERSONALSB_ClearSelfAwardData               = 2,
	ID_FUN_PERSONALSB_ReSetPlayerList                  = 3,
	ID_FUN_PERSONALSB_SetResultData                    = 4,
	ID_FUN_PERSONALSB_SetMyInfoData                    = 5,
	ID_FUN_PERSONALSB_SetTaskTips                      = 6,
	ID_FUN_PERSONALSB_SetAchieveData                   = 7,
	ID_FUN_PERSONALSB_SetAwardData                     = 8,
	ID_FUN_PERSONALSB_OpenRightClickMenu               = 9,
	ID_FUN_PERSONALSB_SetCardMC                        = 10,
	ID_FUN_PERSONALSB_ShowByType                       = 11,
	ID_FUN_PERSONALSB_SetPlayerKillData                = 12,
	ID_FUN_PERSONALSB_SetPlayerBeKillData              = 13,
	ID_FUN_PERSONALSB_SetGameTaskInfo                  = 14,
	ID_FUN_PERSONALSB_MAX                              = 15
};*/

// Enum TGameGfxUI.GfxMovie_PlayerComebackAwards.VariableID
/*enum VariableID
{
	ID_VAR_PlayerName                                  = 0,
	ID_VAR_LiBagContent                                = 1,
	ID_Var_MAX                                         = 2
};*/

// Enum TGameGfxUI.GfxMovie_PlayerComebackAwards.FunctionId
/*enum FunctionId
{
	ID_FUN_                                            = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_PlayerDetailInfo.MySelfInfoVarId
/*enum MySelfInfoVarId
{
	ID_PlayerInfo_VAR_PlayerName                       = 0,
	ID_PlayerInfo_VAR_PlayerRankPath                   = 1,
	ID_PlayerInfo_VAR_PlayerRankLevel                  = 2,
	ID_MYSELF_VAR_BSelf                                = 3,
	ID_MYSELF_VAR_PVP_KillTotal                        = 4,
	ID_MYSELF_VAR_PVP_KillRate                         = 5,
	ID_MYSELF_VAR_PVP_HeadShot                         = 6,
	ID_MYSELF_VAR_PVP_HeadShotRate                     = 7,
	ID_MYSELF_VAR_PVP_WinFail                          = 8,
	ID_MYSELF_VAR_PVP_WinFailRate                      = 9,
	ID_MYSELF_VAR_PVP_MeleeKill                        = 10,
	ID_MYSELF_VAR_PVP_GrenadeKill                      = 11,
	ID_MYSELF_VAR_PVP_ErrorKill                        = 12,
	ID_MYSELF_VAR_PVP_BreakLineRate                    = 13,
	ID_MYSELF_VAR_PVP_TDMArray                         = 14,
	ID_MYSELF_VAR_PVP_AMArray                          = 15,
	ID_MYSELF_VAR_PVP_BMArray                          = 16,
	ID_MYSELF_VAR_PVP_IMArray                          = 17,
	ID_MYSELF_VAR_PVP_CMArray                          = 18,
	ID_MYSELF_VAR_PVP_SPArray                          = 19,
	ID_MYSELF_VAR_PVP_PKArray                          = 20,
	ID_MYSELF_VAR_PVP_TPArray                          = 21,
	ID_MYSELF_VAR_PVP_TSDMArray                        = 22,
	ID_MYSELF_VAR_BIO_BioTotalTimes                    = 23,
	ID_MYSELF_VAR_BIO_BioHightScore                    = 24,
	ID_MYSELF_VAR_BIO_UseBioSourceTimes                = 25,
	ID_MYSELF_VAR_BIO_BioSourceKillTimes               = 26,
	ID_MYSELF_VAR_BIO_BioKillTimes                     = 27,
	ID_MYSELF_VAR_BIO_BioKillHeroTimes                 = 28,
	ID_MYSELF_VAR_BIO_BioWinTimes                      = 29,
	ID_MYSELF_VAR_BIO_HumanLiveTimes                   = 30,
	ID_MYSELF_VAR_BIO_HumanHurt                        = 31,
	ID_MYSELF_VAR_BIO_CommonKillTimes                  = 32,
	ID_MYSELF_VAR_BIO_HumanHeroKillTimes               = 33,
	ID_MYSELF_VAR_BIO_HumanHeroTimes                   = 34,
	ID_MYSELF_VAR_BIO_HumanWinTimes                    = 35,
	ID_MYSELF_VAR_MDM_DataArray                        = 36,
	ID_MYSELF_VAR_PVE_OrdinaryArray                    = 37,
	ID_MYSELF_VAR_PVE_DifficultArray                   = 38,
	ID_MYSELF_VAR_PVE_HeroArray                        = 39,
	ID_MYSELF_VAR_PVE_ModeNameArray                    = 40,
	ID_MYSELF_VAR_PVE_MapNameArray                     = 41,
	ID_Compare_VAR_PVP_PanelVisible                    = 42,
	ID_Compare_VAR_PVP_PlayerNickName1                 = 43,
	ID_Compare_VAR_PVP_PlayerNickName2                 = 44,
	ID_Compare_VAR_PVP_Data1                           = 45,
	ID_Compare_VAR_PVP_Data2                           = 46,
	ID_Compare_VAR_PVP_bIsData1_Larger_Data2           = 47,
	ID_PlayerInfo_VAR_Achieve_CompletedTotal           = 48,
	ID_PlayerInfo_VAR_Achieve_GameEventExp             = 49,
	ID_PlayerInfo_VAR_Achieve_CompletedScore           = 50,
	ID_PlayerInfo_VAR_Achieve_ArrayData                = 51,
	ID_PlayerInfo_VAR_Achieve_ProgressData             = 52,
	ID_PlayerInfo_Var_UILabel_PageNumber_Text          = 53,
	ID_PlayerInfo_Var_PageNum_TextField_Text           = 54,
	ID_Card_VAR_ShowTeamNameCheckBox                   = 55,
	ID_Card_VAR_ShowPMLevelCheckBox                    = 56,
	ID_Card_VAR_ShowTeamNameCheckBoxVisible            = 57,
	ID_Card_VAR_ShowPMLevelCheckBoxVisible             = 58,
	ID_MYSELF_VAR_PPZ_TotalGameTimes                   = 59,
	ID_MYSELF_VAR_PPZ_TotalScore                       = 60,
	ID_MYSELF_VAR_PPZ_WinTimes                         = 61,
	ID_MYSELF_VAR_PPZ_LoseTimes                        = 62,
	ID_MYSELF_VAR_PPZ_KillTimesAsHuman                 = 63,
	ID_MYSELF_VAR_PPZ_KilledTimesAsHuman               = 64,
	ID_MYSELF_VAR_PPZ_TopScoreAsHuman                  = 65,
	ID_MYSELF_VAR_PPZ_GetResourceTimesAsHuman          = 66,
	ID_MYSELF_VAR_PPZ_AssistHumanTimesAsHuman          = 67,
	ID_MYSELF_VAR_PPZ_KillAIZombieTimesAsHuman         = 68,
	ID_MYSELF_VAR_PPZ_RescueHumanTimesAsHuman          = 69,
	ID_MYSELF_VAR_PPZ_KillTimesAsZombie                = 70,
	ID_MYSELF_VAR_PPZ_KilledTimesAsZombie              = 71,
	ID_MYSELF_VAR_PPZ_TopScoreAsZombie                 = 72,
	ID_MYSELF_VAR_PPZ_ZombieNameArray                  = 73,
	ID_MYSELF_VAR_PPZ_KillTimesAsZombieArray           = 74,
	ID_MYSELF_VAR_PPZ_KilledTimesAsZombieArray         = 75,
	ID_MYSELF_VAR_PPZ_SkillKillTimesArray              = 76,
	ID_MYSELF_VAR_PPZ_CommonKillTimesArray             = 77,
	ID_MYSELF_VAR_PPZ_AssistTimesArray                 = 78,
	ID_MYSELF_VAR_PPZ_TopDamageArray                   = 79,
	ID_MYSELF_VAR_PZ2_TotalGameTimes                   = 80,
	ID_MYSELF_VAR_PZ2_TotalScore                       = 81,
	ID_MYSELF_VAR_PZ2_WinTimes                         = 82,
	ID_MYSELF_VAR_PZ2_LoseTimes                        = 83,
	ID_MYSELF_VAR_PZ2_KillTimesAsHuman                 = 84,
	ID_MYSELF_VAR_PZ2_KilledTimesAsHuman               = 85,
	ID_MYSELF_VAR_PZ2_TopScoreAsHuman                  = 86,
	ID_MYSELF_VAR_PZ2_AssistHumanTimesAsHuman          = 87,
	ID_MYSELF_VAR_PZ2_RescueHumanTimesAsHuman          = 88,
	ID_MYSELF_VAR_PZ2_KillTimesAsZombie                = 89,
	ID_MYSELF_VAR_PZ2_KilledTimesAsZombie              = 90,
	ID_MYSELF_VAR_PZ2_TopScoreAsZombie                 = 91,
	ID_MYSELF_VAR_PZ2_ZombieNameArray                  = 92,
	ID_MYSELF_VAR_PZ2_KillTimesAsZombieArray           = 93,
	ID_MYSELF_VAR_PZ2_KilledTimesAsZombieArray         = 94,
	ID_MYSELF_VAR_PZ2_SkillKillTimesArray              = 95,
	ID_MYSELF_VAR_PZ2_CommonKillTimesArray             = 96,
	ID_MYSELF_VAR_PZ2_AssistTimesArray                 = 97,
	ID_MYSELF_VAR_PZ2_TopDamageArray                   = 98,
	ID_MYSELF_VAR_SV3_KillTimesArray                   = 99,
	ID_MYSELF_VAR_SV3_WinTimesArray                    = 100,
	ID_MYSELF_VAR_SV3_TotalGameTimesArray              = 101,
	ID_MYSELF_VAR_SV3_TopScoreArray                    = 102,
	ID_MYSELF_VAR_SV3_ForceQuitTimesArray              = 103,
	ID_MAX                                             = 104
};*/

// Enum TGameGfxUI.GfxMovie_PlayerDetailInfo.MySelfInfoFunId
/*enum MySelfInfoFunId
{
	ID_MYSELF_FUN_UpdateButtonState                    = 0,
	ID_MYSELF_FUN_PVP_ClearData                        = 1,
	ID_MYSELF_FUN_PVP_UpdateDataStatistic              = 2,
	ID_MYSELF_FUN_PVP_UpdateDataTotal                  = 3,
	ID_MYSELF_FUN_PVE_ClearData                        = 4,
	ID_MYSELF_FUN_PVE_UpdateData                       = 5,
	ID_MYSELF_FUN_PVE_SetModeInfo                      = 6,
	ID_Compare_FUN_PVP_ClearData                       = 7,
	ID_Compare_FUN_PVP_UpdateData                      = 8,
	ID_PlayerInfo_FUN_Achieve_ClearData                = 9,
	ID_PlayerInfo_FUN_Achieve_UpdateData               = 10,
	ID_PlayerInfo_FUN_UpdatePlayerInfoMC               = 11,
	ID_PlayerInfo_FUN_ClearCardData                    = 12,
	ID_PlayerInfo_FUN_PM_ClearData                     = 13,
	ID_PlayerInfo_FUN_PM_UpdateSeasonInfo              = 14,
	ID_FightMode_FUN_UpdateBioData                     = 15,
	ID_FightMode_FUN_UpdateMDMData                     = 16,
	ID_MYSELF_FUN_PPZ_ClearArrayData                   = 17,
	ID_MYSELF_FUN_PZ2_ClearArrayData                   = 18,
	ID_MYSELF_FUN_SV3_ClearArrayData                   = 19,
	ID_MYSELF_FUN_PPZ_updateTotalUI                    = 20,
	ID_MYSELF_FUN_PZ2_updateTotalUI                    = 21,
	ID_MYSELF_FUN_SV3_updateTotalUI                    = 22,
	ID_MAX                                             = 23
};*/

// Enum TGameGfxUI.GfxMovie_PlayerExp.PlayerExpFunId
/*enum PlayerExpFunId
{
	ID_FUN_PE_UpdateName                               = 0,
	ID_FUN_PE_UpdateTeamBadgeInfo                      = 1,
	ID_FUN_PE_UpdateRankInfo                           = 2,
	ID_FUN_PE_UpdateAchiCardInfo                       = 3,
	ID_FUN_PE_SetPlayerDateInfo                        = 4,
	ID_FUN_PE_SetCardMC                                = 5,
	ID_FUN_PE_CloseThis                                = 6,
	ID_FUN_PE_MAX                                      = 7
};*/

// Enum TGameGfxUI.GfxMovie_PMAnalysis.PMAnalysisMovieVar
/*enum PMAnalysisMovieVar
{
	ID_PMAnalysis_VAR_GridData                         = 0,
	ID_PMAnalysis_VAR_WinData                          = 1,
	ID_PMAnalysis_VAR_FailedData                       = 2,
	ID_PMAnalysis_VAR_KillData                         = 3,
	ID_PMAnalysis_VAR_DeadData                         = 4,
	ID_PMAnalysis_VAR_MatchRecordMax                   = 5,
	ID_PMAnalysis_VAR_bFleeInMatch                     = 6,
	ID_PMAnalysis_VAR_GrenadeUseTimes                  = 7,
	ID_PMAnalysis_VAR_SmokeUseTimes                    = 8,
	ID_PMAnalysis_VAR_FlashUseTimes                    = 9,
	ID_PMAnalysis_VAR_DefendRate                       = 10,
	ID_PMAnalysis_VAR_DamageReduce                     = 11,
	ID_PMAnalysis_VAR_OtherWeaponPaths                 = 12,
	ID_PMAnalysis_VAR_HeadShotRate                     = 13,
	ID_PMAnalysis_VAR_ShotHitRate                      = 14,
	ID_PMAnalysis_VAR_ShotBulletNumber                 = 15,
	ID_PMAnalysis_VAR_DamageValue                      = 16,
	ID_PMAnalysis_VAR_MainWeaponPaths                  = 17,
	ID_PMAnalysis_VAR_BasicData                        = 18,
	ID_PMAnalysis_VAR_BasicScore                       = 19,
	ID_PMAnalysis_VAR_SpecialAchieve                   = 20,
	ID_PMAnalysis_VAR_CurGetScore                      = 21,
	ID_PMAnalysis_VAR_CurRank                          = 22,
	ID_PMAnalysis_VAR_CurFightScore                    = 23,
	ID_PMAnalysis_VAR_CurAddFightScore                 = 24,
	ID_PMAnalysis_VAR_MatchLevelName                   = 25,
	ID_PMAnalysis_VAR_MatchTime                        = 26,
	ID_PMAnalysis_VAR_MatchModeName                    = 27,
	ID_PMAnalysis_VAR_MatchMapName                     = 28,
	ID_PMAnalysis_VAR_KillInfo                         = 29,
	ID_PMAnalysis_VAR_ShowEachLoginSelected            = 30,
	ID_PMAnalysis_VAR_MAX                              = 31
};*/

// Enum TGameGfxUI.GfxMovie_PMAnalysis.PMAnalysisMovieFUN
/*enum PMAnalysisMovieFUN
{
	ID_PMAnalysis_FUN_OnClearGridData                  = 0,
	ID_PMAnalysis_FUN_OnClearAllData                   = 1,
	ID_PMAnalysis_FUN_OnSetAllData                     = 2,
	ID_PMAnalysis_FUN_OnShowStar                       = 3,
	ID_PMAnalysis_FUN_SetGrid                          = 4,
	ID_PMAnalysis_FUN_SetCardInfo                      = 5,
	ID_PMAnalysis_FUN_MAX                              = 6
};*/

// Enum TGameGfxUI.GfxMovie_PVECryptWeaponBoxDisplay.VarPathID
/*enum VarPathID
{
	ID_Var_Path                                        = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_PVECryptWeaponBoxDisplay.FunPathID
/*enum FunPathID
{
	ID_Fun_Path                                        = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_PVEEncouragement.CARD_TYPE
/*enum CARD_TYPE
{
	TYPE_SV                                            = 0,
	TYPE_IF                                            = 1,
	TYPE_LD                                            = 2,
	TYPE_ATD                                           = 3,
	TYPE_MAX                                           = 4
};*/

// Enum TGameGfxUI.GfxMovie_PVEEncouragement.EncouragementVar
/*enum EncouragementVar
{
	ID_Encouragement_ThingsLevels                      = 0,
	ID_Encouragement_ThingsScore                       = 1,
	ID_Encouragement_ThingsLevelsSource                = 2,
	ID_Encouragement_ThingsArray                       = 3,
	ID_Encouragement_ThingsNameArray                   = 4,
	ID_Encouragement_FG_SVCurrentTickets               = 5,
	ID_Encouragement_FG_SFCurrentTickets               = 6,
	ID_Encouragement_FG_LDCurrentTickets               = 7,
	ID_Encouragement_FG_ATDCurrentTickets              = 8,
	ID_Encouragement_Table3                            = 9,
	ID_Encouragement_Table4                            = 10,
	ID_Encouragement_MAX                               = 11
};*/

// Enum TGameGfxUI.GfxMovie_PVEEncouragement.EncouragementFunc
/*enum EncouragementFunc
{
	ID_Encouragement_FUN_ClearModeData                 = 0,
	ID_Encouragement_FUN_OnSetThingsList               = 1,
	ID_Encouragement_FUN_SetPVEFinishGameData          = 2,
	ID_Encouragement_FUN_UpdateCardCount               = 3,
	ID_Encouragement_FUN_MAX                           = 4
};*/

// Enum TGameGfxUI.GfxMovie_PVEScoreboard.PVEScoreBoardVarId
/*enum PVEScoreBoardVarId
{
	ID_VAR_PVESB_RankLevelMax                          = 0,
	ID_VAR_PVESB_MatchName                             = 1,
	ID_VAR_PVESB_MapName                               = 2,
	ID_VAR_PVESB_SubModeName                           = 3,
	ID_VAR_PVESB_bIsWin                                = 4,
	ID_VAR_PVESB_TaskState                             = 5,
	ID_VAR_PVESB_ResultText                            = 6,
	ID_VAR_PVESB_EXPProgress_Now                       = 7,
	ID_VAR_PVESB_SelfRank                              = 8,
	ID_VAR_PVESB_RankIcon                              = 9,
	ID_VAR_PVESB_NextRankIcon                          = 10,
	ID_VAR_PVESB_Exp_Base                              = 11,
	ID_VAR_PVESB_Exp_Special                           = 12,
	ID_VAR_PVESB_Exp_TeamAdd                           = 13,
	ID_VAR_PVESB_Exp_NetBarAdd                         = 14,
	ID_VAR_PVESB_Exp_ToolsAdd                          = 15,
	ID_VAR_PVESB_Exp_ClanTeamAdd                       = 16,
	ID_VAR_PVESB_Exp_VIPAdd                            = 17,
	ID_VAR_PVESB_Exp_ActvAdd                           = 18,
	ID_VAR_PVESB_Exp_SpecAdd                           = 19,
	ID_VAR_PVESB_Exp_Pendant                           = 20,
	ID_VAR_PVESB_SelfKill                              = 21,
	ID_VAR_PVESB_SelfKilledl                           = 22,
	ID_VAR_PVESB_PlayTime                              = 23,
	ID_VAR_PVESB_GetGP                                 = 24,
	ID_VAR_PVESB_GP_Special                            = 25,
	ID_VAR_PVESB_GP_TeamAdd                            = 26,
	ID_VAR_PVESB_GP_NetBarAdd                          = 27,
	ID_VAR_PVESB_GP_ToolsAdd                           = 28,
	ID_VAR_PVESB_GP_CommonAdd                          = 29,
	ID_VAR_PVESB_GP_ActvAdd                            = 30,
	ID_VAR_PVESB_GP_Pendant                            = 31,
	ID_VAR_PVESB_AddictionIconPath                     = 32,
	ID_VAR_PVESB_AchiveIcon                            = 33,
	ID_VAR_PVESB_AchiveName                            = 34,
	ID_VAR_PVESB_GetScore                              = 35,
	ID_VAR_PVESB_PassScoreArray                        = 36,
	ID_VAR_PVESB_GameTime                              = 37,
	ID_VAR_PVESB_DeathCount                            = 38,
	ID_VAR_PVESB_KillCount                             = 39,
	ID_VAR_PVESB_KillCount1                            = 40,
	ID_VAR_PVESB_KillCount2                            = 41,
	ID_VAR_PVESB_KillCount3                            = 42,
	ID_VAR_PVESB_KillCount4                            = 43,
	ID_VAR_PVESB_KillCount5                            = 44,
	ID_VAR_PVESB_BossHurt                              = 45,
	ID_VAR_PVESB_BossKill                              = 46,
	ID_VAR_PVESB_BossBeKill                            = 47,
	ID_VAR_PVESB_Uin                                   = 48,
	ID_VAR_PVESB_Name                                  = 49,
	ID_VAR_PVESB_Kill                                  = 50,
	ID_VAR_PVESB_Killed                                = 51,
	ID_VAR_PVESB_Experience                            = 52,
	ID_VAR_PVESB_InternetCafesPlus                     = 53,
	ID_VAR_PVESB_Award                                 = 54,
	ID_VAR_PVESB_RankValue                             = 55,
	ID_VAR_PVESB_RankPath                              = 56,
	ID_VAR_PVESB_bMe                                   = 57,
	ID_VAR_PVESB_Score                                 = 58,
	ID_VAR_PVESB_bSpector                              = 59,
	ID_VAR_PVESB_bTeamAward                            = 60,
	ID_VAR_PVESB_TeamAward1                            = 61,
	ID_VAR_PVESB_TeamAward2                            = 62,
	ID_VAR_PVESB_TeamAward3                            = 63,
	ID_VAR_PVESB_bIsFriendArray                        = 64,
	ID_VAR_PVESB_bHaseScores                           = 65,
	ID_VAR_PVESB_PVERank_TopRank                       = 66,
	ID_VAR_PVESB_PVERank_Name                          = 67,
	ID_VAR_PVESB_PVERank_Score                         = 68,
	ID_VAR_PVESB_PVERank_Kill                          = 69,
	ID_VAR_PVESB_PVERank_Difficult                     = 70,
	ID_VAR_PVESB_PVERank_Uin                           = 71,
	ID_VAR_PVESB_PVERank_Rank                          = 72,
	ID_VAR_PVESB_PVERank_RankPath                      = 73,
	ID_VAR_PVESB_TASK_TaskName                         = 74,
	ID_VAR_PVESB_TASK_TaskCurrent                      = 75,
	ID_VAR_PVESB_TASK_TaskTarget                       = 76,
	ID_VAR_PVESB_NETBAR_GOLD                           = 77,
	ID_VAR_PVESB_NETBAR_SILVER                         = 78,
	ID_VAR_PVESB_NETBAR_COPPER                         = 79,
	ID_VAR_PVESB_ISHIDEBUTTON                          = 80,
	ID_VAR_PVESB_MAX                                   = 81
};*/

// Enum TGameGfxUI.GfxMovie_PVEScoreboard.ScoreBoardFunId
/*enum ScoreBoardFunId
{
	ID_FUN_PVESB_ClearPalyersData                      = 0,
	ID_FUN_PVESB_ClearSelfAchiveData                   = 1,
	ID_FUN_PVESB_ReSetPlayerList                       = 2,
	ID_FUN_PVESB_SetResultData                         = 3,
	ID_FUN_PVESB_SetMyInfoData                         = 4,
	ID_FUN_PVESB_SetTaskTips                           = 5,
	ID_FUN_PVESB_SetAchieveData                        = 6,
	ID_FUN_PVESB_OpenRightClickMenu                    = 7,
	ID_FUN_PVESB_SetCardMC                             = 8,
	ID_FUN_PVESB_ClearPVERankData                      = 9,
	ID_FUN_PVESB_SetPVERankList                        = 10,
	ID_FUN_PVESB_ShowByType                            = 11,
	ID_FUN_PVESB_SetGameTaskInfo                       = 12,
	ID_FUN_PVESB_MAX                                   = 13
};*/

// Enum TGameGfxUI.GfxMovie_PVETopRank.PVETopRankFunId
/*enum PVETopRankFunId
{
	ID_VAR_PTRANK_TopRank                              = 0,
	ID_VAR_PTRANK_Name                                 = 1,
	ID_VAR_PTRANK_Score                                = 2,
	ID_VAR_PTRANK_Kill                                 = 3,
	ID_VAR_PTRANK_Difficult                            = 4,
	ID_VAR_PTRANK_Uin                                  = 5,
	ID_VAR_PTRANK_Rank                                 = 6,
	ID_VAR_PTRANK_RankPath                             = 7,
	ID_VAR_PTRANK_PVEDifficultName                     = 8,
	ID_VAR_PTRANK_PVEDifficultSelectedIndex            = 9,
	ID_VAR_PTRANK_MAX                                  = 10
};*/

// Enum TGameGfxUI.GfxMovie_PVETopRank.PVETopRankVariableId
/*enum PVETopRankVariableId
{
	ID_FUN_PTRANK_ClearPVERankData                     = 0,
	ID_FUN_PTRANK_SetPVERankList                       = 1,
	ID_FUN_PTRANK_ClearPVEDifficultName                = 2,
	ID_FUN_PTRANK_SetPVEDifficultName                  = 3,
	ID_FUN_PTRANK_MAX                                  = 4
};*/

// Enum TGameGfxUI.GfxMovie_QTalkMaskPanel.QTMaskVariableId
/*enum QTMaskVariableId
{
	ID_QTMASK_VAR_QTALKUSERNAMES                       = 0,
	ID_QTMASK_VAR_QTALKUSERUINS                        = 1,
	ID_QTMASK_VAR_QTALKUSERSTATUS                      = 2,
	ID_QTMASK_VAR_MAX                                  = 3
};*/

// Enum TGameGfxUI.GfxMovie_QTalkMaskPanel.QTMaskFunId
/*enum QTMaskFunId
{
	ID_QTMASK_FUN_UPDATEUSERLIST                       = 0,
	ID_QTMASK_FUN_SYNCSTATUS                           = 1,
	ID_QTMASK_FUN_UPDATEUSERSTATUS                     = 2,
	ID_QTMASK_FUN_MAX                                  = 3
};*/

// Enum TGameGfxUI.GfxMovie_QTalkPanel.QuitGameVariableId
/*enum QuitGameVariableId
{
	ID_QGAME_VAR_ROOMNAME                              = 0,
	ID_QGAME_VAR_ROOMID                                = 1,
	ID_QGAME_VAR_ROOMSTATUS                            = 2,
	ID_QGAME_VAR_ROOMSTATUS_TEXT                       = 3,
	ID_QGAME_VAR_ROOMID_TEXT                           = 4,
	ID_QGAME_VAR_ROOMNAME_TEXT                         = 5,
	ID_QGAME_VAR_ENTERROOMID_VISIBLE                   = 6,
	ID_QGAME_VAR_MAX                                   = 7
};*/

// Enum TGameGfxUI.GfxMovie_QTalkPanel.QuitGameFunId
/*enum QuitGameFunId
{
	ID_QGAME_FUN_OnShowStatusBar                       = 0,
	ID_QGAME_FUN_CHATINPUTTEXT                         = 1,
	ID_QGAME_FUN_CHANGEMASKPHONE                       = 2,
	ID_QGAME_FUN_CHANGEMASKMIC                         = 3,
	ID_QGAME_FUN_ReCallKeyEnter                        = 4,
	ID_QGAME_FUN_SetMovieLocation                      = 5,
	ID_QGAME_FUN_MAX                                   = 6
};*/

// Enum TGameGfxUI.GfxMovie_QuickGame.QuickGameVariableId
/*enum QuickGameVariableId
{
	ID_VAR_QUICKGAME_MODE                              = 0,
	ID_VAR_QUICKGAME_MAP                               = 1,
	ID_VAR_QUICKGAME_SPECIALICONINDEX                  = 2,
	ID_VAR_QUICKGAME_MODES                             = 3,
	ID_VAR_QUICKGAME_MAPS                              = 4,
	ID_VAR_QUICKGAME_SPECIALICONINDEXS                 = 5,
	ID_VAR_QUICKGAME_MODEMAPS                          = 6,
	ID_VAR_QUICKGAME_MODESPECIALICONINDEXS             = 7,
	ID_VAR_QUICKGAME_MAX                               = 8
};*/

// Enum TGameGfxUI.GfxMovie_QuickGame.QuickGameFunctionId
/*enum QuickGameFunctionId
{
	ID_FUN_CLEAR_QUICKGAME                             = 0,
	ID_FUNC_UPDATE_QUICKGAME                           = 1,
	ID_FUNC_SET_MODEMAPS                               = 2,
	ID_FUNC_SET_SPECIALINDEXS                          = 3,
	ID_FUN_SELECT_CloseShotKeyQuickGame                = 4,
	ID_FUN_SELECT_ReSetShotKeyQuickGame                = 5,
	ID_MAX                                             = 6
};*/

// Enum TGameGfxUI.GfxMovie_QuitGame.QuitGameVariableId
/*enum QuitGameVariableId
{
	ID_QGAME_VAR_GetEXP                                = 0,
	ID_QGAME_VAR_GetGP                                 = 1,
	ID_QGAME_VAR_GetMPValue                            = 2,
	ID_QGAME_VAR_WinDrawLose                           = 3,
	ID_QGAME_VAR_KillKilled                            = 4,
	ID_QGAME_VAR_KillKilledRate                        = 5,
	ID_QGAME_VAR_HeadShotTime                          = 6,
	ID_QGAME_VAR_KillCyborgCount                       = 7,
	ID_QGAME_VAR_PVEScore                              = 8,
	ID_QGAME_VAR_PVEGameTimes                          = 9,
	ID_QGAME_VAR_PVEWinTimes                           = 10,
	ID_QGAME_VAR_PMGameTimes                           = 11,
	ID_QGAME_VAR_PMFightScore                          = 12,
	ID_QGAME_VAR_PMPlayGameTimes                       = 13,
	ID_QGAME_VAR_PMRankIconPath                        = 14,
	ID_QGAME_VAR_PMMaxLevel                            = 15,
	ID_QGAME_VAR_PVMGameTimes                          = 16,
	ID_QGAME_VAR_PVMMechScore                          = 17,
	ID_QGAME_VAR_PVMCrazyScore                         = 18,
	ID_QGAME_VAR_PVMTankScore                          = 19,
	ID_QGAME_VAR_PVMBioScore                           = 20,
	ID_QGAME_VAR_UpLevelTipVisible                     = 21,
	ID_QGAME_VAR_PlayGameTimes                         = 22,
	ID_QGAME_VAR_RankName                              = 23,
	ID_QGAME_VAR_RankIconPath                          = 24,
	ID_QGAME_VAR_RankValue                             = 25,
	ID_QGAME_VAR_AchieveIconPaths                      = 26,
	ID_QGAME_VAR_FinishedCount                         = 27,
	ID_QGAME_VAR_WIPCount                              = 28,
	ID_QGAME_VAR_AcceptableCount                       = 29,
	ID_QGAME_VAR_ExpectedExp                           = 30,
	ID_QGAME_VAR_ExpectedGP                            = 31,
	ID_QGAME_VAR_ExpectedTP                            = 32,
	ID_QGAME_VAR_UnFinishCount                         = 33,
	ID_QGAME_VAR_UnFinishedTaskExpCount                = 34,
	ID_QGAME_VAR_UnFinishedGPCount                     = 35,
	ID_QGAME_VAR_ActivityIconArray                     = 36,
	ID_QGAME_VAR_ActivityTipsArray                     = 37,
	ID_QGAME_VAR_MAX                                   = 38
};*/

// Enum TGameGfxUI.GfxMovie_QuitGame.QuitGameFunId
/*enum QuitGameFunId
{
	ID_QGAME_FUN_UpdateMatchData                       = 0,
	ID_QGAME_FUN_UpdateRankData                        = 1,
	ID_QGAME_FUN_ClearAchieveData                      = 2,
	ID_QGAME_FUN_UpdateAchieveData                     = 3,
	ID_QGAME_FUN_UpdateTaskData                        = 4,
	ID_QGAME_FUN_CloseShotKeyQuickGame                 = 5,
	ID_QGAME_FUN_UpdatePMData                          = 6,
	ID_QGAME_FUN_MAX                                   = 7
};*/

// Enum TGameGfxUI.GfxMovie_QuitOption.OptionOptionBtnEnableState
/*enum OptionOptionBtnEnableState
{
	OOBES_FriendWhisper                                = 0,
	OOBES_SystemSettings                               = 1,
	OOBES_KickVote                                     = 2,
	OOBES_Complaint                                    = 3,
	OOBES_ShieldChatMessage                            = 4,
	OOBES_ShieldQT                                     = 5,
	OOBES_QuitMatch                                    = 6,
	OOBES_Cancel                                       = 7,
	OOBES_MAX                                          = 8
};*/

// Enum TGameGfxUI.GfxMovie_QuitOption.VariableID
/*enum VariableID
{
	ID_Var_DisabledReasonString                        = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_QuitOption.FunctionId
/*enum FunctionId
{
	ID_Fun_SetMenuItemState                            = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_RankList.VariableID
/*enum VariableID
{
	ID_Var_RankListTreeItemsNameArray                  = 0,
	ID_Var_RankListTreeItemsPTypeArray                 = 1,
	ID_Var_RankListTreeItemsCTypeArray                 = 2,
	ID_Var_RankListTreeItemsDateArray                  = 3,
	ID_Var_CurrentRankListTitle                        = 4,
	ID_Var_RankListListTitlesArray                     = 5,
	ID_Var_RankListListItemsColumn1Array               = 6,
	ID_Var_RankListListItemsUinArray                   = 7,
	ID_Var_RankListListItemsColumn2Array               = 8,
	ID_Var_RankListListItemsColumn3Array               = 9,
	ID_Var_RankListListItemsColumn4Array               = 10,
	ID_Var_RankListListItemsColumn5Array               = 11,
	ID_Var_RankListListItemsColumn6Array               = 12,
	ID_Var_RankListListItemsColumn7Array               = 13,
	ID_Var_RankListListItemsColumn8Array               = 14,
	ID_Var_RankListMyDataDesc                          = 15,
	ID_Var_RankListMyData                              = 16,
	ID_Var_RankListLeadThanData                        = 17,
	ID_Var_RankListHasAward                            = 18,
	ID_Var_RankListbShowSelfInfo                       = 19,
	ID_Var_RankListbGetAwardBtnDisable                 = 20,
	ID_Var_RankListMyRankPath                          = 21,
	ID_Var_RankListLogString                           = 22,
	ID_Var_RankListCurrentSelectUin                    = 23,
	ID_Var_RankListCurrentSelectNickName               = 24,
	ID_Var_RankListCurrentSelectClanName               = 25,
	ID_Var_RankListCurrentTipString                    = 26,
	ID_Var_MAX                                         = 27
};*/

// Enum TGameGfxUI.GfxMovie_RankList.FunctionId
/*enum FunctionId
{
	ID_Fun_UpdateListByTypePTypeDate                   = 0,
	ID_Fun_UpdateListTitleUI                           = 1,
	ID_Fun_UpdateListDataUI                            = 2,
	ID_Fun_UpdatePlayerDataUI                          = 3,
	ID_Fun_ResponseShowRightMenu                       = 4,
	ID_Fun_MAX                                         = 5
};*/

// Enum TGameGfxUI.GfxMovie_RecommandWeapon.RecommandWeaponVarId
/*enum RecommandWeaponVarId
{
	ID_VAR_RECOMMANDWEAPON_WeaponNameArray             = 0,
	ID_VAR_RECOMMANDWEAPON_WeaponIconPathArray         = 1,
	ID_VAR_RECOMMANDWEAPON_UserPercentageArray         = 2,
	ID_VAR_RECOMMANDWEAPON_WeaponPriceArray            = 3,
	ID_VAR_RECOMMANDWEAPON_WeaponPriceDayTextArray     = 4,
	ID_VAR_RECOMMANDWEAPON_BuyButtonTypeArray          = 5,
	ID_VAR_RECOMMANDWEAPON_InfoNameArray               = 6,
	ID_VAR_RECOMMANDWEAPON_InfoValueBasicArray         = 7,
	ID_VAR_RECOMMANDWEAPON_InfoValueExtendArray        = 8,
	ID_VAR_RECOMMANDWEAPON_InfoValueMaxArray           = 9,
	ID_VAR_RECOMMANDWEAPON_MAX                         = 10
};*/

// Enum TGameGfxUI.GfxMovie_RecommandWeapon.RecommandWeaponFunId
/*enum RecommandWeaponFunId
{
	ID_FUN_RECOMMANDWEAPON_UpdateWeaponList            = 0,
	ID_FUN_RECOMMANDWEAPON_ClearWeaponList             = 1,
	ID_FUN_RECOMMANDWEAPON_UpdateInformationPanelList  = 2,
	ID_FUN_RECOMMANDWEAPON_HighlightSelectedWeapon     = 3,
	ID_FUN_RECOMMANDWEAPON_ClearInformationPanelList   = 4,
	ID_FUN_RECOMMANDWEAPON_ChangeInformationPanelText  = 5,
	ID_FUN_RECOMMANDWEAPON_MAX                         = 6
};*/

// Enum TGameGfxUI.GfxMovie_RecommandWeapon.InformationType
/*enum InformationType
{
	PRECISIONPUSH_ENHANCING_NULL                       = 0,
	PRECISIONPUSH_ENHANCING_HEADSHOT                   = 1,
	PRECISIONPUSH_ENHANCING_KD                         = 2,
	PRECISIONPUSH_ENHANCING_TDMKILL                    = 3,
	PRECISIONPUSH_ENHANCING_BMKILL                     = 4,
	PRECISIONPUSH_ENHANCING_MAX                        = 5
};*/

// Enum TGameGfxUI.GfxMovie_RecommandWeapon.BuyType
/*enum BuyType
{
	BUY_NORMAL                                         = 0,
	Buy_MAX                                            = 1
};*/

// Enum TGameGfxUI.GfxMovie_RecordVideo.SaveVideoVarId
/*enum SaveVideoVarId
{
	ID_VAR_VideoFilePath                               = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_Respawn.VariableID
/*enum VariableID
{
	ID_Var_TotalTime                                   = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_Respawn.FunctionId
/*enum FunctionId
{
	ID_Fun_Abort                                       = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_RoomSetting.RoomSettingVariableId
/*enum RoomSettingVariableId
{
	ID_VAR_ROOMSET_MapSelectIndex                      = 0,
	ID_VAR_ROOMSET_SpeculatorRowCount                  = 1,
	ID_VAR_ROOMSET_RuleSelectIndex                     = 2,
	ID_VAR_ROOMSET_RuleValueSelectIndex                = 3,
	ID_VAR_ROOMSET_SpeculatorCountDisable              = 4,
	ID_VAR_ROOMSET_SpeculatableDisable                 = 5,
	ID_VAR_ROOMSET_SpeculatableSelect                  = 6,
	ID_VAR_ROOMSET_SpeculatorCountSelectIndex          = 7,
	ID_VAR_ROOMSET_RoomName                            = 8,
	ID_VAR_ROOMSET_Password                            = 9,
	ID_VAR_ROOMSET_ThrowableSelect                     = 10,
	ID_VAR_ROOMSET_DefendableSelect                    = 11,
	ID_VAR_ROOMSET_ShotHeadbleSelect                   = 12,
	ID_VAR_ROOMSET_RuleDisable                         = 13,
	ID_VAR_ROOMSET_SubRuleDisable                      = 14,
	ID_VAR_ROOMSET_RuleRows                            = 15,
	ID_VAR_ROOMSET_SubRuleRows                         = 16,
	ID_VAR_ROOMSET_MapRows                             = 17,
	ID_VAR_ROOMSET_RuleTypeArray                       = 18,
	ID_VAR_ROOMSET_RuleVauleArray                      = 19,
	ID_VAR_ROOMSET_MapArray                            = 20,
	ID_VAR_ROOMSET_ObNumberArray                       = 21,
	ID_VAR_ROOMSET_MAX                                 = 22
};*/

// Enum TGameGfxUI.GfxMovie_RoomSetting.RoomSettingFunIds
/*enum RoomSettingFunIds
{
	ID_FUN_ROOMSET_ClearMap                            = 0,
	ID_FUN_ROOMSET_ClearRule                           = 1,
	ID_FUN_ROOMSET_ClearObNumber                       = 2,
	ID_FUN_ROOMSET_ClearSubRule                        = 3,
	ID_FUN_ROOMSET_SetMapData                          = 4,
	ID_FUN_ROOMSET_SetRuleTypeData                     = 5,
	ID_FUN_ROOMSET_SetRuleValueData                    = 6,
	ID_FUN_ROOMSET_SetObNumberData                     = 7,
	ID_FUN_ROOMSET_ShowErrorTip                        = 8,
	ID_FUN_ROOMSET_MAX                                 = 9
};*/

// Enum TGameGfxUI.GfxMovie_SaveVideo.SaveVideoVarId
/*enum SaveVideoVarId
{
	ID_VAR_VideoName                                   = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_Scoreboard.ScoreBoardVarId
/*enum ScoreBoardVarId
{
	ID_VAR_SB_bIsHasScores                             = 0,
	ID_VAR_SB_bIsWinPoint                              = 1,
	ID_VAR_SB_RankLevelMax                             = 2,
	ID_VAR_SB_MatchName                                = 3,
	ID_VAR_SB_MapName                                  = 4,
	ID_VAR_SB_Team                                     = 5,
	ID_VAR_SB_GSDU_Score                               = 6,
	ID_VAR_SB_REBEL_Score                              = 7,
	ID_VAR_SB_TaskState                                = 8,
	ID_VAR_SB_MatchResult                              = 9,
	ID_VAR_SB_MVPDescription                           = 10,
	ID_VAR_SB_ACEDescription                           = 11,
	ID_VAR_SB_FKillDescription                         = 12,
	ID_VAR_SB_LKillDescription                         = 13,
	ID_VAR_SB_C4DefuseDescription                      = 14,
	ID_VAR_SB_C4PlantDescription                       = 15,
	ID_VAR_SB_TeamStartDescription                     = 16,
	ID_VAR_SB_CPointDescription                        = 17,
	ID_VAR_SB_TankDestroyDescription                   = 18,
	ID_VAR_SB_EXPProgress_Now                          = 19,
	ID_VAR_SB_SelfRank                                 = 20,
	ID_VAR_SB_RankIcon                                 = 21,
	ID_VAR_SB_NextRankIcon                             = 22,
	ID_VAR_SB_Exp_Base                                 = 23,
	ID_VAR_SB_Exp_Special                              = 24,
	ID_VAR_SB_Exp_TeamAdd                              = 25,
	ID_VAR_SB_Exp_NetBarAdd                            = 26,
	ID_VAR_SB_Exp_ToolsAdd                             = 27,
	ID_VAR_SB_Exp_ClanTeamAdd                          = 28,
	ID_VAR_SB_Exp_VIPAdd                               = 29,
	ID_VAR_SB_Exp_ActvAdd                              = 30,
	ID_VAR_SB_Exp_SpecAdd                              = 31,
	ID_VAR_SB_Exp_Pendant                              = 32,
	ID_VAR_SB_SelfKillInfo                             = 33,
	ID_VAR_SB_PlayTime                                 = 34,
	ID_VAR_SB_GetGP                                    = 35,
	ID_VAR_SB_GP_Special                               = 36,
	ID_VAR_SB_GP_TeamAdd                               = 37,
	ID_VAR_SB_GP_NetBarAdd                             = 38,
	ID_VAR_SB_GP_ToolsAdd                              = 39,
	ID_VAR_SB_GP_CommonAdd                             = 40,
	ID_VAR_SB_GP_ActvAdd                               = 41,
	ID_VAR_SB_GP_Pendant                               = 42,
	ID_VAR_SB_AddictionIconPath                        = 43,
	ID_VAR_SB_AwardIcon                                = 44,
	ID_VAR_SB_AwardCount                               = 45,
	ID_VAR_SB_AchiveIcon                               = 46,
	ID_VAR_SB_AchiveName                               = 47,
	ID_VAR_SB_NickName                                 = 48,
	ID_VAR_SB_GSDU_Uin                                 = 49,
	ID_VAR_SB_GSDU_Name                                = 50,
	ID_VAR_SB_GSDU_KillInfo                            = 51,
	ID_VAR_SB_GSDU_Experience                          = 52,
	ID_VAR_SB_GSDU_SubTeamName                         = 53,
	ID_VAR_SB_GSDU_InternetCafesPlus                   = 54,
	ID_VAR_SB_GSDU_Award                               = 55,
	ID_VAR_SB_GSDU_RankValue                           = 56,
	ID_VAR_SB_GSDU_RankPath                            = 57,
	ID_VAR_SB_GSDU_bMe                                 = 58,
	ID_VAR_SB_GSDU_bSpector                            = 59,
	ID_VAR_SB_GSDU_bTeamAward                          = 60,
	ID_VAR_SB_GSDU_TeamAward1                          = 61,
	ID_VAR_SB_GSDU_TeamAward2                          = 62,
	ID_VAR_SB_GSDU_TeamAward3                          = 63,
	ID_VAR_SB_GSDU_bIsFriendArray                      = 64,
	ID_VAR_SB_REBEL_Uin                                = 65,
	ID_VAR_SB_REBEL_Name                               = 66,
	ID_VAR_SB_REBEL_KillInfo                           = 67,
	ID_VAR_SB_REBEL_Experience                         = 68,
	ID_VAR_SB_REBEL_SubTeamName                        = 69,
	ID_VAR_SB_REBEL_InternetCafesPlus                  = 70,
	ID_VAR_SB_REBEL_Award                              = 71,
	ID_VAR_SB_REBEL_RankValue                          = 72,
	ID_VAR_SB_REBEL_RankPath                           = 73,
	ID_VAR_SB_REBEL_bMe                                = 74,
	ID_VAR_SB_REBEL_bSpector                           = 75,
	ID_VAR_SB_REBEL_bTeamAward                         = 76,
	ID_VAR_SB_REBEL_TeamAward1                         = 77,
	ID_VAR_SB_REBEL_TeamAward2                         = 78,
	ID_VAR_SB_REBEL_TeamAward3                         = 79,
	ID_VAR_SB_REBEL_bIsFriendArray                     = 80,
	ID_VAR_SB_KILL_Uin                                 = 81,
	ID_VAR_SB_KILL_Name                                = 82,
	ID_VAR_SB_KILL_RankValue                           = 83,
	ID_VAR_SB_KILL_RankPath                            = 84,
	ID_VAR_SB_KILL_Commonkill                          = 85,
	ID_VAR_SB_KILL_ShotHeadKill                        = 86,
	ID_VAR_SB_KILL_GrenadesKill                        = 87,
	ID_VAR_SB_KILL_ClosedKill                          = 88,
	ID_VAR_SB_BEKILL_Uin                               = 89,
	ID_VAR_SB_BEKILL_Name                              = 90,
	ID_VAR_SB_BEKILL_RankValue                         = 91,
	ID_VAR_SB_BEKILL_RankPath                          = 92,
	ID_VAR_SB_BEKILL_Commonkill                        = 93,
	ID_VAR_SB_BEKILL_ShotHeadKill                      = 94,
	ID_VAR_SB_BEKILL_GrenadesKill                      = 95,
	ID_VAR_SB_PlayerUins                               = 96,
	ID_VAR_SB_Badge_Icons                              = 97,
	ID_VAR_SB_Badge_Frms                               = 98,
	ID_VAR_SB_Badge_Bgs                                = 99,
	ID_VAR_SB_TASK_TaskName                            = 100,
	ID_VAR_SB_TASK_TaskCurrent                         = 101,
	ID_VAR_SB_TASK_TaskTarget                          = 102,
	ID_VAR_SB_NETBAR_GOLD                              = 103,
	ID_VAR_SB_NETBAR_SILVER                            = 104,
	ID_VAR_SB_NETBAR_COPPER                            = 105,
	ID_VAR_SB_ISHIDEBUTTON                             = 106,
	ID_VAR_SB_MAX                                      = 107
};*/

// Enum TGameGfxUI.GfxMovie_Scoreboard.ScoreBoardFunId
/*enum ScoreBoardFunId
{
	ID_FUN_SB_ClearBadgeData                           = 0,
	ID_FUN_SB_ClearPalyersData                         = 1,
	ID_FUN_SB_ClearSelfAwardData                       = 2,
	ID_FUN_SB_ClearSelfAchiveData                      = 3,
	ID_FUN_SB_ReSetGSDUList                            = 4,
	ID_FUN_SB_ReSetRebelList                           = 5,
	ID_FUN_SB_SetResultData                            = 6,
	ID_FUN_SB_SetMyInfoData                            = 7,
	ID_FUN_SB_SetTaskTips                              = 8,
	ID_FUN_SB_SetAwardData                             = 9,
	ID_FUN_SB_SetAchieveData                           = 10,
	ID_FUN_SB_OpenRightClickMenu                       = 11,
	ID_FUN_SB_SetCardMC                                = 12,
	ID_FUN_SB_SetPlayerKillData                        = 13,
	ID_FUN_SB_SetPlayerBeKillData                      = 14,
	ID_FUN_SB_ShowByType                               = 15,
	ID_FUN_SB_SetGameTaskInfo                          = 16,
	ID_FUN_SB_MAX                                      = 17
};*/

// Enum TGameGfxUI.GfxMovie_ShieldChatInGame.VariableID
/*enum VariableID
{
	ID_Var_EXAMPLE                                     = 0,
	ID_Var_R_PlayerNameArray                           = 1,
	ID_Var_R_PlayerUinArray                            = 2,
	ID_Var_R_Player_SelectedArray                      = 3,
	ID_Var_G_PlayerNameArray                           = 4,
	ID_Var_G_PlayerUinArray                            = 5,
	ID_Var_G_Player_SelectedArray                      = 6,
	ID_Var_Selected_Channel                            = 7,
	ID_Var_Selected_P2P                                = 8,
	ID_Var_MAX                                         = 9
};*/

// Enum TGameGfxUI.GfxMovie_ShieldChatInGame.FunctionId
/*enum FunctionId
{
	ID_Fun_Example                                     = 0,
	ID_Fun_PassShieldPlayerOneByOne                    = 1,
	ID_Fun_SetData                                     = 2,
	ID_Fun_MAX                                         = 3
};*/

// Enum TGameGfxUI.GfxMovie_ShopBuySingle.BuyVariableId
/*enum BuyVariableId
{
	ID_VAR_Name                                        = 0,
	ID_VAR_Description                                 = 1,
	ID_VAR_AasType                                     = 2,
	ID_VAR_SB_TPGPPriceArary                           = 3,
	ID_VAR_SB_NeedPriceArray                           = 4,
	ID_VAR_SB_bVIP                                     = 5,
	ID_VAR_SB_cbSelectedIndex                          = 6,
	ID_VAR_SB_MixType                                  = 7,
	ID_VAR_cbDisabled                                  = 8,
	ID_VAR_SB_PictureIconPath                          = 9,
	ID_VAR_SBSPayTypeVisible                           = 10,
	ID_VAR_SB_HasMoneyNum                              = 11,
	ID_VAR_SB_MoneyTypeRemaining                       = 12,
	ID_VAR_DiscountCardArray                           = 13,
	ID_VAR_bHasDiscountCard                            = 14,
	ID_VAR_DiscountTipsString                          = 15,
	ID_Var_MAX                                         = 16
};*/

// Enum TGameGfxUI.GfxMovie_ShopBuySingle.BuyFunId
/*enum BuyFunId
{
	ID_FUN_Recove                                      = 0,
	ID_FUN_SetPrice                                    = 1,
	ID_FUN_SB_ClearPriceArray                          = 2,
	ID_FUN_SB_InitalButtonSounds                       = 3,
	ID_FUN_ShowMinorsProtectWarnning                   = 4,
	ID_FUN_LockPrice                                   = 5,
	ID_Fun_MAX                                         = 6
};*/

// Enum TGameGfxUI.GfxMovie_ShopBuyTogether.GiveTogetherVariableId
/*enum GiveTogetherVariableId
{
	ID_BT_VAR_GoodsNum                                 = 0,
	ID_BT_VAR_TPPrice                                  = 1,
	ID_BT_VAR_VIP_TPPrice                              = 2,
	ID_BT_VAR_bVIP                                     = 3,
	ID_BT_VAR_sCommodityType                           = 4,
	ID_BT_VAR_bBuy                                     = 5,
	ID_BT_VAR_CostMoneyNum                             = 6,
	ID_BT_VAR_HasMoneyNum                              = 7,
	ID_BT_VAR_PayMoneyType                             = 8,
	ID_BT_VAR_MAX                                      = 9
};*/

// Enum TGameGfxUI.GfxMovie_ShopBuyTogether.GiveTogetherFunId
/*enum GiveTogetherFunId
{
	ID_BT_FUN_SetPrice                                 = 0,
	ID_BT_FUN_MAX                                      = 1
};*/

// Enum TGameGfxUI.GfxMovie_ShopGiveSingle.GiveGiftResultType
/*enum GiveGiftResultType
{
	GiveGiftResult_None                                = 0,
	GiveGiftResult_Successful                          = 1,
	GiveGiftResult_Failed                              = 2,
	GiveGiftResult_MAX                                 = 3
};*/

// Enum TGameGfxUI.GfxMovie_ShopGiveSingle.GiveSingleVariableId
/*enum GiveSingleVariableId
{
	ID_Var_FriendNameArray                             = 0,
	ID_VAR_FriendRankArray                             = 1,
	ID_VAR_FriendCheckedArray                          = 2,
	ID_VAR_HasSelectedPlayerNum                        = 3,
	ID_VAR_SelectedPlayerNumMax                        = 4,
	ID_VAR_OriginalArray                               = 5,
	ID_VAR_FriendIndex                                 = 6,
	ID_VAR_RequireSay                                  = 7,
	ID_VAR_SG_MessageTextMax                           = 8,
	ID_VAR_SG_GiveResultTital                          = 9,
	ID_VAR_SG_TPGPPriceArary                           = 10,
	ID_VAR_SG_TimeArray                                = 11,
	ID_VAR_SG_CommodityName                            = 12,
	ID_VAR_SG_IconPath                                 = 13,
	ID_VAR_SG_HasMoneyNum                              = 14,
	ID_VAR_SG_PayMoneyType                             = 15,
	ID_VAR_SG_CostMoneyArray                           = 16,
	ID_MAX                                             = 17
};*/

// Enum TGameGfxUI.GfxMovie_ShopGiveSingle.GiveSingleFunId
/*enum GiveSingleFunId
{
	ID_FUN_ClearFriendList                             = 0,
	ID_FUN_SetFriendList                               = 1,
	ID_SG_FUN_SetPrice                                 = 2,
	ID_FUN_ClearPrice                                  = 3,
	ID_FUN_InitDialog                                  = 4,
	ID_FUN_GS_GotoGiveResultUI                         = 5,
	ID_MAX                                             = 6
};*/

// Enum TGameGfxUI.GfxMovie_ShowTMPrize.QuitGameVariableId
/*enum QuitGameVariableId
{
	ID_SHOWPRIZE_VAR_NICKNAME                          = 0,
	ID_SHOWPRIZE_VAR_COUNT                             = 1,
	ID_SHOWPRIZE_VAR_NZPOINT                           = 2,
	ID_SHOWPRIZE_VAR_MPPOINT                           = 3,
	ID_SHOWPRIZE_VAR_NAMELIST                          = 4,
	ID_SHOWPRIZE_VAR_SOURCELIST                        = 5,
	ID_SHOWPRIZE_VAR_MAX                               = 6
};*/

// Enum TGameGfxUI.GfxMovie_ShowTMPrize.QuitGameFunId
/*enum QuitGameFunId
{
	ID_SHOWPRIZE_FUN_SETPRIZEDATA                      = 0,
	ID_SHOWPRIZE_FUN_MAX                               = 1
};*/

// Enum TGameGfxUI.GfxMovie_SingleMatchScoreboard.SingleMatchScoreBoardVarId
/*enum SingleMatchScoreBoardVarId
{
	ID_VAR_SINGLEMATCH_RankLevelMax                    = 0,
	ID_VAR_SINGLEMATCH_MatchName                       = 1,
	ID_VAR_SINGLEMATCH_MapName                         = 2,
	ID_VAR_SINGLEMATCH_TaskState                       = 3,
	ID_VAR_SINGLEMATCH_MVPDescription                  = 4,
	ID_VAR_SINGLEMATCH_ACEDescription                  = 5,
	ID_VAR_SINGLEMATCH_FKillDescription                = 6,
	ID_VAR_SINGLEMATCH_LKillDescription                = 7,
	ID_VAR_SINGLEMATCH_C4DefuseDescription             = 8,
	ID_VAR_SINGLEMATCH_C4PlantDescription              = 9,
	ID_VAR_SINGLEMATCH_TeamStartDescription            = 10,
	ID_VAR_SINGLEMATCH_CPointDescription               = 11,
	ID_VAR_SINGLEMATCH_EXPProgress_Now                 = 12,
	ID_VAR_SINGLEMATCH_SelfRank                        = 13,
	ID_VAR_SINGLEMATCH_RankIcon                        = 14,
	ID_VAR_SINGLEMATCH_NextRankIcon                    = 15,
	ID_VAR_SINGLEMATCH_Exp_Base                        = 16,
	ID_VAR_SINGLEMATCH_Exp_Special                     = 17,
	ID_VAR_SINGLEMATCH_Exp_TeamAdd                     = 18,
	ID_VAR_SINGLEMATCH_Exp_NetBarAdd                   = 19,
	ID_VAR_SINGLEMATCH_Exp_ToolsAdd                    = 20,
	ID_VAR_SINGLEMATCH_Exp_ClanTeamAdd                 = 21,
	ID_VAR_SINGLEMATCH_Exp_VIPAdd                      = 22,
	ID_VAR_SINGLEMATCH_Exp_ActvAdd                     = 23,
	ID_VAR_SINGLEMATCH_Exp_SpecAdd                     = 24,
	ID_VAR_SINGLEMATCH_Exp_Pendant                     = 25,
	ID_VAR_SINGLEMATCH_Exp_TodayFirstWin               = 26,
	ID_VAR_SINGLEMATCH_SelfKill                        = 27,
	ID_VAR_SINGLEMATCH_SelfKilledl                     = 28,
	ID_VAR_SINGLEMATCH_PlayTime                        = 29,
	ID_VAR_SINGLEMATCH_GetGP                           = 30,
	ID_VAR_SINGLEMATCH_GP_Special                      = 31,
	ID_VAR_SINGLEMATCH_GP_TeamAdd                      = 32,
	ID_VAR_SINGLEMATCH_GP_NetBarAdd                    = 33,
	ID_VAR_SINGLEMATCH_GP_ToolsAdd                     = 34,
	ID_VAR_SINGLEMATCH_GP_CommonAdd                    = 35,
	ID_VAR_SINGLEMATCH_GP_ActvAdd                      = 36,
	ID_VAR_SINGLEMATCH_GP_Pendant                      = 37,
	ID_VAR_SINGLEMATCH_AddictionIconPath               = 38,
	ID_VAR_SINGLEMATCH_AchiveIcon                      = 39,
	ID_VAR_SINGLEMATCH_AchiveName                      = 40,
	ID_VAR_SINGLEMATCH_AwardIcon                       = 41,
	ID_VAR_SINGLEMATCH_AwardCount                      = 42,
	ID_VAR_SINGLEMATCH_WinnerName                      = 43,
	ID_VAR_SINGLEMATCH_Uin                             = 44,
	ID_VAR_SINGLEMATCH_Name                            = 45,
	ID_VAR_SINGLEMATCH_KillInfo                        = 46,
	ID_VAR_SINGLEMATCH_Award                           = 47,
	ID_VAR_SINGLEMATCH_RankValue                       = 48,
	ID_VAR_SINGLEMATCH_RankPath                        = 49,
	ID_VAR_SINGLEMATCH_bMe                             = 50,
	ID_VAR_SINGLEMATCH_PlayerScore                     = 51,
	ID_VAR_SINGLEMATCH_topRank                         = 52,
	ID_VAR_SINGLEMATCH_Nickname                        = 53,
	ID_VAR_SINGLEMATCH_SkillScoreAdd                   = 54,
	ID_VAR_SINGLEMATCH_IsFriend                        = 55,
	ID_VAR_SINGLEMATCH_IsDropOut                       = 56,
	ID_VAR_SINGLEMATCH_IsFirstWin                      = 57,
	ID_VAR_SINGLEMATCH_MatchLevelPaths                 = 58,
	ID_VAR_SINGLEMATCH_KILL_Uin                        = 59,
	ID_VAR_SINGLEMATCH_KILL_Name                       = 60,
	ID_VAR_SINGLEMATCH_KILL_RankValue                  = 61,
	ID_VAR_SINGLEMATCH_KILL_RankPath                   = 62,
	ID_VAR_SINGLEMATCH_KILL_Commonkill                 = 63,
	ID_VAR_SINGLEMATCH_KILL_ShotHeadKill               = 64,
	ID_VAR_SINGLEMATCH_KILL_GrenadesKill               = 65,
	ID_VAR_SINGLEMATCH_KILL_ClosedKill                 = 66,
	ID_VAR_SINGLEMATCH_BEKILL_Uin                      = 67,
	ID_VAR_SINGLEMATCH_BEKILL_Name                     = 68,
	ID_VAR_SINGLEMATCH_BEKILL_RankValue                = 69,
	ID_VAR_SINGLEMATCH_BEKILL_RankPath                 = 70,
	ID_VAR_SINGLEMATCH_BEKILL_Commonkill               = 71,
	ID_VAR_SINGLEMATCH_BEKILL_ShotHeadKill             = 72,
	ID_VAR_SINGLEMATCH_BEKILL_GrenadesKill             = 73,
	ID_VAR_SINGLEMATCH_Score_CurrentScore              = 74,
	ID_VAR_SINGLEMATCH_TASK_TaskName                   = 75,
	ID_VAR_SINGLEMATCH_TASK_TaskCurrent                = 76,
	ID_VAR_SINGLEMATCH_TASK_TaskTarget                 = 77,
	ID_VAR_SINGLEMATCH_NETBAR_GOLD                     = 78,
	ID_VAR_SINGLEMATCH_NETBAR_SILVER                   = 79,
	ID_VAR_SINGLEMATCH_NETBAR_COPPER                   = 80,
	ID_VAR_SINGLEMATCH_ISHIDEBUTTON                    = 81,
	ID_VAR_SINGLEMATCH_MAX                             = 82
};*/

// Enum TGameGfxUI.GfxMovie_SingleMatchScoreboard.ScoreBoardFunId
/*enum ScoreBoardFunId
{
	ID_FUN_SINGLEMATCH_ClearPalyersData                = 0,
	ID_FUN_SINGLEMATCH_ClearSelfAchiveData             = 1,
	ID_FUN_SINGLEMATCH_ClearSelfAwardData              = 2,
	ID_FUN_SINGLEMATCH_ReSetPlayerList                 = 3,
	ID_FUN_SINGLEMATCH_SetResultData                   = 4,
	ID_FUN_SINGLEMATCH_SetMyInfoData                   = 5,
	ID_FUN_SINGLEMATCH_SetTaskTips                     = 6,
	ID_FUN_SINGLEMATCH_SetAchieveData                  = 7,
	ID_FUN_SINGLEMATCH_SetAwardData                    = 8,
	ID_FUN_SINGLEMATCH_OpenRightClickMenu              = 9,
	ID_FUN_SINGLEMATCH_SetCardMC                       = 10,
	ID_FUN_SINGLEMATCH_ShowByType                      = 11,
	ID_FUN_SINGLEMATCH_SetPlayerKillData               = 12,
	ID_FUN_SINGLEMATCH_SetPlayerBeKillData             = 13,
	ID_FUN_SINGLEMATCH_SetFightScoreData               = 14,
	ID_FUN_SINGLEMATCH_SetGameTaskInfo                 = 15,
	ID_FUN_SINGLEMATCH_MAX                             = 16
};*/

// Enum TGameGfxUI.GfxMovie_SinglePersonalMatch.PersonanMatchVarID
/*enum PersonanMatchVarID
{
	ID_VAR_SPM_NickName                                = 0,
	ID_VAR_SPM_RankNum                                 = 1,
	ID_VAR_SPM_RankIconPath                            = 2,
	ID_VAR_SPM_MPValueWeek                             = 3,
	ID_VAR_SPM_MPValueSeason                           = 4,
	ID_VAR_SPM_LevelNeedMatchCount                     = 5,
	ID_VAR_SPM_FeedbackValue                           = 6,
	ID_VAR_SPM_FightScore                              = 7,
	ID_VAR_SPM_FeedBackMPValue                         = 8,
	ID_VAR_SPM_WeightSkillScore                        = 9,
	ID_VAR_SPM_MatchLevel                              = 10,
	ID_VAR_SPM_SeasonMatchCount                        = 11,
	ID_VAR_SPM_TopRankInfo                             = 12,
	ID_VAR_SPM_bDropOut                                = 13,
	ID_VAR_SPM_AddScoreNext                            = 14,
	ID_VAR_SPM_QuitMatchBtnDisabled                    = 15,
	ID_VAR_SPM_SkillScore                              = 16,
	ID_VAR_SPM_StartSkillScore                         = 17,
	ID_VAR_SPM_EndSkillScore                           = 18,
	ID_VAR_SPM_FightScoreTipContent                    = 19,
	ID_VAR_SPM_SkillScoreTipContent                    = 20,
	ID_VAR_SPM_ActiveTipContent                        = 21,
	ID_VAR_SPM_LevelTipContent                         = 22,
	ID_VAR_SPM_SelfLevelTipContent                     = 23,
	ID_VAR_SPM_RankTipContent                          = 24,
	ID_VAR_SPM_MatchCountTipContent                    = 25,
	ID_VAR_SPM_PreSocreTipContent                      = 26,
	ID_VAR_SPM_NextAddTipContent                       = 27,
	ID_VAR_SPM_InviteTipContent                        = 28,
	ID_VAR_SPM_AwardTipContent                         = 29,
	ID_VAR_SPM_VedioRecordTipContent                   = 30,
	ID_VAR_SPM_CheckOpenQTalkContent                   = 31,
	ID_VAR_SPM_ActiveType                              = 32,
	ID_VAR_SPM_PlayerRankPaths                         = 33,
	ID_VAR_SPM_PlayerRankNums                          = 34,
	ID_VAR_SPM_PlayerNickNames                         = 35,
	ID_VAR_SPM_PlayerStates                            = 36,
	ID_VAR_SPM_PlayerIsMes                             = 37,
	ID_VAR_SPM_PlayerIsHosts                           = 38,
	ID_VAR_SPM_CurState                                = 39,
	ID_VAR_SPM_bIsHost                                 = 40,
	ID_VAR_SPM_EnterMatchBtnDisabled                   = 41,
	ID_VAR_SPM_bPMTeamReadyDisabled                    = 42,
	ID_VAR_SPM_CheckOpenQTalk                          = 43,
	ID_VAR_SPM_CheckOpenQTalkVisible                   = 44,
	ID_VAR_SPM_VEDIOSELECTED                           = 45,
	ID_VAR_SPM_MAX                                     = 46
};*/

// Enum TGameGfxUI.GfxMovie_SinglePersonalMatch.PersonalMatchFunID
/*enum PersonalMatchFunID
{
	ID_FUN_SPM_UpdateMatchInfo                         = 0,
	ID_FUN_SPM_UpdateAwardInfo                         = 1,
	ID_FUN_SPM_OnResReadyPersonalMatch                 = 2,
	ID_FUN_SPM_OnResUnReadyPersonalMatch               = 3,
	ID_FUN_SPM_UpdateMySelfInfo                        = 4,
	ID_FUN_SPM_UpdateSkillScoreInfo                    = 5,
	ID_FUN_SPM_ClearPlayerListData                     = 6,
	ID_FUN_SPM_UpdateTeamList                          = 7,
	ID_FUN_SPM_GotoHostUI                              = 8,
	ID_FUN_SPM_GotoUnReadyUI                           = 9,
	ID_FUN_SPM_GotoReadyUI                             = 10,
	ID_FUN_SPM_GotoInGameUI                            = 11,
	ID_FUN_SPM_GotoNormalUI                            = 12,
	ID_FUN_SPM_GotoInMatchingUI                        = 13,
	ID_FUN_SPM_SetPMTeamReadyBtnDisabled               = 14,
	ID_FUN_SPM_OnUpdateMatchLevelInfo                  = 15,
	ID_FUN_SPM_SetDisableSPMatch                       = 16,
	ID_FUN_SPM_CloseThis                               = 17,
	ID_FUN_SPM_MAX                                     = 18
};*/

// Enum TGameGfxUI.GfxMovie_SinglePersonalMatch.SPMClickEnterMatchType
/*enum SPMClickEnterMatchType
{
	SPMClickEnterMatchType_Cannot                      = 0,
	SPMClickEnterMatchType_Normal                      = 1,
	SPMClickEnterMatchType_Team                        = 2,
	SPMClickEnterMatchType_MAX                         = 3
};*/

// Enum TGameGfxUI.GfxMovie_SpectatorHUD.EArrow
/*enum EArrow
{
	Arrow_U                                            = 0,
	Arrow_D                                            = 1,
	Arrow_L                                            = 2,
	Arrow_R                                            = 3,
	Arrow_MAX                                          = 4
};*/

// Enum TGameGfxUI.GfxMovie_SpectatorHUD.ESpectatorFuncId
/*enum ESpectatorFuncId
{
	ID_FUN_CLEAN_DATA                                  = 0,
	ID_FUN_SET_NOT_TEAMGAME                            = 1,
	ID_FUN_UPDATE_LEFT                                 = 2,
	ID_FUN_UPDATE_RIGHT                                = 3,
	ID_FUN_SET_SELECTED_PLAYER                         = 4,
	ID_FUN_CLEAR_SELECTION                             = 5,
	ID_FUN_SET_TWEEN_ENABLED                           = 6,
	ID_FUN_SET_MOUSE_ENABLED                           = 7,
	ID_FUN_SHOW_PLAY_BAR                               = 8,
	ID_FUN_HIDE_PLAY_BAR                               = 9,
	ID_FUN_SET_SELECTED_BUTTON                         = 10,
	ID_FUN_SET_CURRENT_TIME                            = 11,
	ID_FUN_SET_VIEW_MODE_TEXT                          = 12,
	ID_FUN_SET_FORWARD_SPEED_TEXT                      = 13,
	ID_FUN_SET_PLAY_STATE                              = 14,
	ID_FUN_SHOW_KILL_CAM_TIPS                          = 15,
	ID_FUN_SET_CAMP_ICON_VISIBILITY                    = 16,
	ID_FUN_SET_CAMP_PLAYER_VISIBILITY                  = 17,
	ID_FUN_SetPlayerListMode                           = 18,
	ID_FUN_SET_CAMP_PLAYER_QUICKSHOW                   = 19,
	ID_Fun_MAX                                         = 20
};*/

// Enum TGameGfxUI.GfxMovie_SpectatorHUD.ESide
/*enum ESide
{
	SIDE_Left                                          = 0,
	SIDE_Right                                         = 1,
	SIDE_MAX                                           = 2
};*/

// Enum TGameGfxUI.GfxMovie_SpectatorHUD.ESpectatorVarId
/*enum ESpectatorVarId
{
	ID_VAR_PLAYER_LEFT_NAME_Array                      = 0,
	ID_VAR_PLAYER_LEFT_KILL_Array                      = 1,
	ID_VAR_PLAYER_LEFT_HP_Array                        = 2,
	ID_VAR_PLAYER_LEFT_CAMP_Array                      = 3,
	ID_VAR_PLAYER_RIGHT_NAME_Array                     = 4,
	ID_VAR_PLAYER_RIGHT_KILL_Array                     = 5,
	ID_VAR_PLAYER_RIGHT_HP_Array                       = 6,
	ID_VAR_PLAYER_RIGHT_CAMP_Array                     = 7,
	ID_VAR_REPLAY_TOTAL_TIME                           = 8,
	ID_Var_MAX                                         = 9
};*/

// Enum TGameGfxUI.GfxMovie_Survey.ESurveyVarId
/*enum ESurveyVarId
{
	ID_VAR_Survey_Description                          = 0,
	ID_VAR_QUES_Title_Array                            = 1,
	ID_VAR_QUES_ID_Array                               = 2,
	ID_VAR_QUES_Group_Array                            = 3,
	ID_VAR_QUES_Type_Array                             = 4,
	ID_VAR_QUES_MustAnswer_Array                       = 5,
	ID_VAR_QUES_OptionCount_Array                      = 6,
	ID_VAR_QUES_Option_Array                           = 7,
	ID_VAR_QUES_OptionQuesID_Array                     = 8,
	ID_VAR_QUES_OptionShield_Array                     = 9,
	ID_VAR_QUES_MinChars_Array                         = 10,
	ID_VAR_QUES_ResultOption_Array                     = 11,
	ID_VAR_QUES_ResultText_Array                       = 12,
	ID_Var_MAX                                         = 13
};*/

// Enum TGameGfxUI.GfxMovie_Survey.ESurveyFuncId
/*enum ESurveyFuncId
{
	ID_FUN_CLEAN_DATA                                  = 0,
	ID_FUN_Config_UI                                   = 1,
	ID_Fun_MAX                                         = 2
};*/

// Enum TGameGfxUI.GfxMovie_Survey.EUIQuestionType
/*enum EUIQuestionType
{
	UQT_None                                           = 0,
	UQT_QT_SingleOption                                = 1,
	UQT_QT_MultiOption                                 = 2,
	UQT_QT_QuesAns                                     = 3,
	UQT_QT_SingleAns                                   = 4,
	UQT_QT_MultiAns                                    = 5,
	UQT_QT_GroupTitle                                  = 6,
	UQT_MAX                                            = 7
};*/

// Enum TGameGfxUI.GfxMovie_SystemSettings.FrameLevel
/*enum FrameLevel
{
	FL_Video                                           = 0,
	FL_Audio                                           = 1,
	FL_Operation                                       = 2,
	FL_Game                                            = 3,
	FL_Communication                                   = 4,
	FL_MAX                                             = 5
};*/

// Enum TGameGfxUI.GfxMovie_SystemSettings.SystemSettingVariableId
/*enum SystemSettingVariableId
{
	ID_Var_LogString                                   = 0,
	ID_QGAME_VAR_QTAutoStart                           = 1,
	ID_MAX                                             = 2
};*/

// Enum TGameGfxUI.GfxMovie_SystemSettings.SystemSettingFunId
/*enum SystemSettingFunId
{
	ID_QGAME_FUN_SetQTalkAudio                         = 0,
	ID_QGAME_FUN_GotoTab                               = 1,
	ID_QGAME_FUN_MAX                                   = 2
};*/

// Enum TGameGfxUI.GfxMovie_Task.ETutorialType
/*enum ETutorialType
{
	NEWGUIDE_GUIDE                                     = 0,
	NEWGUIDE_MECH                                      = 1,
	NEWGUIDE_TEAM                                      = 2,
	NEWGUIDE_PVE                                       = 3,
	NEWGUIDE_PPZ                                       = 4,
	NEWGUIDE_MAX                                       = 5
};*/

// Enum TGameGfxUI.GfxMovie_Task.ETaskGroupUI
/*enum ETaskGroupUI
{
	TaskGroupUI_All                                    = 0,
	TaskGroupUI_Daily                                  = 1,
	TaskGroupUI_Rank                                   = 2,
	TaskGroupUI_Reward                                 = 3,
	TaskGroupUI_Clan                                   = 4,
	TaskGroupUI_WIP                                    = 5,
	TaskGroupUI_Done                                   = 6,
	TaskGroupUI_MAX                                    = 7
};*/

// Enum TGameGfxUI.GfxMovie_Task.ETaskVarId
/*enum ETaskVarId
{
	ID_VAR_TaskAutoCommitTask                          = 0,
	ID_VAR_TaskFilterTitleArray                        = 1,
	ID_VAR_TaskFilterIdArray                           = 2,
	ID_VAR_TaskFilterIndex                             = 3,
	ID_VAR_TaskIDArray                                 = 4,
	ID_VAR_TaskNameArray                               = 5,
	ID_VAR_ClanPrestigeArray                           = 6,
	ID_VAR_TaskTypeArray                               = 7,
	ID_VAR_TaskDifficultyArray                         = 8,
	ID_VAR_TaskPopularityArray                         = 9,
	ID_VAR_TaskDescriptionArray                        = 10,
	ID_VAR_TaskRequirementArray                        = 11,
	ID_VAR_TaskAwardGPArray                            = 12,
	ID_VAR_TaskAwardMPArray                            = 13,
	ID_VAR_TaskAwardTPArray                            = 14,
	ID_VAR_TaskAwardItemString_1Array                  = 15,
	ID_VAR_TaskAwardItemIcon_1Array                    = 16,
	ID_VAR_TaskGPCostArray                             = 17,
	ID_VAR_TaskProcessNameArray                        = 18,
	ID_VAR_TaskCurrentValueArray                       = 19,
	ID_VAR_TaskMaxValueArray                           = 20,
	ID_VAR_TaskStateArray                              = 21,
	ID_VAR_TaskIsRandomArray                           = 22,
	ID_VAR_TaskCantAcceptReasonArray                   = 23,
	ID_VAR_TaskCompleteTimeArray                       = 24,
	ID_VAR_TaskStatisArray                             = 25,
	ID_VAR_TaskInfoArrayString                         = 26,
	ID_VAR_TaskFinishedCount                           = 27,
	ID_Var_LogString                                   = 28,
	ID_MAX                                             = 29
};*/

// Enum TGameGfxUI.GfxMovie_Task.ETaskFuncId
/*enum ETaskFuncId
{
	ID_Fun_OnInitialize                                = 0,
	ID_FUN_OnReturnBtnClick                            = 1,
	ID_FUN_OnReturnAwardTaskSuccessful                 = 2,
	ID_FUN_UpdateTaskListUI                            = 3,
	ID_FUN_ShowPostTaskTip                             = 4,
	ID_MAX                                             = 5
};*/

// Enum TGameGfxUI.GfxMovie_TaskComplete.VariableID
/*enum VariableID
{
	ID_VAR_TaskMessage                                 = 0,
	ID_Var_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_TaskComplete.FunctionId
/*enum FunctionId
{
	ID_FUN_TaskName                                    = 0,
	ID_Fun_MAX                                         = 1
};*/

// Enum TGameGfxUI.GfxMovie_TaskTip.ETaskMsgVarId
/*enum ETaskMsgVarId
{
	ID_VAR_TASK_TIP_Name_Array                         = 0,
	ID_VAR_TASK_TIP_Requirement_Array                  = 1,
	ID_VAR_TASK_TIP_AwardExp_Array                     = 2,
	ID_VAR_TASK_TIP_AwardGP_Array                      = 3,
	ID_VAR_TASK_TIP_AwardTP_Array                      = 4,
	ID_VAR_TASK_TIP_NotShowTaskTipSelect               = 5,
	ID_VAR_TASK_TIP_MAX                                = 6
};*/

// Enum TGameGfxUI.GfxMovie_TaskTip.ETaskMsgFuncId
/*enum ETaskMsgFuncId
{
	ID_FUN_CLEAN_DATA                                  = 0,
	ID_FUN_Init_UI                                     = 1,
	ID_Fun_MAX                                         = 2
};*/

// Enum TGameGfxUI.GfxMovie_TeamBadgeSystem.BagdeVariableId
/*enum BagdeVariableId
{
	ID_BS_VAR_BadgePackedType                          = 0,
	ID_BS_VAR_BadgePackedPath                          = 1,
	ID_BS_VAR_BadgePackedIndex                         = 2,
	ID_BS_VAR_Badge_BG_Path                            = 3,
	ID_BS_VAR_Badge_BG_Name                            = 4,
	ID_BS_VAR_Badge_BG_Lock                            = 5,
	ID_BS_VAR_Badge_BG_Period                          = 6,
	ID_BS_VAR_Badge_BG_LevelName                       = 7,
	ID_BS_VAR_Badge_Frame_Path                         = 8,
	ID_BS_VAR_Badge_Frame_Name                         = 9,
	ID_BS_VAR_Badge_Frame_Lock                         = 10,
	ID_BS_VAR_Badge_Frame_Period                       = 11,
	ID_BS_VAR_Badge_Frame_LevelName                    = 12,
	ID_BS_VAR_Badge_Icon_Path                          = 13,
	ID_BS_VAR_Badge_Icon_Name                          = 14,
	ID_BS_VAR_Badge_Icon_Lock                          = 15,
	ID_BS_VAR_Badge_Icon_Period                        = 16,
	ID_BS_VAR_Badge_Icon_LevelName                     = 17,
	ID_BS_VAR_Badge_Price                              = 18,
	ID_BS_VAR_Badge_AvailTime                          = 19,
	ID_BS_VAR_Badge_SelectedIndex                      = 20,
	ID_BS_VAR_Badge_SelectedType                       = 21,
	ID_BS_VAR_Badge_SelectedPrice                      = 22,
	ID_BS_VAR_MAX                                      = 23
};*/

// Enum TGameGfxUI.GfxMovie_TeamBadgeSystem.BagdeFunId
/*enum BagdeFunId
{
	ID_BS_FUN_ClearBadgeData                           = 0,
	ID_BS_FUN_ClearBadgePriceData                      = 1,
	ID_BS_FUN_ClearBadgePackedData                     = 2,
	ID_BS_FUN_PopBuyBadgeWindow                        = 3,
	ID_BS_FUN_UpateTeamBadges                          = 4,
	ID_BS_FUN_ReSetBadgePacked                         = 5,
	ID_BS_FUN_MAX                                      = 6
};*/

// Enum TGameGfxUI.GfxMovie_TeamDataRecord.TeamReputationSortType
/*enum TeamReputationSortType
{
	ReputationSortType_None                            = 0,
	ReputationSortType_Name                            = 1,
	ReputationSortType_LastMonth                       = 2,
	ReputationSortType_LastWeek                        = 3,
	ReputationSortType_Yesterday                       = 4,
	ReputationSortType_Today                           = 5,
	ReputationSortType_Date_Personal                   = 6,
	ReputationSortType_Type_Personal                   = 7,
	ReputationSortType_Change_Personal                 = 8,
	ReputationSortType_MAX                             = 9
};*/

// Enum TGameGfxUI.GfxMovie_TeamDataRecord.TeamReputationListFun
/*enum TeamReputationListFun
{
	ID_FUN_AR_ReputationList_ClearListData             = 0,
	ID_FUN_AR_ReputationList_UpdateListData            = 1,
	ID_FUN_AR_ReputationList_UpdateButtonState         = 2,
	ID_FUN_AR_ReputationList_MAX                       = 3
};*/

// Enum TGameGfxUI.GfxMovie_TeamDataRecord.TeamReputationListType
/*enum TeamReputationListType
{
	TeamReputationListType_None                        = 0,
	TeamReputationListType_Team                        = 1,
	TeamReputationListType_Personal                    = 2,
	TeamReputationListType_MAX                         = 3
};*/

// Enum TGameGfxUI.GfxMovie_TeamDataRecord.TeamDataRecordType
/*enum TeamDataRecordType
{
	TeamDataRecordType_None                            = 0,
	TeamDataRecordType_ReputationList                  = 1,
	TeamDataRecordType_WareHouse                       = 2,
	TeamDataRecordType_MAX                             = 3
};*/

// Enum TGameGfxUI.GfxMovie_TeamDataRecord.TeamReputationListVar
/*enum TeamReputationListVar
{
	ID_VAR_AR_ReputationList_NameArray                 = 0,
	ID_VAR_AR_ReputationList_LastMonthArray            = 1,
	ID_VAR_AR_ReputationList_LastWeekArray             = 2,
	ID_VAR_AR_ReputationList_YesterdayArray            = 3,
	ID_VAR_AR_ReputationList_TodayArray                = 4,
	ID_VAR_AR_ReputationList_TypeArray                 = 5,
	ID_VAR_AR_ReputationList_MAX                       = 6
};*/

// Enum TGameGfxUI.GfxMovie_TeamMatch.TeamMatchVarID
/*enum TeamMatchVarID
{
	ID_VAR_TM_GroupMemberName                          = 0,
	ID_VAR_TM_GroupMemberRankPath                      = 1,
	ID_VAR_TM_GroupMemberRankNum                       = 2,
	ID_VAR_TM_GroupMemberState                         = 3,
	ID_VAR_TM_GroupMemberIsMe                          = 4,
	ID_VAR_TM_GroupMemberIsHost                        = 5,
	ID_VAR_TM_CheckOpenQTalk                           = 6,
	ID_VAR_TM_MAX                                      = 7
};*/

// Enum TGameGfxUI.GfxMovie_TeamMatch.TeamMatchFunID
/*enum TeamMatchFunID
{
	ID_FUN_TM_ClearGroupMemberData                     = 0,
	ID_FUN_TM_UpdateMemberList                         = 1,
	ID_FUN_TM_MAX                                      = 2
};*/

// Enum TGameGfxUI.GfxMovie_TeamRoom.TeamRoomTabType
/*enum TeamRoomTabType
{
	TeamRoomTab_None                                   = 0,
	TeamRoomTab_MemberUI                               = 1,
	TeamRoomTab_TeamRankUI                             = 2,
	TeamRoomTab_TeamMatchUI                            = 3,
	TeamRoomTab_TeamEventUI                            = 4,
	TeamRoomTab_ManagerUI                              = 5,
	TeamRoomTab_TeamTalkUI                             = 6,
	TeamRoomTab_TeamComplaintUI                        = 7,
	TeamRoomTab_TeamSkillUI                            = 8,
	TeamRoomTab_WareHouseManageUI                      = 9,
	TeamRoomTab_WareHouseDetail                        = 10,
	TeamRoomTab_MAX                                    = 11
};*/

// Enum TGameGfxUI.GfxMovie_TeamRoom.TeamRoomVariableId
/*enum TeamRoomVariableId
{
	ID_TR_VAR_OwnerUin                                 = 0,
	ID_TR_VAR_IsInTeam                                 = 1,
	ID_TR_VAR_ShieldLayerVisible                       = 2,
	ID_TR_VAR_TeamName                                 = 3,
	ID_TR_VAR_TeamLeader                               = 4,
	ID_TR_VAR_TeamLeaderUin                            = 5,
	ID_TR_VAR_TeamRank                                 = 6,
	ID_TR_VAR_TeamLevel                                = 7,
	ID_TR_VAR_TeamLevelIconPath                        = 8,
	ID_TR_VAR_RecruitState                             = 9,
	ID_TR_VAR_MaxMembers                               = 10,
	ID_TR_VAR_OnlineMemberCount                        = 11,
	ID_TR_VAR_TeamMemberCountTotal                     = 12,
	ID_TR_VAR_RecruitSeting                            = 13,
	ID_TR_VAR_RecruitLevelSeting                       = 14,
	ID_TR_VAR_RecruitLevelNumber                       = 15,
	ID_TR_VAR_PositionName                             = 16,
	ID_TR_VAR_TeamMemberUin                            = 17,
	ID_TR_VAR_TeamMemberID                             = 18,
	ID_TR_VAR_TeamMemberName                           = 19,
	ID_TR_VAR_TeamMemberContribut                      = 20,
	ID_TR_VAR_TeamMemberPost                           = 21,
	ID_TR_VAR_TeamMemberOnline                         = 22,
	ID_TR_VAR_TeamMemberContributLevel                 = 23,
	ID_TR_VAR_TeamMemberRank                           = 24,
	ID_TR_VAR_TeamMemberRankPath                       = 25,
	ID_TR_VAR_TeamMenberPostNum                        = 26,
	ID_TR_VAR_TeamMemberGroupNameArray                 = 27,
	ID_TR_VAR_CurTeamName                              = 28,
	ID_TR_VAR_CreateSafeCode                           = 29,
	ID_TR_VAR_TeamCreateTime                           = 30,
	ID_TR_VAR_TeamIntroduction                         = 31,
	ID_TR_VAR_ApplyName                                = 32,
	ID_TR_VAR_ApplyTime                                = 33,
	ID_TR_VAR_ApplybFriend                             = 34,
	ID_TR_VAR_ApplyResultArray                         = 35,
	ID_TR_VAR_TeamMemberMax                            = 36,
	ID_TR_VAR_MemberSelectedIndex                      = 37,
	ID_TR_VAR_WriteText                                = 38,
	ID_TR_VAR_ApproveResultArray                       = 39,
	ID_TR_VAR_bIsFreeze                                = 40,
	ID_TR_VAR_FreezeTimeText                           = 41,
	ID_TR_VAR_OverallRank_Rank                         = 42,
	ID_TR_VAR_OverallRank_Score                        = 43,
	ID_TR_VAR_OverallRank_Name                         = 44,
	ID_TR_VAR_OverallRank_Captain                      = 45,
	ID_TR_VAR_OverallRank_Introduction                 = 46,
	ID_TR_VAR_OverallRank_Level                        = 47,
	ID_TR_VAR_OverallRank_MatchLevelValue              = 48,
	ID_TR_VAR_OverallRank_Scale                        = 49,
	ID_TR_VAR_OverallRank_RecruitName                  = 50,
	ID_TR_VAR_OverallRank_RecruitType                  = 51,
	ID_TR_VAR_OverallRank_IsDissolved                  = 52,
	ID_TR_VAR_OverallRank_bShowQT                      = 53,
	ID_TR_VAR_OverallRank_bBindQT                      = 54,
	ID_TR_VAR_ShowMemberListType                       = 55,
	ID_TR_VAR_IsWe                                     = 56,
	ID_TR_VAR_MemberIsBanSpeech                        = 57,
	ID_TR_VAR_RecruitInfoText                          = 58,
	ID_TR_VAR_BadgePackedType                          = 59,
	ID_TR_VAR_BadgePackedPath                          = 60,
	ID_TR_VAR_BadgePackedIndex                         = 61,
	ID_TR_VAR_NameMaxlen                               = 62,
	ID_TR_VAR_NameMinLen                               = 63,
	ID_TR_VAR_NoticeMaxLen                             = 64,
	ID_TR_VAR_LeaveMessageMaxLen                       = 65,
	ID_TR_VAR_RecruitMessageMaxLen                     = 66,
	ID_TR_VAR_PasswordMaxLen                           = 67,
	ID_TR_VAR_PasswordMinLen                           = 68,
	ID_TR_VAR_MaxScaleNum                              = 69,
	ID_TR_VAR_GroupMemberSelectedIndex                 = 70,
	ID_TR_VAR_Group_Name                               = 71,
	ID_TR_VAR_GroupMember_Name                         = 72,
	ID_TR_VAR_GroupPostion                             = 73,
	ID_TR_VAR_HaveGroup                                = 74,
	ID_TR_VAR_TeamRankPageIndex                        = 75,
	ID_TR_VAR_TextGetFocus                             = 76,
	ID_TR_VAR_MemberGroupIdArray                       = 77,
	ID_TR_VAR_BindDscArray                             = 78,
	ID_TR_VAR_IsBindArray                              = 79,
	ID_TR_VAR_MemberGroupNameArray                     = 80,
	ID_TR_VAR_MemberGroupPlayerCountArray              = 81,
	ID_TR_VAR_MemberGroupScoreArray                    = 82,
	ID_TR_Var_NewMemberGroupName                       = 83,
	ID_TR_MAX                                          = 84
};*/

// Enum TGameGfxUI.GfxMovie_TeamRoom.TeamRoomFunId
/*enum TeamRoomFunId
{
	ID_TR_FUN_RemoveCreatePanel                        = 0,
	ID_TR_FUN_MyTeamDataComplete                       = 1,
	ID_TR_FUN_JoinOrCreateTeamUI                       = 2,
	ID_TR_FUN_UpdateMyTeamMenberData                   = 3,
	ID_TR_FUN_UpdataTeamInfo                           = 4,
	ID_TR_FUN_ClearMemberData                          = 5,
	ID_TR_FUN_GetPage                                  = 6,
	ID_TR_FUN_ClearApplyData                           = 7,
	ID_TR_FUN_UpdateApplyList                          = 8,
	ID_TR_FUN_AgreeJoinTeam                            = 9,
	ID_TR_FUN_UpdataBulletin                           = 10,
	ID_TR_FUN_UpdatePlayerPostUI                       = 11,
	ID_TR_FUN_UpdateButtonByFreezing                   = 12,
	ID_TR_FUN_ClearOverallRankData                     = 13,
	ID_TR_FUN_UpdateOveralRankTeam                     = 14,
	ID_TR_FUN_SetMyTeamPublishRecruit                  = 15,
	ID_TR_FUN_ClearBadgePackedData                     = 16,
	ID_TR_FUN_ReSetBadgePacked                         = 17,
	ID_TR_FUN_CloseThis                                = 18,
	ID_TR_FUN_OpenChangePostPanel                      = 19,
	ID_TR_FUN_UpdateScale                              = 20,
	ID_TR_FUN_UpdateTeamLeader                         = 21,
	ID_TR_FUN_UpdateTeamName                           = 22,
	ID_TR_FUN_UpdateTeamLevel                          = 23,
	ID_TR_FUN_GoToCreateTeamPanel                      = 24,
	ID_TR_FUN_ClearGroupListData                       = 25,
	ID_TR_FUN_UpdateGroupListData                      = 26,
	ID_TR_FUN_ClearGroupInfoData                       = 27,
	ID_TR_FUN_UpdateGroupInfoData                      = 28,
	ID_TR_FUN_UpdateTeamMatchRecordInfo                = 29,
	ID_TR_FUN_UpdateIsHaveTeamGroup                    = 30,
	ID_TR_FUN_OpenRightClickMenu                       = 31,
	ID_TR_FUN_CloseRightClickMenu                      = 32,
	ID_TR_FUN_SetCardMC                                = 33,
	ID_TR_FUN_ShowFreezeTime                           = 34,
	ID_TR_FUN_ReSetFocus                               = 35,
	ID_TR_FUN_ResCheckTeamName                         = 36,
	ID_TR_FUN_ShowBindTeamRoomName                     = 37,
	ID_TR_FUN_ChangeBindButtonLabel                    = 38,
	ID_TR_FUN_UpdateTeamPrayInfo                       = 39,
	ID_TR_FUN_ClearMemberGroupData                     = 40,
	ID_TR_FUN_UpdateMemberGroupData                    = 41,
	ID_TR_FUN_MAX                                      = 42
};*/

// Enum TGameGfxUI.GfxMovie_TechnicalMatch.TechnicalMatchVarID
/*enum TechnicalMatchVarID
{
	ID_VAR_TECH_PER_TYPENAMES                          = 0,
	ID_VAR_TECH_PER_TYPEINDEX                          = 1,
	ID_VAR_TECH_PER_NZPOINT                            = 2,
	ID_VAR_TECH_PER_ENABLE                             = 3,
	ID_VAR_TECH_PER_STATUS                             = 4,
	ID_VAR_TECH_TEA_TYPENAMES                          = 5,
	ID_VAR_TECH_TEA_TYPEINDEX                          = 6,
	ID_VAR_TECH_TEA_NZPOINT                            = 7,
	ID_VAR_TECH_TEA_ENABLE                             = 8,
	ID_VAR_TECH_TEA_STATUS                             = 9,
	ID_VAR_TECH_ENABLETEAM                             = 10,
	ID_VAR_TECH_MYNZPOINTS                             = 11,
	ID_VAR_TECH_LEADERUIN                              = 12,
	ID_VAR_TECH_LEADERNICK                             = 13,
	ID_VAR_TECH_VEDIOSELECTED                          = 14,
	ID_VAR_TECH_MAX                                    = 15
};*/

// Enum TGameGfxUI.GfxMovie_TechnicalMatch.TechnicalMatchFunID
/*enum TechnicalMatchFunID
{
	ID_FUN_TECH_UPDATEMATCHLIST                        = 0,
	ID_FUN_TECH_SETUISTATUS                            = 1,
	ID_FUN_TECH_ADDPLAYER                              = 2,
	ID_FUN_TECH_REMOVEPLAYER                           = 3,
	ID_FUN_TECH_MAX                                    = 4
};*/

// Enum TGameGfxUI.GfxMovie_TMPrizeIntroduce.TMPrizeIntroduceVar
/*enum TMPrizeIntroduceVar
{
	ID_PrizeIntroduce_ThingsCount                      = 0,
	ID_PrizeIntroduce_ThingsMoney                      = 1,
	ID_PrizeIntroduce_ThingsArray                      = 2,
	ID_PrizeIntroduce_ThingsNameArray                  = 3,
	ID_PrizeIntroduce_MAX                              = 4
};*/

// Enum TGameGfxUI.GfxMovie_TMPrizeIntroduce.TMPrizeIntroduceFunc
/*enum TMPrizeIntroduceFunc
{
	ID_PrizeIntroduce_FUN_ClearModeData                = 0,
	ID_PrizeIntroduce_FUN_OnSetThingsList              = 1,
	ID_PrizeIntroduce_FUN_MAX                          = 2
};*/

// Enum TGameGfxUI.GfxMovie_UIContainer.ContainerFunId
/*enum ContainerFunId
{
	ID_FUN_OpenMovie                                   = 0,
	ID_FUN_CloseMovie                                  = 1,
	ID_Fun_MAX                                         = 2
};*/

// Enum TGameGfxUI.GfxMovie_UIContainer.ContainerVarId
/*enum ContainerVarId
{
	ID_VAR_UI_DefaultMainWeapon                        = 0,
	ID_VAR_UI_DefaultAssiWeapon                        = 1,
	ID_VAR_UI_DefaultMeleeWeapon                       = 2,
	ID_VAR_UI_DefaultThrowWeapon                       = 3,
	ID_VAR_UI_DefaultHeadIcon                          = 4,
	ID_VAR_UI_DefaultFaceIcon                          = 5,
	ID_VAR_UI_DefaultBackIcon                          = 6,
	ID_VAR_UI_LogString                                = 7,
	ID_VAR_UI_VKeys                                    = 8,
	ID_VAR_UI_VKeyUINames                              = 9,
	ID_VAR_UI_FaceKeys                                 = 10,
	ID_VAR_UI_FaceStrings                              = 11,
	ID_VAR_UI_MAX                                      = 12
};*/

// Enum TGameGfxUI.GfxMovie_UIContainer.ButtonOrPlatePressType
/*enum ButtonOrPlatePressType
{
	ID_VAR_UI_ButtonPress_00                           = 0,
	ID_VAR_UI_ButtonPress_01                           = 1,
	ID_VAR_UI_ButtonPress_02                           = 2,
	ID_VAR_UI_ButtonPress_03                           = 3,
	ID_VAR_UI_ButtonPress_04                           = 4,
	ID_VAR_UI_ButtonPress_05                           = 5,
	ID_VAR_UI_FacePlateSlip                            = 6,
	ID_VAR_UI_FacePlateSpring                          = 7,
	ID_VAR_UI_MAX                                      = 8
};*/

// Enum TGameGfxUI.GfxMovieLogin.AsFunctionId
/*enum AsFunctionId
{
	ID_FUN_OnLoginSuccess                              = 0,
	ID_FUN_OnLoginFailed                               = 1,
	ID_FUN_OnLoginNoRole                               = 2,
	ID_Fun_MAX                                         = 3
};*/

// Enum TGameGfxUI.TGDataStore_RoomList.EDataRequestType
/*enum EDataRequestType
{
	ERequest_Timer                                     = 0,
	ERequest_PageUp                                    = 1,
	ERequest_PageDown                                  = 2,
	ERequest_MAX                                       = 3
};*/

// Enum TGameGfxUI.TGGfxUISceneClient.EUISound
/*enum EUISound
{
	ESound_FriendLogin                                 = 0,
	ESound_FriendLogout                                = 1,
	ESound_ReceivMessage                               = 2,
	ESound_DeleteMessage                               = 3,
	ESound_LevelUp                                     = 4,
	ESound_Achivement                                  = 5,
	ESound_TaskAccept                                  = 6,
	ESound_TaskAbandon                                 = 7,
	ESound_TaskFailed                                  = 8,
	ESound_TaskComplete                                = 9,
	ESound_WeaponEquip                                 = 10,
	ESound_WeaponDestroy                               = 11,
	ESound_WeaponRepair                                = 12,
	ESound_OtherEquip                                  = 13,
	ESound_ButtonPress_01                              = 14,
	ESound_ButtonPress_02                              = 15,
	ESound_ButtonPress_03                              = 16,
	ESound_ButtonPress_04                              = 17,
	ESound_ButtonPress_05                              = 18,
	ESound_FacePlateSlip                               = 19,
	ESound_FacePlateSpring                             = 20,
	ESound_GameStart                                   = 21,
	ESound_InvitePKMatch                               = 22,
	ESound_MAX                                         = 23
};*/

// Enum TGameGfxUI.TGGfxUISceneClient.LevelUpType
/*enum LevelUpType
{
	LevelUpType_Rank                                   = 0,
	LevelUpType_PMLevel                                = 1,
	LevelUpType_MAX                                    = 2
};*/

// Enum TGameGfxUI.TGLobbyMoviesManager.MainUILayoutType
/*enum MainUILayoutType
{
	MainUILayoutType_None                              = 0,
	MainUILayoutType_Whole                             = 1,
	MainUILayoutType_RightHalf                         = 2,
	MainUILayoutType_TopRightHalf                      = 3,
	MainUILayoutType_MAX                               = 4
};*/

// Enum TGameGfxUI.TGUI_AchievementList.AchievementFilterType
/*enum AchievementFilterType
{
	AFT_All                                            = 0,
	AFT_Achieved                                       = 1,
	AFT_NotAchieved                                    = 2,
	AFT_MAX                                            = 3
};*/

// Enum TGameGfxUI.TGUI_AchievementList.VariableID
/*enum VariableID
{
	ID_Var_FrontAchievement_Names                      = 0,
	ID_Var_FrontAchievement_Descriptions               = 1,
	ID_Var_FrontAchievement_AchievedTimes              = 2,
	ID_Var_FrontAchievement_IconPath                   = 3,
	ID_Var_FrontAchievement_AchiDetail                 = 4,
	ID_Var_FrontAchievement_RestrictDesc               = 5,
	ID_Var_FrontAchievement_Finished                   = 6,
	ID_Var_FrontAchievement_Score                      = 7,
	ID_Var_AllAchievedCount                            = 8,
	ID_Var_PVPBattleAchievedCount                      = 9,
	ID_Var_WeaponProficientAchievedCount               = 10,
	ID_Var_MatchModeAchievedCount                      = 11,
	ID_Var_GameMissionAchievedCount                    = 12,
	ID_Var_EntertainmentAchievedCount                  = 13,
	ID_Var_TournarmentAchievedCount                    = 14,
	ID_Var_EventAchievedCount                          = 15,
	ID_Var_PVEModeAchievedCount                        = 16,
	ID_Var_AgainstModeAchievedCount                    = 17,
	ID_Var_AllAchievementCount                         = 18,
	ID_Var_PVPBattleCount                              = 19,
	ID_Var_WeaponProficientCount                       = 20,
	ID_Var_MatchModeCount                              = 21,
	ID_Var_GameMissionCount                            = 22,
	ID_Var_EntertainmentCount                          = 23,
	ID_Var_TournarmentCount                            = 24,
	ID_Var_EventCount                                  = 25,
	ID_Var_PVEModeCount                                = 26,
	ID_Var_AgainstModeCount                            = 27,
	ID_Var_TotalScore                                  = 28,
	ID_Var_Achievement_IDs                             = 29,
	ID_Var_Achievement_Types                           = 30,
	ID_Var_Achievement_Names                           = 31,
	ID_Var_Achievement_Descriptions                    = 32,
	ID_Var_Achievement_AchievedTimes                   = 33,
	ID_Var_Achievement_IconPath                        = 34,
	ID_Var_Achievement_AchiDetail                      = 35,
	ID_Var_Achievement_RestrictDesc                    = 36,
	ID_Var_Achievement_bHasChild                       = 37,
	ID_Var_Achievement_bShowFrontAchieved              = 38,
	ID_Var_Achievement_Finished                        = 39,
	ID_Var_Achievement_Score                           = 40,
	ID_Var_Achievement_CurLevel                        = 41,
	ID_Var_Achievement_MaxLevel                        = 42,
	ID_Var_UILabel_PageNumber_Text                     = 43,
	ID_Var_PageNum_TextField_Text                      = 44,
	ID_Var_MAX                                         = 45
};*/

// Enum TGameGfxUI.TGUI_AchievementList.FunctionId
/*enum FunctionId
{
	ID_Fun_ShowFrontAchieved                           = 0,
	ID_Fun_SetTabBtnSelected                           = 1,
	ID_Fun_MAX                                         = 2
};*/

// Enum TGameGfxUI.TGUI_EquipmentsContent.EquipmentBitType
/*enum EquipmentBitType
{
	EBT_Helemet                                        = 0,
	EBT_Facemask                                       = 1,
	EBT_Shoulder                                       = 2,
	EBT_Back                                           = 3,
	EBT_Torsor                                         = 4,
	EBT_Armband                                        = 5,
	EBT_Arms                                           = 6,
	EBT_Waist                                          = 7,
	EBT_Thigh                                          = 8,
	EBT_Feet                                           = 9,
	EBT_MAX                                            = 10
};*/

// Enum TGameGfxUI.TGUI_FriendList.SortFuncType
/*enum SortFuncType
{
	SortFuncType_Rank                                  = 0,
	SortFuncType_NickName                              = 1,
	SortFuncType_Status                                = 2,
	SortFuncType_Chummy                                = 3,
	SortFuncType_MAX                                   = 4
};*/

// Enum TGameGfxUI.TGUI_FriendList.SortType
/*enum SortType
{
	SortType_Ascend                                    = 0,
	SortType_Descend                                   = 1,
	SortType_MAX                                       = 2
};*/

// Enum TGameGfxUI.TGUI_FriendList.TagPageType
/*enum TagPageType
{
	TagPageType_FriendList                             = 0,
	TagPageType_TeamList                               = 1,
	TagPageType_BlackList                              = 2,
	TagPageType_MAX                                    = 3
};*/

// Enum TGameGfxUI.TGUI_GeneralPlayerList.GeneralPlayerStatus
/*enum GeneralPlayerStatus
{
	GPS_InGame                                         = 0,
	GPS_Idle                                           = 1,
	GPS_OffLine                                        = 2,
	GPS_InPSMGame                                      = 3,
	GPS_InTMGame                                       = 4,
	GPS_InHPGame                                       = 5,
	GPS_MAX                                            = 6
};*/

// Enum TGameGfxUI.TGUI_ItemList.AvatarUIWeaponType
/*enum AvatarUIWeaponType
{
	AvatarUIWeaponType_None                            = 0,
	AvatarUIWeaponType_Common                          = 1,
	AvatarUIWeaponType_Throw                           = 2,
	AvatarUIWeaponType_MAX                             = 3
};*/

// Enum TGameGfxUI.TGUI_PlaymateList.AchievementType
/*enum AchievementType
{
	AT_ACE                                             = 0,
	AT_MVP                                             = 1,
	AT_FK                                              = 2,
	AT_MAX                                             = 3
};*/

// Enum TGameGfxUI.TGUI_QQFriendList.ETAB
/*enum ETAB
{
	TAB_GAMEFRIEND                                     = 0,
	TAB_QQFRIEND                                       = 1,
	TAB_DOC                                            = 2,
	TAB_MAX                                            = 3
};*/

// Enum TGameGfxUI.TGUI_TeamMemberList.TMFilterType
/*enum TMFilterType
{
	TMFilterType_All                                   = 0,
	TMFilterType_Online                                = 1,
	TMFilterType_MAX                                   = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TGameGfxUI.GfxMovie_TGBase
// 0x00B0 (0x0224 - 0x0174)
class UGfxMovie_TGBase : public UGFxMoviePlayer
{
public:
	unsigned long                                      bLockInput : 1;                                   		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockKeyboard : 1;                                		// 0x0174 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAllwaysHandleKeyboard : 1;                       		// 0x0174 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bQuitClose : 1;                                   		// 0x0174 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPreload : 1;                                     		// 0x0174 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bShouldFlushInput : 1;                            		// 0x0174 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bListenWorldChange : 1;                           		// 0x0174 (0x0004) [0x0000000000000000] [0x00000040] 
	TArray< struct FString >                           AsVarPaths;                                       		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AsFunPaths;                                       		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalizeStringPath;                               		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MatchLocalizeStringPath;                          		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationUIElements;                           		// 0x01A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FlashUIElementLocalizationFile;                   		// 0x01B4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                MovieCurPageIndex;                                		// 0x01C0 (0x0004) [0x0000000000000000]              
	int                                                CurTabIndex;                                      		// 0x01C4 (0x0004) [0x0000000000000000]              
	struct FString                                     MoviePath;                                        		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MovieName;                                        		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Align;                                            		// 0x01E0 (0x0001) [0x0000000000000000]              
	struct FVector2D                                   UIOffset;                                         		// 0x01E4 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   UIDimension;                                      		// 0x01EC (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           BaseHardCodedStrings;                             		// 0x01F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FInputInfo >                        InputInfoArraySupportPortugueseLatin;             		// 0x0200 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnButtonClicked__Delegate;                      		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnButtonClickedWithInt__Delegate;               		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1780 ];

		return pClassPointer;
	};

	void SetFocus ( unsigned long bFocus );
	void ClearJsonObjects ( );
	void ConvertToASObject ( class UJsonObject* Root );
	TArray< class UJsonObject* > GetJsonObjectArray ( class UJsonObject* Root );
	void TestPrintJsonData ( TArray< class UJsonObject* > Root );
	void SetMoviePathByScreenResolutionScale ( );
	void ReCalcPosition ( );
	void ResetPosition ( );
	void SetVisiable ( unsigned long bVisible );
	void GotoPage ( int PageIndex );
	void GotoTab ( int TabIndex );
	void ShowQTCheckBox ( );
	void CloseRightClickMenu ( );
	void OpenRightClickMenu ( );
	void ShowASLog ( struct FString strLog );
	void GetMatchInfo ( int CurrentIds, int* PlayerMaxNum, struct FString* MatchName );
	struct FString GetMatchNames ( int CurrentIds );
	struct FString GetMapNames ( int CurrentIds );
	void ShowErrorMessage ( struct FString MessageContents );
	void Close ( unsigned long Unload );
	void SetParent ( class UGfxMovie_TGBase* Parent );
	float GetSecondsTime ( );
	void SetVisible ( unsigned long bVisible );
	class ULocalPlayer* GetPlayerOwner ( int PlayerIndex );
	void SetScreenResolution ( int ResX, int ResY, unsigned long bFullScreen );
	class UTGOnlineTask* GetOnlineLogicTask ( );
	class UTGOnlineMultiGameLobby* GetOnlineLogicLobby ( );
	class UTGOnlineMultiGameRoom* GetOnlineLogicRoom ( );
	class UTGOnlineLogic* GetOnlineLogic ( struct FName LogicName );
	void ActionScriptVoidIntIntIntIntIntString ( struct FString Path, int Param1, int Param2, int Param3, int Param4, int Param5, int Param6, int Param7, struct FString Param8 );
	struct FString ActionScriptStringString ( struct FString Path, struct FString Value );
	void ActionScriptVoidBoolBool ( struct FString Path, unsigned long bool1, unsigned long bool2 );
	void ActionScriptVoidBoolNumberStringBoolString ( struct FString Path, unsigned long bool1, int number2, struct FString str3, unsigned long bool4, struct FString str5 );
	void ActionScriptVoidBoolNumber ( struct FString Path, unsigned long bool1, int number1 );
	void ActionScriptVoidBoolNumberNumberBoolNumber ( struct FString Path, unsigned long bool1, int number1, int number2, unsigned long bool2, int number3 );
	void ActionScriptVoidStringStringBooleanString ( struct FString Path, struct FString str1, struct FString str2, unsigned long flag, struct FString str3 );
	void ActionScriptVoidVoid ( struct FString Path );
	void ActionScriptVoidIntBoolean ( struct FString Path, int arg1, unsigned long arg2 );
	void ActionScriptVoidIntIntIntIntIntInt ( struct FString Path, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6 );
	void ActionScriptVoidIntIntIntInt ( struct FString Path, int arg1, int arg2, int arg3, int arg4 );
	void ActionScriptVoidIntIntInt ( struct FString Path, int arg1, int arg2, int arg3 );
	void ActionScriptVoidIntInt ( struct FString Path, int arg1, int arg2 );
	void ActionScriptVoidIntStringStringIntInt ( struct FString Path, int arg1, struct FString arg2, struct FString arg3, int arg4, int arg5 );
	void ActionScriptVoidIntStringString ( struct FString Path, int arg1, struct FString arg2, struct FString arg3 );
	void ActionScriptVoidIntString ( struct FString Path, int arg1, struct FString arg2 );
	void ActionScriptVoidBooleanString ( struct FString Path, unsigned long arg1, struct FString arg2 );
	void ActionScriptVoidBoolean ( struct FString Path, unsigned long Arg );
	void ActionScriptVoidInt ( struct FString Path, int Arg );
	void ActionScriptVoidStringNumber ( struct FString Path, struct FString Str, float Num );
	void ActionScriptVoidIntStringInt ( struct FString Path, int arg1, struct FString arg2, int arg3 );
	void JSonActionScriptVoidIntStringDouble ( struct FString Path, int arg1, struct FString arg2, struct FDouble arg3 );
	void ActionScriptVoidIntStringBoolean ( struct FString Path, int arg1, struct FString arg2, unsigned long arg3 );
	void ActionScriptVoidStringBoolean ( struct FString Path, struct FString arg1, unsigned long arg2 );
	void ActionScriptVoidString ( struct FString Path, struct FString Arg );
	int EncodeCharSet ( TArray< unsigned char >* CharSetArray );
	void GetCurrentInputInfoArray ( TArray< struct FInputInfo >* InputInfoArray );
	int GetCharSetByInputType ( unsigned char InputType );
	int GetInputLengthByType ( unsigned char InputType );
	unsigned char GetInputTypeFromString ( struct FString InputName );
	void ConfineUserInput ( struct FString InputName, struct FString RootPath );
	class UTGLobbyMoviesManager* GetLobbyMoviesManager ( );
	class UGfxMovie_UIContainer* GetUIContainer ( );
	class UTGModeGuideController* GetMatchModeController ( );
	class UTGGfxUISceneClient* GetUIClient ( );
	float GetTimerRate ( struct FName TimerFuncName, class UObject* inObj );
	float GetTimerCount ( struct FName inTimerFunc, class UObject* inObj );
	bool IsTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void PauseTimer ( unsigned long bPause, struct FName inTimerFunc, class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
	void OnSetMovieShield ( unsigned long bShieldVisible );
	float ComputeRate ( int NumberA, int NumberB );
	bool SetInputFocus ( unsigned long bFocus );
	void AddESCKeyFunction ( );
	void ClearESCKeyFunction ( );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void NotifyMovieHide ( unsigned long bHide );
	struct FString SPrintf ( float ConvertData, struct FString Format );
	void OnHideMovie ( unsigned long bHide );
	void OnCloseMovie ( );
	void OnOpenMovie ( );
	void SetActivityArea ( int ActWidth, int ActHeight );
	class UTGOnlineClient* GetOnlineClient ( );
	void LocalMsgBox ( struct FString MsgHead, struct FString MsgTitle, struct FString MsgContent, struct FString Filename, unsigned long IsTips );
	void MessageBox ( unsigned char Style, struct FString Title, struct FString Message, struct FScriptDelegate OnOk, struct FScriptDelegate OnCancel, float CloseTime, struct FString OkText, struct FString CancelText, unsigned long bNotAutoClose, struct FScriptDelegate OnOkWithParameter );
	class UGfxMovie_TGBase* GetMovie ( class UClass* MovieClass, unsigned long bCreateNew );
	void HideMovie ( class UClass* MovieClass, unsigned long bHide );
	void CloseMovie ( class UClass* MovieClass, unsigned long bUnload );
	class UGfxMovie_TGBase* OpenMovie ( class UClass* MovieClass, unsigned long bStartPaused );
	bool IsMovieOpen ( class UClass* MovieClass );
	void Unload ( );
	int AS_NotifyLoaded ( unsigned long bWorldChangeEvent );
	void LoadLocalizationStringsInFlashForThisMovie ( );
	void OnUnload ( );
	void OnLoad ( );
	void ClearMovieInfo ( );
	void LoadMovieInfo ( );
	bool eventStart ( unsigned long StartPaused );
	struct FString GetCurrentLanguageExt ( );
	void ChangeWorldBGPicture ( int WorldIndex );
	void AutoForceWindowMode ( );
	void AS_Log ( struct FString Text );
	bool OnButtonClickedWithInt ( int SelectedBagIndex );
	bool OnButtonClicked ( );
};

UClass* UGfxMovie_TGBase::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ChanelRoomList
// 0x00CC (0x02F0 - 0x0224)
class UGfxMovie_ChanelRoomList : public UGfxMovie_TGBase
{
public:
	struct FPointer                                    VfTable_IUIDataStoreSubscriber;                   		// 0x0224 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FUIDataStoreBinding                         DataSource;                                       		// 0x0228 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Row;                                              		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Column;                                           		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentSelectRoom;                                		// 0x0260 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0264 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameLobby*                     OnlineMultiGame;                                  		// 0x0268 (0x0004) [0x0000000000000000]              
	class UTGModeGuideController*                      ModeGuideController;                              		// 0x026C (0x0004) [0x0000000000000000]              
	struct FString                                     SNSUin;                                           		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      SNSRoomID;                                        		// 0x027C (0x0008) [0x0000000000000000]              
	int                                                SNSZoneID;                                        		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                SNSChannelID;                                     		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                SNSRequestId;                                     		// 0x028C (0x0004) [0x0000000000000000]              
	unsigned char                                      SNSTraceType;                                     		// 0x0290 (0x0001) [0x0000000000000000]              
	unsigned char                                      SortTypes;                                        		// 0x0291 (0x0001) [0x0000000000000000]              
	unsigned char                                      FilterRoomTypes;                                  		// 0x0292 (0x0001) [0x0000000000000000]              
	unsigned long                                      bNeedTraceRoom : 1;                               		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDescend : 1;                                     		// 0x0294 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bMovieLoaded : 1;                                 		// 0x0294 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClearData : 1;                                   		// 0x0294 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFirstUpdateRoomList : 1;                         		// 0x0294 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bNeedShowChannel : 1;                             		// 0x0294 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FMultiGameRoomFilter                        Filter;                                           		// 0x0298 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      RoomIDArray;                                      		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RoomFlagsArray;                                   		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MapIdArray;                                       		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      EnterRoomID;                                      		// 0x02CC (0x0008) [0x0000000000000000]              
	TArray< struct FQWord >                            roomIDList;                                       		// 0x02D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RoomItemIDArray;                                  		// 0x02E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BeginSeconds;                                     		// 0x02EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1781 ];

		return pClassPointer;
	};

	void RefreshRoomList ( class UUIDataStore* DataStore );
	void ClearBoundDataStores ( );
	void GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores );
	void NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex );
	bool RefreshSubscriberValue ( int BindingIndex );
	struct FString GetDataStoreBinding ( int BindingIndex );
	void SetDataStoreBinding ( struct FString MarkupText, int BindingIndex );
	void RefreshDataStoreBindings ( );
	void OnFindRoomBtnClicked ( );
	bool OnConfirmEnterTutorial ( );
	void OnEnterTutorial ( );
	struct FString GetPVESubModeName ( int SubModeId );
	bool IsPVEGame ( int ModeId );
	bool IsSpecialMatch ( int ModeId );
	bool bCanEnterRoom ( struct FMultiGameLobbyRoomInfo RoomSingle );
	void ReqSortRoomByDefault ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void InsertSingleRoom ( int FirstIndex, int ListLength, struct FMultiGameLobbyRoomInfo SingleRoom, TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoListA );
	void ReqSortRoomByState ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void ReqSortRoomByPlayerCount ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void ReqSortRoomByMatchMap ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void ReqSortRoomByMatchMode ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void ReqSortRoomByRoomName ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void ReqSortRoomByID ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void OnSortRoomList ( unsigned char ReqSortType, unsigned long bDescending );
	void TestFunction ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void RoomListFilted ( TArray< struct FMultiGameLobbyRoomInfo >* RoomInfoList );
	void OnReqRoomListFilterChanged ( unsigned char FilterNumber );
	void OnResJoinLiveGame ( int ErrorCode );
	void OnEnterMoreWatcherRoom ( );
	void ShowRoomList ( TArray< struct FMultiGameLobbyRoomInfo > RoomInfoList );
	struct FString GetMatchTargetName ( int MatchTypeIndex, unsigned char RuleType, int RuleValue );
	void OnUpdateRoomListData ( );
	void OnQueryRoomList ( int ErrorCode, struct FString* ErrorDesc );
	bool OnMessageBox_Cancel ( );
	bool OnMessageBox_Confirm ( );
	void TraceEnterRoom ( );
	void OnExpertListReturn ( int ErrorCode, struct FString* ErrorDesc );
	void OnResponseSwitchChannel ( int ErrorCode, int EnterMainChannelId, int EnterSubChannelId );
	void OnResponseSwitchZone ( int ErrorCode, int EnterMainChannelId, int EnterSubChannelId );
	void OnNtfZoneFull ( int ErrorCode, struct FString ErrorContent );
	void SwitchZoneTimeOut ( );
	void RequestChannelList ( );
	void OnRoomFlagSpeculatable ( unsigned long bSpeculatable );
	void ClearFlag ( int Mask, int* flag );
	void SetFlag ( int Mask, int* flag );
	void RequestDataByFilter ( );
	bool OnEnterRoomFailed ( );
	void OnServerEnterRoom ( int ErrorCode, struct FString* ErrorDesc );
	void QuickEnter ( );
	void EnterRoomByPassword ( struct FString Password, unsigned long bFollow );
	void EnterRoom ( );
	void SelectRoomByIndex ( int Index );
	void OnQueryRoomInfoReturn ( int ErrorCode, struct FMultiGameLobbyRoomInfo Info, struct FString* ErrorDesc );
	void EnterRoomById ( struct FQWord RoomID );
	bool OnCallBackInputEnterRoomByNone ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void EnterRoomByIndex ( int Index, int bMoreWatcher );
	bool OnConfirmCloseRoom ( );
	void CloseRoomByIndex ( int Index );
	void OnInputRoomItemId ( int CurRoomItemId );
	void CreateRoom ( );
	void eventOnClose ( );
	void OnClearData ( );
	void SetSpecialMapIconPath ( );
	void OnResAllSubChannelList ( int ErrorCode, int ChannelCount );
	void SetChannelInfo ( );
	void SetPlayerStatus ( );
	void OnCloseNewGuideTips ( );
	void ShowNewGuideTips ( );
	void SetNewGuideCanClose ( );
	bool IsFinishAllLocalMatch ( );
	void OnNtfLocalMatchInfo ( );
	void ConfigUI ( );
	void AddDelegates ( );
	void OnLoad ( );
	bool GetIsTraditionMode ( );
	void SetFilter ( struct FMultiGameRoomFilter inFilter );
	void ReqRoomListByTimer ( );
	void ReqRoomList ( );
	bool EscKeyFunction ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ChanelRoomList::pClassPointer = NULL;

// Class TGameGfxUI.TGAvatarMovieProxy
// 0x0004 (0x0040 - 0x003C)
class UTGAvatarMovieProxy : public UTGMovieProxy
{
public:
	class UGfxMovie_TGBase*                            OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1782 ];

		return pClassPointer;
	};

	bool SetExternalTexture ( struct FString Resource, class UTexture* Texture );
};

UClass* UTGAvatarMovieProxy::pClassPointer = NULL;

// Class TGameGfxUI.TGDataStore_RoomList
// 0x0038 (0x00B0 - 0x0078)
class UTGDataStore_RoomList : public UUIDataStore
{
public:
	int                                                PageIndexOnServer;                                		// 0x0078 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                RequestPageIndexOnServer;                         		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CachePages;                                       		// 0x0080 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentPage;                                      		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CountPerPage;                                     		// 0x0088 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USurface*                                    DefaultMapIcon;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	struct FMultiGameRoomFilter                        Filter;                                           		// 0x0090 (0x0010) [0x0000000000000000]              
	unsigned char                                      CurrentRequest;                                   		// 0x00A0 (0x0001) [0x0000000000000000]              
	TArray< struct FRoomData >                         RoomList;                                         		// 0x00A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1783 ];

		return pClassPointer;
	};

	bool eventSetFieldValue ( struct FString FieldName, int ArrayIndex, struct FUIProviderScriptFieldValue* FieldValue );
	bool eventGetFieldValue ( struct FString FieldName, int ArrayIndex, struct FUIProviderScriptFieldValue* FieldValue );
	class USurface* GetMapIconById ( int MatchType, int MapId );
	void OnRoomListDataChange ( TArray< struct FRoomData > newRoomList );
	void OnQueryRoomList ( int ErrorCode, struct FString* ErrorDesc );
	void PageDown ( );
	void PageUp ( );
	void RequestSeverDataByTimer ( );
	void SetFilter ( struct FMultiGameRoomFilter inFilter );
	void RequestServerData ( int StartPage );
};

UClass* UTGDataStore_RoomList::pClassPointer = NULL;

// Class TGameGfxUI.TGGameInteraction
// 0x0000 (0x01B0 - 0x01B0)
class UTGGameInteraction : public UUDKGameInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1784 ];

		return pClassPointer;
	};

};

UClass* UTGGameInteraction::pClassPointer = NULL;

// Class TGameGfxUI.TGGfxUISceneClient
// 0x021C (0x0448 - 0x022C)
class UTGGfxUISceneClient : public UTGUISceneClient
{
public:
	class UGfxMovie_TGBase*                            ScoreboardMovie;                                  		// 0x022C (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            MoviesOpenInRoom;                                 		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            CommonOpenMovies;                                 		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            NeedPreloadMovies;                                		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGfxMovie_TGBase* >                  OpenMovies;                                       		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USwfMovie* >                         SwfMovies;                                        		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGfxMovie_UIContainer*                       ContainerMovie;                                   		// 0x026C (0x0004) [0x0000000000000000]              
	unsigned long                                      bInMatch : 1;                                     		// 0x0270 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSkipScoreboard : 1;                              		// 0x0270 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRoomMovieOpened : 1;                             		// 0x0270 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedReturnChannelList : 1;                       		// 0x0270 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOutOfReturnFunction : 1;                         		// 0x0270 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPlayBackgroundMusic : 1;                         		// 0x0270 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bFirstPlay : 1;                                   		// 0x0270 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bLoopPlaySound : 1;                               		// 0x0270 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bAudioFinishedByStop : 1;                         		// 0x0270 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bQTSoundPlay : 1;                                 		// 0x0270 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bTaskLevelAchiShowing : 1;                        		// 0x0270 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      IsAsObserverWarning : 1;                          		// 0x0270 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      IsFromCloseAllMovie : 1;                          		// 0x0270 (0x0004) [0x0000000000000000] [0x00001000] 
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0274 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             MusicAC;                                          		// 0x0278 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   PreSound;                                         		// 0x027C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SwitchSound;                                      		// 0x0280 (0x0004) [0x0000000000000000]              
	int                                                GerneralPlayerListTag;                            		// 0x0284 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           TaskLevelAchiQueue;                               		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastScoreboardName;                               		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGfxMovie_TGBase* >                  TEventMovieList;                                  		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     MovieHelper;                                      		// 0x02AC (0x0004) [0x0000000000000000]              
	class UTGLobbyMoviesManager*                       LobbyMoviesManager;                               		// 0x02B0 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   LastChatChannelRoomID;                            		// 0x02B4 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   CurrentChatChannelRoomID;                         		// 0x02BC (0x0008) [0x0000000000000000]              
	struct FString                                     ShareVideoPath;                                   		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MovieClassNames;                                  		// 0x02D0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     strHardCode[ 0xF ];                               		// 0x02DC (0x00B4) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UAudioComponent*                             UIAC;                                             		// 0x0390 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             RoleAC;                                           		// 0x0394 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class USoundCue* >                         UISounds;                                         		// 0x0398 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMessageBoxMessage >                MessageQueue;                                     		// 0x03A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnMoviePreloadComplete;                           		// 0x03B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMessageBoxParam                            MBParam;                                          		// 0x03BC (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   LoginLobbyBackgroundMusicPopMusic;                		// 0x041C (0x0004) [0x0000000000000000]              
	struct FString                                     LoginLobbyBackgroundMusicPopMusicPath;            		// 0x0420 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   LoginLobbyBackgroundMusicOriginal;                		// 0x042C (0x0004) [0x0000000000000000]              
	struct FString                                     LoginLobbyBackgroundMusicOriginalPath;            		// 0x0430 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMoviePreloadCompleteDelegate__Delegate;       		// 0x043C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136320 ];

		return pClassPointer;
	};

	void ToggleMovie ( struct FString SwfName );
	bool IsMovieOpened ( class UClass* MovieClass );
	class UClass* FindMovieClassBySwfName ( struct FString SwfName );
	void OpenLittleShopRoom ( int GroupID );
	void SetNewCommodityNum ( int Num );
	void StopSecondsClock ( float* Seconds );
	void StartSecondsClock ( );
	void OpenHelpHelp ( );
	void PopUpHappyMatchInviteMovie ( );
	void NotifyAllOpenMovieWorldChange ( int CurWorldIndex );
	void LobbyShowRootButton ( unsigned long IsShow, unsigned long IsStillShow );
	void UpdateLocalDate ( );
	void StopUpdateDateTimer ( );
	void StartUpdateDateTimer ( int ExpireTime );
	void OpenTeamDataRecordUI ( unsigned char nRecordType );
	void OpenPropShiftMovie ( struct FShiftPropInfo CurPropInfo );
	void CallPlayerReturnRoom ( );
	void EnterHappyMatchUI ( );
	void PushLocalMessage ( int Type, struct FString From, struct FString to, struct FString Content );
	void StopEnterRoomTimer ( );
	void SetCurrentRoomInfo ( );
	void StartEnterRoomTimer ( int MainChannelID, int SubChannelID, int RoomID );
	bool GetCurrentNoviceVideoTypeId ( int ModeId, int* UrlId );
	void ClearSpeakerMessage ( );
	void StopSpeakerMessageTimer ( );
	void StartSpeakerMessageTimer ( );
	bool GetItemNameTimeLimitByItemIdAndTimeLimit ( int ItemId, int TimeHours, struct FString* ItemName );
	bool GetItemNameByItemId ( int ItemId, struct FString* ItemName );
	void UpdatePlayerExp ( );
	class USoundCue* LoginLobbyGetBackgroundMusicByValue ( int Value );
	class USoundCue* LoginLobbyGetBackgroundMusic ( );
	void LoginLobbyUpdateBackgroundMusic ( );
	class UObject* GetMovieHelper ( );
	void ChatMovieBackToChannel ( );
	void DelayChatMovieBackToChannel ( );
	void OpenPlayerComebackGift ( );
	void OpenChatMovie ( );
	void ClearRankListDailyDataFlushTimer ( struct FName func, class UObject* Obj );
	void SetRankListDailyDataFlushTimer ( int Time, struct FName func, class UObject* Obj );
	void ClearRankListTotolDataFlushTimer ( struct FName func, class UObject* Obj );
	void SetRankListTotolDataFlushTimer ( int Time, struct FName func, class UObject* Obj );
	void ShowExpiredList ( unsigned long bShowExpiredProp );
	void SetHasTaskAcceptFlag ( unsigned long bFlag );
	void SetHasTaskFinishedFlag ( unsigned long bFlag );
	void ShowSystemMsgInChatInMatch ( struct FString msg );
	bool bIsUsingIntegratedVideoCard ( );
	float GetCurrentAverageFps ( );
	bool GetCurrentFpsInfo ( int MapId, float* FrameCnt, float* FpsTime );
	void UpdateBackGroudButtonState ( unsigned long bHideFocus, struct FString CurButtonName );
	void CloseRightCommonMovies ( );
	void PlayRoleSoundByItemId ( int nRoleItemId );
	void HidenAvatarLoading ( );
	void ShowAvatarLoading ( );
	void ReportFpsTips ( int OptionType, int CurrentLevel, unsigned long DonntShowAgainFlag );
	unsigned char GetPlayerInWhichSystem ( );
	void SetPlayerInWhichSystem ( unsigned char CurUISystermType );
	bool bIsChestMovieOpen ( );
	bool OnPlayShareVideo ( );
	void eventDoPlayVideo ( struct FString VideoPath );
	void QuickShowPalyerList ( );
	void ShowCampList ( unsigned long bShow );
	void ReplaySetMouseEnabled ( unsigned long bEnabled );
	void ReplaySetPlayState ( unsigned long bPlaying );
	void ReplaySetForwardSpeedText ( struct FString Text );
	void ReplaySetViewModeText ( struct FString Text );
	void ReplaySetCurrentTime ( int TimeInSeconds );
	bool ReplaySetTotalTime ( int TimeInSeconds );
	void ReplaySetSelectedButton ( struct FString ButtonName );
	void ReplayHidePlayBar ( );
	void ReplayShowPlayBar ( );
	void SetWebBrowserExternalTexture ( class UTexture* ExternalTexture );
	void OpenWebBrowser ( );
	void eventStopConnDS ( int ReasonCode );
	class UGfxMovie_TGBase* OpenMatchWaitMovie ( unsigned char CurMatchType, int ExpectTime, unsigned char PlayerType );
	void ClearNewAchiLevelUpDelay ( );
	void OnNewAchievedArrived ( );
	void OnLevelUp ( unsigned char CurLevelUpType );
	void Event_RemoveDelegateSizeChanged ( class UGfxMovie_TGBase* Obj );
	void Event_AddDelegateSizeChanged ( class UGfxMovie_TGBase* Obj );
	void SetQTPanelActivityArea ( int ActWidth, int ActHeight );
	void KillChatInputFocus ( );
	void eventOnCloseGfxMovieUI ( );
	void OpenLeaveMessageUI ( unsigned char MessageType, struct FString PlayerUin, struct FString PlayerNickName );
	void OnQuitGameShowInfo ( struct FScriptDelegate OnConfirm, struct FScriptDelegate OnDisagree );
	void ArrowChangeViewTarget ( int Dir );
	void ClearSpectatorMovieSelection ( );
	void NotifyViewTargetChanged ( );
	void UpdateBothSides ( );
	void SetMouseClickEnabled ( unsigned long bEnabled );
	void ShowSpectatorMovie ( unsigned long bShow );
	void ToggleSpectatorMovieVisible ( );
	void SetSpectatorMovieVisible ( unsigned long bVisible );
	void OpenAchiAwardMovie ( );
	void DelayOpenAchiAwardMovie ( );
	void CloseChangeBagMovie ( );
	void OpenChangeBagMovie ( class ATGPawn* Pawn );
	class UGameViewportClient* GetGameViewportClient ( );
	struct FString SysSettingsGetVariableString ( struct FString Path );
	void SysSettingsConfigVideoSettingsMovie ( );
	void SysSettingsSetScreenResolution ( int ResX, int ResY, unsigned long bFullScreen );
	void SysSettingsConfigGameSettingsMovie ( );
	void SysSettingsConfigKeyboardSettingsMovie ( );
	void SysSettingsConfigSocialSettingsMovie ( );
	void SysSettingsSetKeyboardSettingsData ( );
	void SysSettingsConfigAudioSettingsMovie ( );
	void SysSettingsGetVariableStringArray ( struct FString Path, int Index, TArray< struct FString >* Arg );
	bool SysSettingsGetVariableBool ( struct FString Path );
	float SysSettingsGetVariableNumber ( struct FString Path );
	class ULocalPlayer* SysSettingsGetPlayerOwner ( );
	void SysSettingsChangeMusicVolume ( float Volume );
	void InGameSendTacticalCommand ( struct FString TacticalCommand, int TacticalCommandID );
	void InGameOpenMessageBoxMovie ( );
	void InGameOpenChangedBag ( );
	void InGameOpenQuitOptionMovie ( );
	void InGameOpenSystemSettingsMovie ( );
	void InGameNotifyPickupPVEChest ( struct FString NickName );
	void PlayGameStartSound ( );
	bool IsChatInGameMovieLoaded ( );
	void InGameFastResponseWhisper ( );
	void InGameFastShout ( int Index );
	void InGameChatPersonalMatchSystemBroadcast ( int Type, int Num, struct FString NickName );
	void InGameOnChatReceivedPlayerStatusChanged ( struct FString NickName, int StatusChangeType, unsigned long bAlwaysObserver );
	void InGameChatMessagePageMoveBackward ( );
	void InGameChatMessagePageMoveForward ( );
	void InGameChatTalkToTeammate ( );
	void InGameChatTalkToAll ( );
	void InGameChatTalkToAllies ( );
	void InGameSetGameParameters ( unsigned long bIsNoCampMode, unsigned long bHasClan, unsigned long bIsIndMode, unsigned long bIsSpecialMatch );
	bool bInGameCanChat ( );
	void InGameChatShowInput ( unsigned long bShow );
	void InGameChatShowCursor ( unsigned long bShow );
	void InGameChatLockKeyboard ( unsigned long bLock );
	void InGameChatLockInput ( unsigned long bLock );
	void InGameCloseHelpMenu ( );
	void InGameShowHelpMenu ( );
	void ShowRespawnProcess ( unsigned long ShowFlag );
	void KeyMaskAllUser ( );
	void ShowQTalkMaskWin ( );
	void ShowStoryGameMenu ( );
	void ShowMenu ( );
	void eventIsOpenReconnectMovie ( unsigned long bIsOpen );
	void eventShowSystemMessage ( struct FString Content );
	void SwitchWindowMode ( );
	void DownVideoSetting ( );
	void OpenLowFpsWarnning ( );
	void TeamUpateGeneralTeamMate ( );
	void ResShowTeamBadges ( );
	void ResSetBadgePacked ( TArray< struct FPackedBadgeInfo > PackedArray );
	void TeamChangeTeamName ( struct FString NewTeamName );
	void ReqGetTeamInfo ( struct FString OwnerUin );
	void UpdateTeamRecruitInfo ( unsigned char RecruitLevel, unsigned char RecruitTypes );
	void OpenInputMovie ( struct FScriptDelegate OnConfirm, struct FScriptDelegate OnDisagree, unsigned long bTeamRoom, unsigned char CommandTypes, struct FString ShowText );
	void TeamReceiveChatMessage ( struct FString Content );
	void SetTimerGetDetailTeamInfo ( );
	void TeamQuitEnterLobby ( );
	void UpdateTeamBageInfoInExpUI ( );
	void TeamSetSearchTeamResult ( int ErrorCode );
	int TeamGetMemberPageIndex ( );
	void ApplyToJoinTeamSuccessful ( );
	void OnReqFireMember ( struct FString SafeCode );
	void TeamUpdateTeamRankList ( int CurPage, int MaxPage, TArray< struct FRankTeamInfo > TeamArray, struct FString SearchTeamName );
	void TeamShowMembersList ( unsigned long bIsAll );
	void TeamShowMemberByContribution ( TArray< struct FTeamMember > MemberArray );
	void TeamShowApproveList ( TArray< struct FApproveInfo > ApproveArray );
	struct FString TeamGetOwnerUIN ( );
	void TeamSetMemberMax ( int Max );
	void NotifyFreezeChange ( unsigned long bFreeze );
	void NotifyTeamMemberChange ( unsigned char MemberPost );
	void TeamUpdateTeamLeader ( struct FString LeaderName );
	void TeamSetTimer ( );
	void TeamClearTimer ( );
	void TeamLockInput ( unsigned long bLock );
	bool bIsTeamRoomOpen ( );
	void OnInitalMyTeamListUI ( );
	void UpdateTeamLevel ( unsigned char TeamLevel );
	bool InputMovieShowErrorText ( struct FString ErrorText );
	void CloseInputMovie ( );
	void ShowTaskComplete_LevelUp_NewAchi_UI ( struct FString Type );
	void EndShowTaskComplete_LevelUp_NewAchi_UI ( );
	void BeginShowTaskComplete_LevelUp_NewAchi_UI ( );
	void ClearDelayCheckAndRecommendTaskFinished ( );
	void DelayCheckAndRecommendTaskFinished ( );
	void CheckAndRecommendTaskFinished ( );
	void RemoveTaskFinishTimer ( struct FName func, class UObject* Obj );
	void SetCheckTaskFinishTimer ( struct FName func, class UObject* Obj );
	void RemoveTimerForTask ( class UTGTaskTimerObject* timeObj );
	bool IsTaskTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void AddTaskTimer ( class UTGTaskTimerObject* timeObj );
	void InGameSetKickPlayerData ( struct FString nPlayerUinsString, struct FString nPlayerNickNamesString, struct FString nBeVoteCountsString, struct FString nTargetVotesToKickString, int TeamIndex, int DisableVoteCountingDown, struct FString nHumanHerosString );
	void CleanUpGeneralPlayerListDelegates ( );
	void CloseConnectingMovie ( );
	void TaskCheckClientReport ( int TaskID, unsigned long bAddTask );
	void ShowPostTaskTip ( );
	void LockInput_JoinInGame ( unsigned long bIsLockInputInFrameJoinInGame );
	bool IsQuickGameMovieOpen ( );
	void RefreshQuickGameMovie ( );
	void SetPlayerInRoomList ( );
	void SetbIsInSPMOrTMGeneralList ( );
	void SetPlayerInHappyMatchRoom ( );
	void SetPlayerInOnlineMatchRoom ( );
	void SetPlayerInOnlineMatch ( );
	void SetPlayerInTechnicalMatch ( );
	void SetPlayerInTeamMatch ( );
	void SetPlayerInSinglePersonalMatch ( );
	void SetPlayerInChannelList ( );
	void SetPlayerInTeamRoom ( );
	void SetPlayerInRoom ( );
	void OnCallBackNewGuideOpened ( );
	void ReloadUIContainerEndTask ( );
	void EndStandaloneGame ( unsigned long bQuitQption );
	void SetPlayerInTutorialLevel ( );
	void StartStandaloneGame ( );
	void StartMatch ( );
	void ResetUIScreenResolution ( );
	void OnOpenQQTalkMovie ( );
	void OpenQQTalkMovie ( float timeShow );
	void OpenUIContainerEx ( );
	void DisableChangeBagAndRole ( unsigned long bDisabled );
	void GeneralInputLock ( unsigned long bNeedLock );
	void LockFunctionalButtons ( unsigned long bLock );
	void SysSettingsSaveSuccess ( );
	void OnLeaveRoomResult ( int ErrorCode, int LeaveReason, struct FString* ErrorDesc );
	bool GetbSkipScoreboard ( );
	void ReloadUIContainerWhenLoadMapFailed ( );
	void GetPreLoadMovies ( );
	void ReloadUIContainerWhenReturnRoom ( );
	void ConnectDSFailedTimer ( );
	bool bNeedObserverReturnRoom ( );
	void OnShowMCSSaveResult ( );
	void EndMatch ( );
	void NotifyShowQTalkText ( );
	void ReturnHappyMatchRoom ( );
	void ReturnModeMatchPanel ( );
	void ReturnTeamMatchRoom ( );
	void ReturnTechnicalMatchRoom ( );
	void ReturnSingleMatchRoom ( );
	void ReturnAvatarRoom ( );
	void ReturnRoom ( );
	bool AutoPromptSaveVideo_OnOK ( );
	void eventAutoPromptSaveVideo ( );
	void CloseScoreboard ( );
	void eventNotifyLevelPostLoad ( );
	void eventShowBuyingCommodityTip ( );
	void OpenWebWindow ( struct FString MovieTitle, struct FString MovieUrl, int MovieWidth, int MovieHeight, struct FScriptDelegate WebWindowClosedCallback, unsigned long bShowControlBar, struct FString TitleIconPath, unsigned long bShowBangLoading );
	void OnRechargeWindowClosed ( );
	void ShopRecharge ( );
	void ShopShowGiveResultInfo ( struct FString ConsignneUin, struct FString ResultContent, unsigned long bSuccessfulResult );
	void ShopClearGPCartList ( );
	void ShopClearOtherCartList ( );
	void ShopCleanupCart ( );
	void ShopSetDefaultRolePropId ( struct FUniquePropId PropId );
	void OnShopSetBuyTimer ( unsigned long bSetTimer );
	void OnGiveFriendSingleCommodity ( struct FFCommodityDataRaw ItemElement, unsigned char BuyTypes );
	void BuyCommodityCart ( TArray< struct FFCommodityBuyInfo > GPCartList, TArray< struct FFCommodityBuyInfo > OtherCartList, TArray< int > PriceArray, struct FString sCommodityType, struct FScriptDelegate OnOk );
	void ClearAvatarAsyncLoad ( );
	void BuyCommoditySingle ( unsigned char BuyCommodityTypes, int CommodityID, struct FString ConsignneUin, struct FString ConsignneNickName, int PriceSelect, int ConsignneRequestId, struct FUniquePropId RepairPropId );
	void RequestFriendDemand ( struct FString Uin, int CommodityID );
	void RequestInviteFriend ( struct FString Uin );
	void OnSyncReturnRoom ( );
	void OpenScoreBoard ( );
	void TestChestData ( );
	void ShowScoreboard ( );
	void ShowPersonalMatchScoreBoard ( );
	void ShowTeamMatchScoreBoard ( );
	void ShowHappyMatchScoreBoard ( );
	void ResetReturnRoom ( );
	void ConnectDSFailed ( );
	void SetbNeedReturnChannelList ( unsigned long bShouldNeedReturnChannelList );
	void SkipScoreboard ( unsigned long bSkip );
	class UGfxMovie_TGBase* GetOpenMovieByIndex ( int Index );
	void OpenRightClickMenu ( class UClass* MovieClass );
	void GetOpenMovies ( TArray< class UGfxMovie_TGBase* >* ArrayMovies );
	class UGfxMovie_TGBase* GetOpenMovie ( class UClass* MovieClass, unsigned long bCreateNew );
	void CloseAllMovies ( unsigned long bUnload );
	void OnMovieLoadComplete ( struct FString LoadedMovie );
	void SetChatInputFocus ( );
	void EscKeyFunction ( );
	void EnterKeyFunction ( );
	bool bPlayerInRoom ( );
	bool bPlayerInChannel ( );
	void NtfPlayerInUISystem ( unsigned char UISystemType );
	void UpdateNickName ( struct FString PlayerName );
	bool IsLobbyMovieOpen ( );
	bool IsInputMovieOpen ( );
	bool IsChatInMatchMovieOpen ( );
	bool IsChatMovieOpen ( );
	bool IsMovieOpen ( class UClass* MovieClass );
	void ClosePKShieldUI ( );
	void OnAudioFinished ( class UAudioComponent* FinishAC );
	void StopPlaySound ( );
	void PlayPreSound ( );
	void PlayUISoundById ( unsigned char SoundId );
	void DealPlayUISound ( class USoundCue* SC, class UAudioComponent** SoundAC );
	void PlayUISound ( class USoundCue* SC );
	void PlayRoleSound ( class USoundCue* SC );
	void PlaySound ( class USoundCue* SC, unsigned long bLoopPlay, unsigned long ReplaySameMusic );
	void SetSoundVolume ( float Volume );
	void HideMovie ( class UClass* MovieClass, unsigned long bHide );
	void CloseMovie ( class UClass* MovieClass, unsigned long bUnload );
	void RefreshCursorShowAndInput ( );
	void PreLoadMovie ( class UClass* MovieClass );
	void PreLoadSwfMovie ( class UClass* MovieClass );
	class UGfxMovie_TGBase* OpenMovie ( class UClass* MovieClass, unsigned long bStartPaused );
	void ReopenMessageBox ( );
	void ClearDataWhenPlayGame ( );
	void ClearMBParam ( );
	void PreloadMessageBoxTimer ( );
	void OpenMessageBoxAfterPreloadCompleted ( );
	void OnMessageBoxPreloadCompleted ( );
	void MessageBox ( int Style, struct FString Title, struct FString Message, struct FScriptDelegate OnOk, struct FScriptDelegate OnCancel, float CloseTime, struct FString OkText, struct FString CancelText, unsigned long bNotAutoClose, struct FScriptDelegate OnOkWithParameter, unsigned long bKickoff, unsigned long bXCallBackCancel );
	void eventInitializeSceneClient ( );
	void OnMoviePreloadCompleteDelegate ( );
};

UClass* UTGGfxUISceneClient::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_AvatarRoom
// 0x019C (0x03C0 - 0x0224)
class UGfxMovie_AvatarRoom : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTexture*                                    DefaultCharacterIcon;                             		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGUI_ItemList*                              ItemList;                                         		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGUI_BagContent*                            BagContent;                                       		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGUI_EquipmentsContent*                     EquipmentsContent;                                		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTGUI_GiftList*                              GiftList;                                         		// 0x0238 (0x0004) [0x0000000000000000]              
	int                                                DropItemIndex;                                    		// 0x023C (0x0004) [0x0000000000000000]              
	class UTexture*                                    DefaultUnequipTexture;                            		// 0x0240 (0x0004) [0x0000000000000000]              
	struct FString                                     DefaultUnequipTexturePath;                        		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrItemLocation;                                 		// 0x0250 (0x0004) [0x0000000000000000]              
	int                                                RightType;                                        		// 0x0254 (0x0004) [0x0000000000000000]              
	int                                                SubType;                                          		// 0x0258 (0x0004) [0x0000000000000000]              
	int                                                ThreeLevelType;                                   		// 0x025C (0x0004) [0x0000000000000000]              
	unsigned long                                      bTipEmpty : 1;                                    		// 0x0260 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLoad : 1;                                        		// 0x0260 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBackFromDemo : 1;                                		// 0x0260 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              BeginSeconds;                                     		// 0x0264 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               CurItemPropID;                                    		// 0x0268 (0x0010) [0x0000000000000000]              
	int                                                NewPropRecordOfTab;                               		// 0x0278 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUniquePropId >                     RenewPropIdList;                                  		// 0x027C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniquePropId >                     AllNeedRenewPropIdList;                           		// 0x0288 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UGfxMovie_Avatar*                            AvatarMovie;                                      		// 0x0294 (0x0004) [0x0000000000000000]              
	struct FAvatarCharInfo                             CharInfo;                                         		// 0x0298 (0x00E8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUTEventCallbackManager*                     ECBManager;                                       		// 0x0380 (0x0004) [0x0000000000000000]              
	struct FString                                     strHardCoded[ 0x2 ];                              		// 0x0384 (0x0018) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItemIsNotInExchargeDate;                          		// 0x039C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BuyChestBoxMessageTitle;                          		// 0x03A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BuyChestBoxMessageContent;                        		// 0x03B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136400 ];

		return pClassPointer;
	};

	void DisplayItem ( int ItemIndex );
	void OnNtfGiftNextBtnClicked ( unsigned long bNtfGiftSelected );
	void OnReqBuySkillExtendProp ( );
	void OnMoneyRefreshClicked ( );
	void OnMPDetailInfo ( struct FString CurMoneyType );
	void OnCheckClearNewTipOfTab ( int TabType );
	void ShowNewTipOfTab ( );
	void OnGetNewOfBindType ( );
	void OnShowExpiredList ( );
	void CheckItemTipVisible ( int ItemTipIndex );
	void OnbIsUnShowEquipedItems ( unsigned long _bUnShowEquiped );
	void OnRecordVideoBtnClicked ( );
	void UpdatePageButtonState ( int PageIndex, int PageIndex_Max );
	bool EscKeyFunction ( );
	void OnReqBuyBag ( int BagIndex );
	void ReqBuyGrenadeBag ( );
	void ShowASLog ( struct FString ASLog );
	void ShowEquipedSkill ( );
	void CleanupSkillShow ( );
	void OnTakeoffSkillShow ( int IndexInList );
	void OnEquipSkill ( int IndexInList );
	void OnTakeoffSkill ( int IndexInList );
	void OnRenewSkill ( int IndexInList );
	void OnChangeRoleComplete ( int ErrorCode, struct FString* ErrorDesc );
	void SetDefaultRole ( );
	void OnChangeBag ( );
	void OnGotoAnyPageButtonCLicked ( );
	void OnLastPageButtonClicked ( );
	void OnNextPageButtonClicked ( );
	void OnPreviousPageButtonClicked ( );
	void OnFristPageButtonClicked ( );
	void OnCancelItemNew ( int ItemIndex );
	void DonateItem ( int nItemIndex );
	void OnDropPropComplete ( int ErrorCode, int AddGP, struct FUniquePropId PropId, struct FString ItemName );
	bool DoNothing ( );
	bool DoDropItem ( );
	void DropItem ( int ItemIndex );
	void OnRepairComplete ( int ErrorCode, int ConsummeTP, int ConsummeGP, TArray< struct FString > NameList, TArray< struct FUniquePropId > PropIdList );
	void OnRepairTimeComplete ( int ErrorCode, struct FUniquePropId PropId, int PayType, int ConsummeTP, int ConsummeGP, int ConsummeMP, TArray< struct FString > NameList, int AddAvailHours );
	bool OnConfrimRepairAllProps ( );
	void OnRepairAllProps ( );
	int OnComputeRepairSinglePrice ( struct FPlayerPropInfo CurrentPropInfo, int RepairPrices );
	void OnComputeRepairAllPropsPrice ( );
	void RemoveHadRepairProps ( TArray< struct FUniquePropId > PropIdList );
	bool bCheckHadRenewPropId ( struct FUniquePropId NeedRenewPropId );
	bool OnConfrimRepairProp ( );
	void OnRepairProp ( int ItemIndex, unsigned long bItemList );
	void OnCompareBtnClicked ( int ItemIndex, unsigned long bCancelCompare );
	void OnTakeoffPropComplete ( int ErrorCode, struct FUniquePropId PropId, struct FString* ErrorDesc );
	void OnTakeoffItem ( int CurrentItemLocation );
	void OnTakeoffItemInEquiments ( );
	void OnEquipPropComplete ( int ErrorCode, struct FUniquePropId PropId, struct FString* ErrorDesc );
	int OnGetThrowWeaponLocation ( struct FPlayerPropInfo CurrentPropInfo, struct FSingleBag CurrentBag, unsigned long bBagExtended );
	bool CheckEquipToWhichBag ( TArray< struct FSingleBag > BagData, int DefaultBagIndex, struct FPlayerPropInfo CurrentPropInfo, unsigned char WeaponSubType, struct FUniquePropId* BagPropId );
	void OnTakeOffComplete ( int ErrorCode, struct FUniquePropId PropId, struct FString* ErrorDesc );
	bool OnChangeNickName ( struct FString NewString, struct FString SecondNewString );
	void ShowTabEmptyTip ( );
	void OnResExchangeProp ( int ErrorCode );
	bool OnConfrimExchangeProp ( );
	void OnResExchangeChest ( int ErrorCode, TArray< struct FString > PropNameArray, TArray< int > PropIconIdArray, int nAwardExp );
	bool OnConfirmOpenChestBox ( );
	bool OnBuyChestBoxKey ( );
	void OnCheckChestBox ( struct FPlayerPropInfo PropInfo );
	void OnEquipItem ( );
	void ConfirmGift ( int Index );
	void UpdateGiftList ( );
	void OnTakeoffWeapon ( );
	void UpdateItemList ( unsigned long bInitShow );
	void UpdateComponents ( struct FPlayerPropInfo CurrPropInfo, unsigned long bTakeOff );
	bool IsNeedUpdateEquipmentList ( struct FQWord CurResourceId );
	bool IsNeedUpdateItemList ( struct FPlayerPropInfo CurrPropInfo );
	void InitCharacterList ( );
	void CheckBagState ( unsigned long bInitBag );
	void UpdatePointItemListTab ( );
	void ShowWarnGiftContent ( );
	void OnShowTips ( );
	void UpdateGiftNextNtfBtn ( );
	void OnLoad ( );
	void AddDelegates ( );
	struct FString GetThingsSource ( int ThingsId );
	void OnUpdatePlayerProps ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_AvatarRoom::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ShopRoom
// 0x00A8 (0x02CC - 0x0224)
class UGfxMovie_ShopRoom : public UGfxMovie_TGBase
{
public:
	class UGfxMovie_Avatar*                            AvatarMovie;                                      		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                RankLevel;                                        		// 0x022C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           SaleSpecial;                                      		// 0x0230 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bLoad : 1;                                        		// 0x023C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasUseShopAnim : 1;                              		// 0x023C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGotoClassify : 1;                                		// 0x023C (0x0004) [0x0000000000000000] [0x00000004] 
	class UTGUI_ShopItemList*                          ItemList;                                         		// 0x0240 (0x0004) [0x0000000000000000]              
	class UTGUI_ShoppingCart*                          ShoppingCart;                                     		// 0x0244 (0x0004) [0x0000000000000000]              
	class UTGUI_ShopRoleList*                          RoleList;                                         		// 0x0248 (0x0004) [0x0000000000000000]              
	int                                                ShopQuitType;                                     		// 0x024C (0x0004) [0x0000000000000000]              
	class UTexture*                                    DefaultUnequipTexture;                            		// 0x0250 (0x0004) [0x0000000000000000]              
	struct FString                                     CommodityNotForSale;                              		// 0x0254 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTextureMovie*                               WeaponFiringMovie;                                		// 0x0260 (0x0004) [0x0000000000000000]              
	unsigned char                                      AvailTimePayType;                                 		// 0x0264 (0x0001) [0x0000000000000000]              
	int                                                BuyItemIndex;                                     		// 0x0268 (0x0004) [0x0000000000000000]              
	int                                                TryWeaponItemIndex;                               		// 0x026C (0x0004) [0x0000000000000000]              
	float                                              BeginSeconds;                                     		// 0x0270 (0x0004) [0x0000000000000000]              
	class UTGShopManager*                              ShopManager;                                      		// 0x0274 (0x0004) [0x0000000000000000]              
	TArray< struct FUniquePropId >                     RenewalPropIdArray;                               		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultMainType;                                  		// 0x0284 (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )
	int                                                DefaultSubType;                                   		// 0x0288 (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )
	int                                                DefaultSubSubType;                                		// 0x028C (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )
	int                                                DefaultFilterType;                                		// 0x0290 (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )
	int                                                DefaultSortType;                                  		// 0x0294 (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )
	int                                                CurMainType;                                      		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                CurSubType;                                       		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                CurSubSubType;                                    		// 0x02A0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             OnSetShopButtonSeletedStateDelegate;              		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUTEventCallbackManager*                     ECBManager;                                       		// 0x02B0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             GotoShopRoomDelegate;                             		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __GotoShopRoom__Delegate;                         		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136402 ];

		return pClassPointer;
	};

	void ShowAddSomeCommodityCartTips ( TArray< struct FASValue >* args );
	void SetLocalizedNotForSaleTipString ( );
	void SetCart ( class UTGUI_ShoppingCart* Cart );
	struct FString CheckTeamShopResult ( );
	void OnOpenLittleShopRoom ( int GroupID );
	void ResetPageIndex ( );
	void GetSubMenu ( int MainMenu );
	void GetMainMenu ( );
	bool OnConfirmTryWeapon ( );
	void OnTryWeaponClicked ( int ItemIndex );
	void OnMoneyRefreshClicked ( );
	void OnMPDetailInfo ( struct FString CurMoneyType );
	void UpdatePageButtonState ( int PageIndex, int PageIndex_Max );
	void CartPriceSelected ( int CartItemIndex, int PriceSelected );
	void InitialRecovery ( );
	void OnSaveAll ( );
	void OnTakeoffItem ( int EquipIndex );
	void OnPreviewFiringMovie ( struct FFCommodityDataRaw ItemElement );
	void OnEquipItem ( int ItemIndex );
	void UpdateEquipList ( );
	bool DoNothing ( );
	bool OnTurnTeamRoom ( );
	bool OnTurnAvatarRoom ( );
	bool OnNoBuy ( );
	bool OnBuy ( );
	void IsBuyCartOrTurnTeamRoom ( );
	void IsBuyCartOrTurnAvatarRoom ( );
	void IsBuyShoppingCart ( );
	void DeleteShoppingCart ( int ItemIndex );
	void UpdateCartItemList ( );
	void AddShoppingCart2 ( struct FFCommodityDataRaw ItemElement, int ComIndex );
	void AddShoppingCart ( int ItemIndex );
	bool CleanupCart ( );
	void OnEquipPropComplete ( int ErrorCode, struct FUniquePropId PropId, struct FString* ErrorDesc );
	void OnChangeRoleComplete ( int ErrorCode, struct FString* ErrorDesc );
	void ClearGPCartList ( );
	void ClearOtherCartList ( );
	void ChangeDefaultRoleShow ( );
	void SetDefaultRolePropId ( struct FUniquePropId PropId );
	bool bNeedUpdateRoleList ( struct FFCommodityDataRaw ItemElement );
	void OnBuyComplete ( int ErrorCode, struct FResBuyCommodityInfo BuyedCommodity );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnRepairComplete ( int ErrorCode, struct FUniquePropId PropId, int PayType, int ConsummeTP, int ConsummeGP, int ConsummeMP, TArray< struct FString > NameList, int AddAvailHours );
	void OnBuyCartCommodities ( );
	void OnGiveFriendCartCommodies ( );
	void OnAskForFriendSingleCommodity ( int ItemIndex );
	void OnGiveFriendSingleCommodity ( int ItemIndex );
	void OnBuySingleCommodity ( int ItemIndex );
	void ShowBuyInfo ( int BuyType, int ItemIndex );
	bool OnRenewalCommodity ( int SelectedIndex );
	bool OnBuyNewCommodity ( );
	bool OnIsBuyOrRenewals ( );
	void OnGetRenewalWeaponInfo ( struct FFCommodityDataRaw ItemElement, int* WeaponNum, struct FString* WeaponInfos, int* RenewalResultType );
	void BuyPreviewWeapon ( int ComIndex, struct FFCommodityDataRaw ItemElement );
	void GotoAppointPage ( struct FString APPointPage, unsigned long bCartTurnPage );
	void GotoNextPage ( unsigned long bCartTurnPage, unsigned long bRoleTurnPage );
	void GotoPreviousPage ( unsigned long bCartTurnPage, unsigned long bRoleTurnPage );
	void UpdateItemList ( int MainType, int SubType, int SubSubType, int FilterType, int SortType, unsigned long bSearch );
	void RefreshItemList ( );
	bool OnChangeRole ( int RoleIDIndex );
	void CloseAvatarMovie ( );
	void StartAvatarMovie ( );
	void OnSetBuyTimer ( );
	void OnClearBuyTimer ( );
	void OnShowTips ( );
	void SetShopRoomState ( );
	void GotoClassify ( int MainType, int SubType, int SubSubType );
	void InitFlashUI ( );
	void OnImageDownloadComplete ( struct FOnShopRoomImageDownloadComplete_Param Param );
	void OnInitAutoPlayShow ( );
	void OnLoad ( );
	void OnRechargeButtonClicked ( );
	bool EscKeyFunction ( );
	void CheckCurrentRole ( );
	void ClearDelegates ( );
	void AddDelegates ( );
	void OnInitialize ( );
	void eventOnClose ( );
	void eventOnStart ( );
	void GotoShopRoom ( );
};

UClass* UGfxMovie_ShopRoom::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_UIContainer
// 0x00C0 (0x02E4 - 0x0224)
class UGfxMovie_UIContainer : public UGfxMovie_TGBase
{
public:
	unsigned long                                      bLoaded : 1;                                      		// 0x0224 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FString >                           MoviePathToLoad;                                  		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MovieNameToLoad;                                  		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MovieDepths;                                      		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         MovieOffsets;                                     		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MovieLeastLoaded;                                 		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MovieLoadedCount;                                 		// 0x0264 (0x0004) [0x0000000000000000]              
	struct FString                                     MoviePath_Standard;                               		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentWorldIndex;                                		// 0x02A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           LocalizationStrVarPath;                           		// 0x02A8 (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     ASStrVarLocalizationFile;                         		// 0x02B4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FChatFaceStringConfigInfo >         ChatFaceStringArray;                              		// 0x02C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __PlayMovieSound__Delegate;                       		// 0x02CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __PrintASLog__Delegate;                           		// 0x02D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136443 ];

		return pClassPointer;
	};

	void FlashLog ( );
	void ReturnButtonClicked ( );
	void ButtonOrPlateSounds ( int PressType );
	bool OnConnectionClose ( );
	void HandleOnlineException ( int ErrorCode, int InternalErrorCode );
	void OnOnlineException ( int ExcepitonIndex );
	void SetMoviePathByScreenResolutionScale ( );
	void RequestSaveConfig ( int CurWorldIndex );
	void ShowChangeBag ( );
	void EscKeyPressed ( );
	void EnterKeyPressed ( );
	void UnloadMovie ( struct FString Path );
	void OnAllMoviesLoaded ( );
	void OnMovieLoadComplete ( struct FString LoadedMovie );
	void LoadMovie ( struct FString LoadPath, struct FString LoadName, int Depth, int OffsetX, int OffsetY );
	void SetPrintLogDelegate ( struct FScriptDelegate InDelegate, struct FString ASCallBack );
	void PrintASLog ( struct FString strLog );
	void SetSoundDelegate ( struct FScriptDelegate InDelegate, struct FString ASCallBack );
	void PlayMovieSound ( );
	void MovieChangeSound ( );
	void MovieClosedSound ( );
	void MovieOpenedSound ( );
	void ASLog ( struct FString strLog );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
	void AS_LoadAllLocalizationStringsHardcodedInAS ( );
	void OnMouseDown ( struct FString E );
	void ShowError ( struct FString Content );
	void CopyToClipboard ( );
	void InputClipboardText ( );
	void AS_LoadVKeyUINames ( );
	void ShowLog ( struct FString Content );
	void InitChatFaceStringConfigData ( );
};

UClass* UGfxMovie_UIContainer::pClassPointer = NULL;

// Class TGameGfxUI.TGLobbyMoviesManager
// 0x0094 (0x00D0 - 0x003C)
class UTGLobbyMoviesManager : public UObject
{
public:
	struct FInviteToGameInfo                           InviteInfo;                                       		// 0x003C (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalizeStringPath;                               		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MatchLocalizeStringPath;                          		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGGfxUISceneClient*                         UIClient;                                         		// 0x006C (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0070 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamGame*                           OnlineTeamGame;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x007C (0x0004) [0x0000000000000000]              
	class UTGOnlineTechnicalGame*                      OnlineTechnicalGame;                              		// 0x0080 (0x0004) [0x0000000000000000]              
	class UTGOnlineHappyMatch*                         OnlineHappyMatch;                                 		// 0x0084 (0x0004) [0x0000000000000000]              
	class UTGModeGuideController*                      OnlineModeMatchController;                        		// 0x0088 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            PopUpSystemMovies;                                		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            LeftNeedManageMovies;                             		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            RightNeedManageMovies;                            		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            AlwaysOpenMovies;                                 		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGfxMovie_TGBase* >                  HadOpenMovies;                                    		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentGameType;                                  		// 0x00C8 (0x0001) [0x0000000000000000]              
	unsigned char                                      ChannelListExitStatus;                            		// 0x00C9 (0x0001) [0x0000000000000000]              
	unsigned long                                      IsOpenShopOrAvatarRoom : 1;                       		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136447 ];

		return pClassPointer;
	};

	class UGfxMovie_TGBase* GetOpenMovie ( class UClass* MovieClass, unsigned long bCreateNew );
	bool IsMovieOpen ( class UClass* MovieClass );
	void CloseMovie ( class UClass* MovieClass, unsigned long bUnload );
	class UGfxMovie_TGBase* OpenMovie ( class UClass* MovieClass, unsigned long bStartPaused );
	void OpenMainOrSubChannelUI ( unsigned long bMain );
	void OpenMoviesByLogin ( );
	void GotoOtherPropSystemUI ( class UClass* MovieClass );
	void GoToAchieveUI ( unsigned long bGotoSpecialTab, int AchiType, int AchiID, int CurLevel );
	void GoToTeamUI ( struct FString UIName );
	void OnReturnBtnClicked ( );
	unsigned char GetSystemTypeByPlayerStatus ( unsigned char CurPlayerStatus );
	void EnterShopUI ( int CurRigthType, int CurSubType );
	void GoToAnyTagInAvatarRoom ( int RightType, int SubType, int ThreeLevelType, unsigned long bTipEmpty );
	void CheckInTechnicalAndClose ( );
	void EnterOnlineMatchRoomUI ( );
	void EnterOnlineMatchUI ( );
	void EnterTechnicalMatchUI ( unsigned long ShowTeamPage );
	void EnterHappyMatchUI ( );
	void EnterTeamMatchUI ( );
	void EnterSinglePersonalMatchUI ( );
	void EnterRoomUI ( );
	void EnterRoomListUI ( unsigned long bHasReason );
	bool CheckChannelInWorld ( );
	void EnterChannelListUIFromOtherUI ( unsigned char nGuidePanel, unsigned long bReturnSubMainChannel, unsigned long bFocusEnter );
	void OnReturnClickedBySpecialMatch ( );
	void SetUIState ( unsigned char UISystemType, unsigned char CurPlayerStatus, unsigned long bOnlyReport );
	void NtfPlayerInUISystem ( unsigned char UISystemType );
	void OnEnterGameUI ( int bNeedChangeUI, unsigned long bTechnicalGameInvite );
	void OnConfrimJoinGameByInvite ( unsigned char GameType, int nTeamMatchInviteId );
	void OnResQuitTeamMatchUI ( int ErrorCode );
	void OnRecoveCommonMatchUI ( );
	void OnServerEnterRoom ( int ErrorCode, struct FString* ErrorDesc );
	void OnCreateRoomResult ( int ErrorCode, struct FString* ErrorDesc );
	void AddEnterRoomDelegates ( );
	void OnLeaveRoomResult ( int ErrorCode, int LeaveReason, struct FString* ErrorDesc );
	bool OnNeedQuitRoom ( unsigned char CurGameType );
	void OnHappyMatchBtnClicked ( );
	void OnTeamGameBtnClicked ( );
	void OnTechnicalGameBtnClicked ( );
	void OnSinglePersonGameBtnClicked ( );
	void OnMultiPlayerGameBtnClicked ( );
	bool OnCancelEnterGameUI ( );
	bool OnConfirmQuitRoomByEnterGameUI ( );
	bool OnNeedQuitCurrentStateByEnterGameUI ( unsigned char CurGameType, unsigned long bNeedConfrimQuitRoom, int* bNeedChangeUI );
	void UnInitalization ( );
	void ClearDelegates ( );
	void AddDelegates ( );
	void OnInitalization ( );
	void AppendGfxMovies ( TArray< class UClass* > AppendMovies, TArray< class UClass* >* TotalMovies );
	void ManagerMovieBySystemType ( unsigned char SystemType, unsigned long bOpen );
	void OpenCurSystemMovies ( unsigned char CurSystemType );
	unsigned char GetMainUILayoutType ( unsigned char CurSystemType );
	void SetLobbyGameBtnStatus ( );
};

UClass* UTGLobbyMoviesManager::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_AchievementSystem
// 0x0074 (0x0298 - 0x0224)
class UGfxMovie_AchievementSystem : public UGfxMovie_TGBase
{
public:
	class UTGUI_AchievementList*                       AchivementList;                                   		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchiScoreAwards*                    OnlineAchieveAward;                               		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0238 (0x0004) [0x0000000000000000]              
	int                                                DefaultAchiType;                                  		// 0x023C (0x0004) [0x0000000000000000]              
	int                                                DefaultAchiFilterType;                            		// 0x0240 (0x0004) [0x0000000000000000]              
	int                                                DefaultPageIndex;                                 		// 0x0244 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGotoSpecialPage : 1;                             		// 0x0248 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BeginSeconds;                                     		// 0x024C (0x0004) [0x0000000000000000]              
	int                                                CurrentAchiID;                                    		// 0x0250 (0x0004) [0x0000000000000000]              
	int                                                CurrentAchiLevel;                                 		// 0x0254 (0x0004) [0x0000000000000000]              
	struct FString                                     CongratulateString;                               		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ErrorString;                                      		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AskAwardErrorString;                              		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GetAwardBtnString;                                		// 0x027C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HadAwardString;                                   		// 0x0288 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                CurAchiType;                                      		// 0x0294 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 137628 ];

		return pClassPointer;
	};

	void FlashLog ( );
	void VewAllLiBag ( );
	void OnGetAwardReturn ( int ErrorCode, int Level );
	void RequestAward ( int Level );
	void UpdateCurrentLiBagData ( );
	void OpenAchiAwardsPanel ( );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void GetCardInfo ( int AchiID, int AchiLevel );
	void ShowASLog ( struct FString ASLog );
	bool EscKeyFunction ( );
	void GotoSpecialPageTimer ( );
	void SetGotoSpecialPageTimer ( );
	void GotoSpecialPage ( int AchiType, int AchiID, int CurLevel );
	void GotoAchiDetail ( int Index );
	void OnGotoPageButtonClicked ( );
	void OnLastPageButtonClicked ( );
	void OnNextPageButtonClicked ( );
	void OnPreviousPageButtonClicked ( );
	void OnFristPageButtonClicked ( );
	void ShowFrontAchievementInChat ( int ListIndex );
	void ShowAchievementInChat ( int ListIndex );
	void GetFrontAchievedDataCallback ( );
	void CloseFrontAchieved ( int ListIndex );
	void ShowFrontAchieved ( int ListIndex );
	void UpdataAchievementListCallback ( int CurrentAchiType );
	void ShowBottomProgressPanel ( int CurrentAchiType, int AchievedNum, int AchiTotalNum );
	void OnGetRecentlyAchievedComplete ( int ErrorCode, struct FString* ErrorDesc );
	void UpdataAchievementList ( int AchiType, int AchiFlterType );
	void CleanupAchievementList ( );
	void GetAchiClassifyInfo ( );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_AchievementSystem::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_AchievementList
// 0x006C (0x00A8 - 0x003C)
class UTGUI_AchievementList : public UObject
{
public:
	class UGfxMovie_AchievementSystem*                 OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< struct FTGAchievementData >                AchievementList;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTGAchievementData >                RecentAchievedList;                               		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTGAchievementData >                FrontAchievedList;                                		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AchievementFilter;                                		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                AchievementCount;                                 		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                AchievedCount;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                CurrentAchiType;                                  		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                PageIndex;                                        		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PageIndex_Max;                                    		// 0x0080 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SpecialAchiID;                                    		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                SpecialAchiLevel;                                 		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                SpecialIndex;                                     		// 0x008C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           AsVarPaths;                                       		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AsFunPaths;                                       		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 137651 ];

		return pClassPointer;
	};

	void OnNtfGuiDeleteAchieve ( int AchiID, int AchiLevel );
	void GotoSpecialPageTimer ( );
	void OnGetAchievementsByTypeSpecialComplete ( int ErrorCode, int AchiType, struct FString* ErrorDesc );
	void OnGotoSpecialPage ( int AchiType, int AchiID, int CurLevel );
	void OnLastPage_ButtonClicked ( );
	void OnNextPage_ButtonClicked ( );
	void OnPreviousPage_ButtonClicked ( );
	void OnFristPage_ButtonClicked ( );
	void OnGotoPage_ButtonClicked ( );
	void GetFrontAchiData ( int ListIndex, struct FString* AchiName, int* AchiID, int* CurLevel, int* AchievedTime, int* CurAccumulation );
	void GetAchiData ( int ListIndex, struct FString* AchiName, int* AchiID, int* CurLevel, int* AchievedTime, int* CurAccumulation );
	struct FString GetAchiDetailString ( int Index, TArray< struct FTGAchievementData > AchiList );
	void UpdateAchievementList ( );
	void SetAchiCountAndScore ( );
	void SortRecentlyAchieved ( );
	void SortAchievementList ( );
	void FilterAchievementList ( );
	void OnGetRecentlyAchievedComplete ( int ErrorCode, struct FString* ErrorDesc );
	void OnGetAchievementsByTypeComplete ( int ErrorCode, int AchiType, struct FString* ErrorDesc );
	void GetAchievementList ( int AchiType, int AchiFlterType );
	void RemoveFrontAchievedData ( int ListIndex );
	void OnGetFrontAchievedDataComplete ( int ErrorCode, int AchiID, struct FString* ErrorDesc );
	void GetFrontAchievedData ( int ListIndex );
	void ClearAll ( );
	void OnUnInitialized ( );
	void OnInitialized ( );
};

UClass* UTGUI_AchievementList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_LoginLobby
// 0x00BC (0x02E0 - 0x0224)
class UGfxMovie_LoginLobby : public UGfxMovie_TGBase
{
public:
	struct FString                                     NewModeNoticeAddress;                             		// 0x0224 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxMoviePlayer*                             LobbyMovie;                                       		// 0x0230 (0x0004) [0x0000000000000000]              
	class UGfxMovie_MultiPlayerRoom*                   RoomMovie;                                        		// 0x0234 (0x0004) [0x0000000000000000]              
	class UGfxMovie_QTalkPanel*                        QTalkMovie;                                       		// 0x0238 (0x0004) [0x0000000000000000]              
	class UGfxMovie_ModeChange*                        ModeChangeMovie;                                  		// 0x023C (0x0004) [0x0000000000000000]              
	class UGfxMovie_WorldChoose*                       WorldChooseMovie;                                 		// 0x0240 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0244 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0248 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineMultiGameRoom*                      OnlineMultiGameRoom;                              		// 0x024C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x0250 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Uin;                                              		// 0x0254 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x0260 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                RequestId;                                        		// 0x026C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ForetellString;                                   		// 0x0270 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WorldReturnLabel;                                 		// 0x027C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WorldNormalLabel;                                 		// 0x0288 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WorldBioLabel;                                    		// 0x0294 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     strSquadSysInMaintenance;                         		// 0x02A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTGOnlineTask*                               OnlineTask;                                       		// 0x02AC (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x02B0 (0x0004) [0x0000000000000000]              
	class ULocalPlayer*                                LP;                                               		// 0x02B4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoaded : 1;                                      		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWorkAfterLoad : 1;                               		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOpenFriendSystem : 1;                            		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOpenMessageManager : 1;                          		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bGetMainChanelList : 1;                           		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCurUILocked : 1;                                 		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      AutoEnterWorld : 1;                               		// 0x02B8 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned char                                      bSystemType;                                      		// 0x02BC (0x0001) [0x0000000000000000]              
	class UGfxMovie_KeySystemMessage*                  KeySystemMessageMovie;                            		// 0x02C0 (0x0004) [0x0000000000000000]              
	int                                                nTryTime;                                         		// 0x02C4 (0x0004) [0x0000000000000000]              
	class UTGGfxUISceneClient*                         UIClient;                                         		// 0x02C8 (0x0004) [0x0000000000000000]              
	int                                                CurrentWorldIndex;                                		// 0x02CC (0x0004) [0x0000000000000000]              
	class UTGModeGuideController*                      ModeGuideController;                              		// 0x02D0 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           strHardCode;                                      		// 0x02D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 137654 ];

		return pClassPointer;
	};

	void SetNewCommodityNum ( int Num );
	void ShowWorldTips ( int Index );
	bool OnChangeWorld ( int WorldIndex, unsigned long bFocusMainchannel );
	void HappyMatchBtnClicked ( );
	void FlashLog ( );
	void OnChatReceivedSystemBroadcast ( int Type, struct FString UINFrom, struct FString NickNameFrom, struct FString Text, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames );
	void UpdateShopOrAvatarBtnState ( unsigned long bHidFocus );
	bool OnSaveNtfGiftTipNextSetting ( int bNotNtfGiftTipNext );
	void NotifyPlayerGifts ( );
	void OnPlayerGifts ( int ErrorCode, unsigned long bNotify );
	void EnterTeamRoom ( );
	void OnEnterShopRoom ( );
	bool OnSetShopButtonSeletedState ( );
	void OnEnterAvatarRoom ( );
	void OnStartQTalk ( );
	void OnTeamGameBtnClicked ( );
	void OnTechnicalGameBtnClicked ( );
	void OnSinglePersonGameBtnClicked ( );
	void OnMultiPlayerGameBtnClicked ( );
	void OpenNotice ( );
	void ShowASLog ( struct FString ASLog );
	void OnReqInviteFriendComplete ( int ErrorCode, struct FString nUin, struct FString nNickName, int ZoneId, int ChannelId, int nRequestId, struct FMultiGameLobbyRoomInfo RoomInfo, unsigned long bHasFriendInjury, unsigned long bAllowThrowWeapon, struct FString* ErrorDesc );
	void CloseFlicker ( );
	void UnbindKey ( struct FName KeyName );
	void SaveKeyBinds ( );
	void BindKey ( struct FName KeyName, struct FString KeyCommand );
	void OnNtfSystemSettings ( int* KeySetttingCount );
	void LockInput ( unsigned long bShouldDisableButtons );
	void ReqShowScore ( );
	void OnAddEnemyCallback ( int ErrorCode, struct FString PlayerUin, struct FString* ErrorDesc );
	bool OnMessageBox_Cancel ( );
	bool OnMessageBox_Confirm ( );
	void OnReqAddFriendComplete ( int ErrorCode, struct FString nUin, struct FString nNickName, struct FString Message, int nRequestId, struct FString* ErrorDesc );
	void UpdateButtonState ( unsigned char InSystermType );
	void GeneralInputLock ( unsigned long bNeedLock );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnLevelUp ( );
	bool DoNothing ( );
	void OnDropoutMatch ( );
	void SetFlickAchievementBtnEnabled ( unsigned long bShouldEnabled );
	void ShowNewAchieved ( int ErrorCode, struct FString* ErrorDesc );
	void SetMouseSensitivity ( );
	void OnLobbyButtonClicked_AS ( );
	void OnNtfOfflineMessagesComplete ( int ErrorCode, struct FString* ErrorDesc );
	void OnAddFriendComplete ( int ErrorCode, struct FString nUin, struct FString nNickName, struct FString* ErrorDesc );
	void ReqGetFriendExp ( );
	void OnGetFriendListComplete ( int ErrorCode, struct FString* ErrorDesc );
	void ResizeWindow ( int Width, int Height );
	void OnAbandonTaskResponse ( int ErrorCode, int TaskID );
	void OnNotifyPlayerTaskInfo ( unsigned char OpType, TArray< int > TaskIDs );
	void CheckTaskBtnFlicker ( );
	void CheckTaskBtnSubmit ( );
	void SetTaskBtnSubmit ( unsigned long bHasSubmitTask );
	void CheckSurveyBtnFlicker ( );
	void SetFlickSurveyBtnEnabled ( unsigned long bEnabled );
	void SetFlickTaskBtnEnabled ( unsigned long bEnabled );
	void OnSubmitTaskResponse ( int ErrorCode, int TaskID, unsigned char AwardType );
	bool OnNoSurveyOK ( );
	void OpenSurveyMovie ( );
	void OnCallBackNewGuideOpened ( );
	void OnShowNewGuide ( );
	void OnShowHelpHall ( );
	void OpenHelpHall ( );
	void OnShowTaskGuide ( );
	void SetGameBtnStatus ( unsigned char PlayerStatus );
	void OnSetLobbyGameBtnStatus ( struct FOnSetLobbyGameBtnStatus_Param Param );
	void OnShowJoinMatchLessTime ( );
	void OnShowNtfNeedRenewalTip ( );
	void OnFailedReEnableNewGuideCloseBtn ( );
	void OnEnterNewChanel ( );
	void OnRequestEnterChanel ( );
	void OnProcessGuides ( );
	void OpenHelpHelp ( );
	void OpenVersionContent ( );
	void OpenVersionContentByTimer ( );
	void OnProcessTips ( );
	void OnStartBGMusic ( unsigned long bStartMusic );
	void PlayBackgroundMusic ( );
	void StopBackgroundMusic ( );
	void ReSetPersonalGameBtnStartState ( );
	void SetPersonalGameBtnStartState ( );
	void OnGetPMMatchSeasonTime ( int ErrorCode );
	void OnConfigUI ( );
	void ActivityBtnClicked ( int TabIndex );
	void AutoOpenActivityBoard ( );
	void SetHasTaskFinishedFlag ( unsigned long bFlag );
	void CheckTaskComplete ( );
	void DelayCheckTaskAcceptable ( );
	void DelayCheckTaskFinished ( );
	void OnControlMusic ( unsigned long bStart );
	void OnLoad ( );
	void OpenRankList ( );
	void OpenLotteryMovie ( );
	void OnOpenAchievementMovie ( );
	void OnOpenTaskMovie ( );
	void OpenSuggestionMovie ( );
	void UpdateAddictionDescription ( unsigned long bClear );
	void OnRecommandWeaponMessageReceived ( struct FRecommandWeaponStruct RecommandWeapons );
	void OnNtfPlayerAddictionType ( unsigned char AddictionType, int TodayOnlineTime );
	void OnNtfPlayerAasType ( unsigned char AasType, int OnlineTime );
	void eventOnClose ( );
	void AddDelegates ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_LoginLobby::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Chat
// 0x0324 (0x0548 - 0x0224)
class UGfxMovie_Chat : public UGfxMovie_TGBase
{
public:
	struct FString                                     CanntSendNullMessage;                             		// 0x0224 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouEnterChannelMessageString;                     		// 0x0230 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FriendOnlineMessageStringPart1;                   		// 0x023C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FriendOnlineMessageStringPart2;                   		// 0x0248 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FriendOnlineMessageStringPart3;                   		// 0x0254 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TeammateOnlineMessageStringPart1;                 		// 0x0260 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TeammateOnlineMessageStringPart2;                 		// 0x026C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TeammateOnlineMessageStringPart3;                 		// 0x0278 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Me;                                               		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AskForItemFromFriendString;                       		// 0x0290 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RepairItemString;                                 		// 0x029C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RepairAllItemString;                              		// 0x02A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AgreeYourInvitionString;                          		// 0x02B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RejectYourInvitionString;                         		// 0x02C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadSendInvitionForYouFriend;                   		// 0x02CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadEnterRoomString;                            		// 0x02D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CanntSendNullMessageString;                       		// 0x02E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PleaseSelectAChatTarget;                          		// 0x02F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouDidntInAClanString;                            		// 0x02FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HereLinkString;                                   		// 0x0308 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     JoinAClan;                                        		// 0x0314 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadBannedString;                               		// 0x0320 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouBeBannedForFlushChat;                          		// 0x032C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BeBannedTimeoutString;                            		// 0x0338 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouLevelNotEnoughString;                          		// 0x0344 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouSendChatTooFastString;                         		// 0x0350 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DonntSendRepeatContentString;                     		// 0x035C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CanntSendToBlackList;                             		// 0x0368 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BuySpeakerString;                                 		// 0x0374 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RestSpeakerString;                                		// 0x0380 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ComplainTitleString;                              		// 0x038C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ComplainContentString;                            		// 0x0398 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ComplainReasonString;                             		// 0x03A4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChatTargetTooManyString;                          		// 0x03B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouMustWait20sForChatWhenYouEnterRoom;            		// 0x03BC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WindowModeWhenFirstEnterChannel;                  		// 0x03C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FullScreenModeWhenFirstEnterChannel;              		// 0x03D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChatTargetInCMMatchString;                        		// 0x03E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChatErrorInHappyMatch;                            		// 0x03EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SpeakerMessagesIndicationString;                  		// 0x03F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                MessageCounter;                                   		// 0x0404 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0408 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameLobby*                     OnlineMultiGame;                                  		// 0x040C (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0410 (0x0004) [0x0000000000000000]              
	class UTGOnlineChatManager*                        ChatManager;                                      		// 0x0414 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0418 (0x0004) [0x0000000000000000]              
	class UGfxMovie_KeySystemMessage*                  KeySystemMessageMovie;                            		// 0x041C (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0420 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoaded : 1;                                      		// 0x0424 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSpeakerState : 1;                                		// 0x0424 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFriend : 1;                                      		// 0x0424 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsCalledOutside : 1;                             		// 0x0424 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bCanInviteFriend : 1;                             		// 0x0424 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bUsePreLastTime : 1;                              		// 0x0424 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIsContinuousChatSend : 1;                        		// 0x0424 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bStopChat : 1;                                    		// 0x0424 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bQTClickRoomId : 1;                               		// 0x0424 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bLockedUI : 1;                                    		// 0x0424 (0x0004) [0x0000000000000000] [0x00000200] 
	struct FString                                     MenuTarget;                                       		// 0x0428 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastChatIndex;                                    		// 0x0434 (0x0004) [0x0000000000000000]              
	struct FString                                     LastInviteFriendUin;                              		// 0x0438 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastSpeakerMessagePos;                            		// 0x0444 (0x0004) [0x0000000000000000]              
	struct FString                                     AVoidString;                                      		// 0x0448 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ContinuousChatSendCount;                          		// 0x0454 (0x0004) [0x0000000000000000]              
	struct FSystemTimeData                             TimeTeamBanned;                                   		// 0x0458 (0x0020) [0x0000000000000000]              
	struct FSystemTimeData                             TimeFlushMessageBanned;                           		// 0x0478 (0x0020) [0x0000000000000000]              
	struct FSystemTimeData                             TimeEnterRoom;                                    		// 0x0498 (0x0020) [0x0000000000000000]              
	struct FSystemTimeData                             TimeLastLastSendMessageInLobby;                   		// 0x04B8 (0x0020) [0x0000000000000000]              
	struct FSystemTimeData                             TimeLastSendMessageInLobby;                       		// 0x04D8 (0x0020) [0x0000000000000000]              
	struct FScriptDelegate                             QTalk_Click;                                      		// 0x04F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGfxMovie_QTalkPanel*                        QTalkPanel;                                       		// 0x0504 (0x0004) [0x0000000000000000]              
	struct FString                                     strQTContent;                                     		// 0x0508 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ReqCardInfoUin;                                   		// 0x0514 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ChatState;                                        		// 0x0520 (0x0004) [0x0000000000000000]              
	TArray< struct FSpeakerMessage >                   SpeakerMessages;                                  		// 0x0524 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TestChatContent;                                  		// 0x0530 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __Event_ClickQTalkRoom__Delegate;                 		// 0x053C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 137694 ];

		return pClassPointer;
	};

	void GeneralInputLock ( unsigned long bNeedLock );
	void ___PushMessage ( int Channel, struct FString ChannelName, struct FString TextColor, struct FString From, struct FString to, struct FString Content, struct FString FromUin, struct FString ToUin, TArray< struct FChatKeywordLinkNode >* KeywordLinkArray );
	void OnClickLink ( );
	void OnClickLottery ( );
	bool OnComplainOK ( );
	void OnComplain ( );
	void OpenSoSoWeb ( );
	void PushSystemWarnning ( struct FString* Content );
	void RemoveAllMessage ( );
	void ShowPMP2PChatMessage ( );
	void ChangeChatArea ( unsigned long flag );
	bool EnterKeyFunction ( );
	void CleanHistoryAchievementData ( int ChatHistoryID );
	void FlashLog ( );
	void SaveHistoryAchievementData ( );
	void SaveHistoryContent ( );
	void SetChatHistoryData ( );
	void SetChatMoviebHasTeam ( unsigned long bHasTeam, unsigned char bIsBanSpeech );
	void OnResGetMembersList ( int ErrorCode, int MemberCount, unsigned char bSelfIsbanSpeech, unsigned long bIsAll );
	void OnResCreateTeam ( int ErrorCode, struct FString* TeamName );
	void OnResHandOverTeam ( int ErrorCode, struct FString* ReceiverUin );
	void OnNotifyMemberStateChange ( unsigned char ChangedTye, unsigned long bUpdateTeamGroup, unsigned long bIsSelfChange, unsigned char bSelfIsbanSpeech, struct FString MemberUinA, struct FString MemberUinB );
	void ShowASLog ( struct FString ASLog );
	void SpeakerTalk ( unsigned long bSpeaker );
	bool CheckSpeakerNum ( );
	void OnChatTargetChanged ( int Index );
	void SetSpeakerTipsText ( );
	void GotoAchievementPanel ( struct FTGAchievementData AchiData );
	void CopyAchievement ( int AchiUniqueId );
	void GoToAchiDetailPanel ( int AchiUniqueId );
	void GetAchiDetail ( int AchiUniqueId );
	void SetAchievementName ( struct FString NickName, struct FString AchiName, int AchiID, int CurLevel, int AchievedTime, int CurAccumulation );
	bool SetInputFocus ( unsigned long bFocus );
	void UseChatHistoryTimer ( );
	void UseChatHistory ( );
	void OnFilterStrangerChanged ( unsigned long bChecked );
	void OnFilterTeamateChanged ( unsigned long bChecked );
	void OnFilterBattleteamChanged ( unsigned long bChecked );
	void OnFilterRoomChanged ( unsigned long bChecked );
	void OnFilterLobbyChanged ( unsigned long bChecked );
	void OnEnterTeamRoom ( struct FString inPreState );
	struct FString NickNameToUIN ( struct FString NickName );
	struct FString UINToNickName ( struct FString Uin );
	void OnChatError ( int ErrorCode, struct FString UinTarget, struct FString Text, int TacticalCommandID, int BannedLeftHours );
	void OnChatSendBack ( int Type, unsigned long bDirty, struct FString ToUin, struct FString ChatContent, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames, int TacticalCommandID );
	void LeftPressAchievement ( int AchiID );
	bool OnChatToPlayer ( struct FString Uin, struct FString NickName, int Type );
	bool OnChatToFriend ( struct FString NickName, int Type );
	void ExcuteDeferredCommand ( struct FString Command, struct FString Arg );
	void AddAndCheckChatMessageCounter ( );
	void PushLocalMessage ( int Type, struct FString From, struct FString to, struct FString Content );
	void PushSystemMessage ( struct FString Part0, struct FString Part1, struct FString Part2, struct FString Part3 );
	void PushQTalkMessage ( int Type, struct FString From, struct FString to, struct FString Content, struct FString QTContent );
	void PushMessage ( int Type, struct FString From, struct FString to, struct FString Content );
	void ClearSpeakerMessage ( );
	struct FString GetLeftString ( struct FString SrcString, int StringCount );
	void UpdateSpeakerContent ( int Id, struct FString NewText, unsigned long bVisible );
	void RefreshSpeakerMessage ( );
	void OnChatReceivedSystemBroadcast ( int Type, struct FString UINFrom, struct FString NickNameFrom, struct FString Text, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames );
	void OnChatReceivedP2P ( int Type, struct FString UINFrom, struct FString NickNameFrom, struct FString Text, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames );
	void OnChatReceivedBroadcast ( int Type, struct FString UINFrom, struct FString NickNameFrom, struct FString Text, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames, int TacticalCommandID );
	void CloseTips ( );
	void StopChatTimer ( );
	float GetRealTimeDiff ( struct FSystemTimeData NewTimeData, struct FSystemTimeData OldTimeData );
	void ChatSend ( );
	void ChatTooFastAction ( );
	void SendEnterRoomMessage ( );
	void RigthPressLink ( struct FString linkType );
	void LeftPressLink ( struct FString linkType );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( int Index );
	void OnEnforceOffline ( int Index );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( int Index );
	void AddTeammate ( );
	bool OnMoveFriendBlack_Confirm ( );
	void MoveFriendToBlackList ( );
	void PassphraseFriend ( );
	void FollowPlayer ( );
	bool OnButtonConfirm ( );
	void InviteCountDown ( );
	void InvitePlayer ( );
	void ShowPlayerDetail ( );
	bool OnDeleteFriend_Confirm ( );
	void DeleteFriend ( );
	void RequestInviteFriend ( struct FString Uin );
	void OnInviteFriendResponse ( int ErrorCode, struct FString nNickName, int Reason, struct FString* ErrorDesc );
	void SaveSystemSettingsSuccess ( );
	void AddFriend ( );
	void CloseRightClickMenu ( );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void OpenRightClickMenu ( );
	void ChatShowMenu ( struct FString TargetName );
	void OnEnterQTalkRoom ( struct FString QTContent, struct FString strAdd );
	bool SwitchChatTarget ( struct FString TargetName );
	void OnBuyComplete ( int ErrorCode, struct FResBuyCommodityInfo BuyedCommodity );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnRepairComplete ( int ErrorCode, int ConsummeTP, int ConsummeGP, TArray< struct FString > NameList, TArray< struct FUniquePropId > PropIdList );
	void OnDropPropComplete ( int ErrorCode, int AddGP, struct FUniquePropId PropId, struct FString ItemName );
	void OnShowTeamMatchGroupInfo ( struct FString ResultContent );
	void RequestFriendDemand ( struct FString Uin, int CommodityID );
	void OnImmediateMessage ( unsigned long bUpdateTeamGroup, unsigned long bIsSelfChange );
	void OnNtfChangeFriendName ( struct FString Uin, struct FString NickName, struct FString OldNickNames );
	void OnNotifyFriendOnlineStatus ( int ErrorCode, struct FString Uin, unsigned char OnlineType );
	void SetEnterLobbyMessage ( );
	void ResetChatTarget ( struct FString TargetName );
	void OnEnterSpecialMatchUI ( int CurState );
	void OnEnterRoom ( struct FString inPreState );
	void OnEnterChannel ( struct FString inPreState );
	void OnEnterLobby ( struct FString inPreState );
	void ResetEnterRoomTime ( );
	void InitalizeChatState ( );
	void OnLoad ( );
	void eventOnClose ( );
	void AddDelegates ( );
	void eventOnStart ( );
	bool Event_ClickQTalkRoom ( struct FString strQTRoom );
};

UClass* UGfxMovie_Chat::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovieHelper
// 0x0004 (0x0040 - 0x003C)
class UGfxMovieHelper : public UObject
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 137742 ];

		return pClassPointer;
	};

	void SetCardData ( int CardID, struct FString NickName, int RankLevel, struct FString ClanName, int ClanBG, int ClanBorder, int ClanIcon, int PMLevel, int PrivateFlagClanName, int PrivateFlagPMLevel, TArray< struct FASValue >* args );
	void OnInit ( );
};

UClass* UGfxMovieHelper::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_AchiScoreAwards
// 0x0054 (0x0278 - 0x0224)
class UGfxMovie_AchiScoreAwards : public UGfxMovie_TGBase
{
public:
	class UTGOnlineAchiScoreAwards*                    OnlineAchiScoreAwards;                            		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x022C (0x0004) [0x0000000000000000]              
	struct FString                                     AwardTips;                                        		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AwardItemString;                                  		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AwardMonthTicketString;                           		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AwardScoreTicketString;                           		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AwardGPString;                                    		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CongratulateString;                               		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 137762 ];

		return pClassPointer;
	};

	void FlashLog ( );
	bool EscKeyFunction ( );
	void TestString ( struct FString Info );
	void OnGetAwardReturn ( int ErrorCode, int Level );
	void RequestAward ( int Level, int ItemId, int MoneyType );
	void UpdateListData ( );
	void UpdateAwardsState ( );
	void UpdateAwardsInfo ( );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_AchiScoreAwards::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ActivityDailyCheck
// 0x000C (0x0230 - 0x0224)
class UGfxMovie_ActivityDailyCheck : public UGfxMovie_TGBase
{
public:
	class UTGOnlineActivity*                           OnlineActivity;                                   		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGActivityManager*                          ActivityManager;                                  		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                ActId;                                            		// 0x022C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 137811 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	void CheckToday ( );
	void FlashLog ( struct FString logString );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ActivityDailyCheck::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ActivitySystem
// 0x014C (0x0370 - 0x0224)
class UGfxMovie_ActivitySystem : public UGfxMovie_TGBase
{
public:
	int                                                InviteLevelLimit;                                 		// 0x0224 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ActivityHomePage;                                 		// 0x0228 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UTGOnlineActivity*                           OnlineActivity;                                   		// 0x0234 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoaded : 1;                                      		// 0x0238 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTGActivityManager*                          ActivityManager;                                  		// 0x023C (0x0004) [0x0000000000000000]              
	class UTGUISceneClient*                            SceneClient;                                      		// 0x0240 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FString                                     InviteLevelLimitString;                           		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AskAwardTitleString;                              		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AskAwardFailString;                               		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AskAwardRepeat;                                   		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AskAwardOutOfDateString;                          		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HadRingAlready;                                   		// 0x0284 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RingSuccessful;                                   		// 0x0290 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MsgBoxTitleTip;                                   		// 0x029C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckProgressTitle;                          		// 0x02A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CheckYestodayTips;                                		// 0x02B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckSuccess;                                		// 0x02C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckYestodaySuccess;                        		// 0x02CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckFail_Checked;                           		// 0x02D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckYestodayFail_Checked;                   		// 0x02E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckYestodayFail_TimeNotEnough;             		// 0x02F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckYestodayFail_CheckFull;                 		// 0x02FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckYestodayFail_DidntCheckToday;           		// 0x0308 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckYestodayFail_Else;                      		// 0x0314 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Error;                                            		// 0x0320 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CongratulateString;                               		// 0x032C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouSureOpenTheWebPageString;                      		// 0x0338 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckAwardString;                            		// 0x0344 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckAwardClanPrestigeString;                		// 0x0350 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DailyCheckTomorrowRewardString;                   		// 0x035C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              BeginSeconds;                                     		// 0x0368 (0x0004) [0x0000000000000000]              
	int                                                TabIndex;                                         		// 0x036C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 137846 ];

		return pClassPointer;
	};

	bool OnConfirmOpenActivityWebPage ( );
	void OnClickBigPicture ( );
	void EffectOut ( );
	bool EscKeyFunction ( );
	void OnDailyCheckAward ( int Exp, int MP, int ClanPrestige );
	void GetDailyCheckAward ( int ActId, int AwardGroupIndex );
	void OnDailyCheckToday ( int ActId );
	void OnDailyCheckYestoday ( int ActId );
	void UpdateAwardGroupInfo ( int ActId, int AwardGroupIndex );
	void UpdateAwardInfo ( int ActId );
	void UpdateDailyCheckInfo ( int ActId );
	void UpdateCalendarByActId ( int ActId );
	void UpdateActivityInfoList ( );
	void UpdateActivityUIInfo ( );
	void tmpSetVisible ( unsigned long bVisible );
	void OnRefresh ( );
	bool CheckActivityConfig ( );
	bool CheckActivityPic ( );
	float GetRealTimeDiff ( struct FSystemTimeData NewTimeData, struct FSystemTimeData OldTimeData );
	void ShowActivityBoard ( int TabIdx );
	void LoadLocalizeString ( );
	void OnClickActivityDetail ( );
	void OnShowActivityChanged ( unsigned long flag );
	void SwtichActivityTab ( int TabIdx );
	void OnAskRewardReturn ( int ActivityId, int StageId, int Result, int DeltaTime );
	void OnActivityButtonClick ( int ActivityId, int ButtonType );
	void FlashLog ( struct FString logString );
	void CloseThis ( );
	void UpdateActivityImages ( unsigned long bMainPic );
	void ClearDelegate ( );
	void AddDelegate ( );
	void GotoTab ( int Index );
	void UpdateActivityProgressUI ( int tTime );
	void UpdateActivityUI ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ActivitySystem::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_AddFriend
// 0x0030 (0x0254 - 0x0224)
class UGfxMovie_AddFriend : public UGfxMovie_TGBase
{
public:
	class UGfxMovie_GeneralPlayerList*                 OwnerMovie;                                       		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Uin;                                              		// 0x022C (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x0238 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0244 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                AddType;                                          		// 0x0250 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138037 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnReturn ( );
	void PassphraseFriend ( );
	void ShowPlayerInfo ( );
	void AddFriendTimer ( );
	void AddFriend ( int AddFriendType );
	void OnQueryFriendComplete ( int ErrorCode, struct FString ErrorDesc, struct FString nUin, struct FString nNickName, int nRank, unsigned long nbNeedAuthenInfo );
	void QueryFriend ( int AddFriendType );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_AddFriend::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_GeneralPlayerList
// 0x0124 (0x0348 - 0x0224)
class UGfxMovie_GeneralPlayerList : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamGame*                           OnlineTeamGame;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGModeGuideController*                      OnlineModeMatchController;                        		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameLobby*                     OnlineMultiGame;                                  		// 0x0238 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x023C (0x0004) [0x0000000000000000]              
	class UTGUI_GeneralPlayerList*                     GeneralPlayerList;                                		// 0x0240 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanInviteFriend : 1;                             		// 0x0244 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFollowFriend : 1;                                		// 0x0244 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLockedUI : 1;                                    		// 0x0244 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     LastInviteFriendName;                             		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurListIndex;                                     		// 0x0254 (0x0004) [0x0000000000000000]              
	struct FString                                     CurUin;                                           		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurNickName;                                      		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ListPageTag;                                      		// 0x0270 (0x0001) [0x0000000000000000]              
	unsigned char                                      SNSTraceType;                                     		// 0x0271 (0x0001) [0x0000000000000000]              
	unsigned char                                      LocalRecordTraceType;                             		// 0x0272 (0x0001) [0x0000000000000000]              
	class UTGUI_FriendList*                            FriendSystemUI;                                   		// 0x0274 (0x0004) [0x0000000000000000]              
	class UTGUI_QQFriendList*                          QQFriendListPanel;                                		// 0x0278 (0x0004) [0x0000000000000000]              
	class UTGUI_FriendCardList*                        FriendCardListPanel;                              		// 0x027C (0x0004) [0x0000000000000000]              
	int                                                InviteType;                                       		// 0x0280 (0x0004) [0x0000000000000000]              
	struct FString                                     SNSUin;                                           		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SNSNickName;                                      		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      SNSRoomID;                                        		// 0x029C (0x0008) [0x0000000000000000]              
	int                                                SNSZoneID;                                        		// 0x02A4 (0x0004) [0x0000000000000000]              
	int                                                SNSChannelID;                                     		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                SNSRequestId;                                     		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                TeamMatchInviteId;                                		// 0x02B0 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerNickName;                                   		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ReqCardInfoUin;                                   		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInviteFriendTimerObject >          InviteFriendCoolDownArray;                        		// 0x02CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TargetNotOnlineString;                            		// 0x02D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChatTargetFriendString;                           		// 0x02E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChatTargetOtherString;                            		// 0x02F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Tips_NewRecruit;                                  		// 0x02FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Tips_BackRecruit;                                 		// 0x0308 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Text_QQRecruit;                                   		// 0x0314 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Text_NZRecruit;                                   		// 0x0320 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HappyMatchPopContent;                             		// 0x032C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FOnlineFriendNumInfo                        CurOnlineFriendNum;                               		// 0x0338 (0x0008) [0x0000000000000000]              
	int                                                MAXNewTipsCount;                                  		// 0x0340 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MAXBackTipsCount;                                 		// 0x0344 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138045 ];

		return pClassPointer;
	};

	void StealFriendCard ( struct FString Uin, int CardIndex, int nStealType );
	void ReqFriendCardList ( );
	void OnRecruitBtnClickedInQQList ( int Index );
	void ReqQQFriendList ( );
	void EvaluateFriend ( int Index );
	void OnRejectAskforCommodity ( struct FString SendUin, struct FString SendNickName, int nCommodityID, int AvailTime, int RequestId );
	void OnAskBuyCommodity ( int ErrorCode, int CommodityID, int PriceSelect, int RequestId, struct FString* SendUin, struct FString* SendNickName );
	void OnNtfOfflineMessagesComplete ( int ErrorCode, struct FString* ErrorDesc );
	void OnRemoveMessageComplete ( int ErrorCode, struct FString* ErrorDesc );
	void OnButtonMessageClick ( unsigned long bOpenBox );
	void OnAddMessageComplete ( int ErrorCode, struct FString* ErrorDesc );
	void FriendGetFriendAdress ( int Index );
	void FriendInviteFriend ( int IndexInFriendList );
	void FriendFollowFriend ( int Index );
	void FriendPassphraseFriend ( int Index );
	void OnMarkFriend ( int Index, unsigned long bTeam );
	void FriendDeleteEnemy ( int IndexInBlackList );
	void FriendDeleteFriend ( int Index );
	void FriendAddTeammate ( int Index );
	void FriendShowFriendDetail ( int Index );
	void FriendInvitePlayerPKMatch ( int Index );
	void FriendLeaveMessage ( int Index );
	void OnFriendEnforceOffline ( int Index );
	void FriendMoveFriendToBlackList ( int Index );
	void OnFriendGagPlayer ( int Index );
	void OnFriendStopAccount ( int Index );
	void FriendGetPlayerCardInfo ( int Index, unsigned char ListTagType );
	void GetFriendGroupInfo ( int FriendIndex );
	void OnDeleteEnemyComplete ( int ErrorCode, struct FString PlayerUin, struct FString* ErrorDesc );
	void OnAddEnemyComplete ( int ErrorCode, struct FString PlayerUin, struct FString* ErrorDesc );
	void ClearBlackDelegates ( );
	void AddBlackDelegates ( );
	void UpdateBlackList ( );
	void GetBlackList ( );
	void UpdateMCPostion ( );
	void DeleteAllMessages ( );
	void NextPage_MessageBox ( );
	void PrePage_MessageBox ( );
	void GoPage_MessageBox ( int MessageBoxPageIndex );
	void MessageCheckSelecteChange ( unsigned long bSelected, int MessageIndex );
	void ExpandMessageInBox ( unsigned long bExpand, int MessageIndex );
	void DeleteSelectedMessages ( );
	void GetMessageDetail ( int MessageIndex );
	void GetMessageTitals ( );
	void MessageResponse_Refuse ( int MessageIndex );
	void MessageResponse_Cancel ( int MessageIndex );
	void MessageResponse_Ok ( int MessageIndex );
	void MessageResponse_GoToMyGears ( int MessageIndex );
	void GetAdsorptionPoint ( );
	void SortFriendListByStatus ( int CurSortType );
	void SortFriendListByNickName ( int CurSortType );
	void SortFriendListByChummy ( int CurSortType );
	void SortFriendListByRank ( int CurSortType );
	void DelectGroup ( int nGroupID );
	void ModifyGroupName ( int nGroupID );
	void AddFriendGroup ( );
	void SavePrivateSettings ( );
	void GetPrivateSettings ( );
	void ChangeGroup ( int FriendInListIndex, int GroupID );
	void OpenAddFriendMovie ( );
	void UpdateNickName ( struct FString NewNickName );
	void GetBlackAddress ( int IndexInBlackList );
	void GetFriendAdress ( int IndexInFriendList );
	void ShowASLog ( struct FString ASLog );
	void OnRefusePublicInvited ( );
	bool OnEnterRoomFailed ( );
	void EnterRoomByPassword ( struct FString Password, unsigned long bFollow );
	bool OnCallBackInputEnterRoomByFollow ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	bool OnCallBackInputEnterRoomByNone ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnServerEnterRoom ( int ErrorCode, struct FString* ErrorDesc );
	void TraceEnterRoom ( );
	void OnTraceLeaveRoomResult ( int ErrorCode, int LeaveReason, struct FString* ErrorDesc );
	void OnLeaveRoomResultByChangeZone ( int ErrorCode, int LeaveReason, struct FString* ErrorDesc );
	void LeaveRoom ( );
	bool OnMessageBox_Cancel ( );
	bool OnMessageBox_Confirm ( );
	void OnFollowFriendComplete ( int ErrorCode, struct FString Uin, int ZoneId, int ChannelId, struct FQWord RoomID, struct FString* ErrorDesc );
	void OnResInviteFriendComplete ( int ErrorCode, struct FString NickName, int Reason, struct FString* ErrorDesc );
	bool NeedTraceChannel ( struct FQWord CurRoomId, int CurSubId );
	void NeedChangeZoneByTrace ( struct FString CurHost, int CurPort, int CurSubId );
	bool bProcessPreTraceEnterRoom ( int CurMainId, int CurSubId, struct FQWord CurRoomId );
	void OnAcceptPublicInvited ( );
	struct FString GetMatchTargetName ( unsigned char RuleType, unsigned char RuleValue );
	int GetModeIndexByID ( int CurrentIds );
	struct FString GetMatchNames ( int CurrentIds );
	struct FString GetMapNames ( int CurrentIds );
	void OnReqInviteFriendComplete ( int ErrorCode, struct FString Uin, struct FString NickName, int ZoneId, int ChannelId, int RequestId, struct FMultiGameLobbyRoomInfo RoomInfo, unsigned long bHasFriendInjury, unsigned long bAllowThrowWeapon, struct FString* ErrorDesc );
	void OnNtfInvitedPlayerIntoRoom ( int ErrorCode, struct FString InvitedPlayerUin, struct FString InvitedPlayerNickName, int ChannelSubId, struct FMultiGameLobbyRoomInfo RoomInfo );
	void CloseRightClickMenu ( );
	void InvitePlayerPKMatch ( int Index, struct FString Uin, struct FString NickName );
	void AddTeammate ( int Index, struct FString Uin );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( int Index, struct FString Uin );
	void OnEnforceOffline ( int Index, struct FString Uin );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( int Index, struct FString Uin );
	void FlashLog ( );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void OtherGetPlayerCardInfo ( struct FString Uin, struct FString NickName );
	void GetPlayerCardInfo ( int Index );
	void OpenRightClickMenu ( );
	void RequestOpenRightClickMenu ( int Index );
	void OtherRequestOpenRightClickMenu ( struct FString Uin );
	void OnResponseSwitchChannel ( int ErrorCode, int EnterMainChannelId, int EnterSubChannelId );
	void OnLeaveRoomResult ( int ErrorCode, int LeaveReason, struct FString* ErrorDesc );
	void OnNtfZoneFull ( int ErrorCode, struct FString ErrorContent );
	void OnResponseSwitchZone ( int ErrorCode, int EnterMainChannelId, int EnterSubChannelId );
	void SwitchZoneTimeOut ( );
	void OnRefuseInvited ( struct FString sInviteUIn, unsigned char nInviteType );
	void OnAcceptInvited ( struct FString sInviteUIn, unsigned char nInviteType );
	void OnNtfInviteJoinHappyMatch ( );
	void OnNtfInviteJoinPersonalMatch ( struct FString sInviteName, struct FString sInviteContent );
	void OnRefusePMInvited ( );
	void OnAcceptPMTeamInvited ( );
	void OnNtfInviteJoinPMTeam ( int PMTeamId, struct FString PMTeamInviteUin, struct FString PMTeamInviteName );
	void OnRefuseTMInvited ( );
	void OnAcceptTMTeamInvited ( );
	void OnNtfInviteJoinTMTeam ( int PMTeamId, struct FTMTeamPlayerInfo StTeamLeader );
	void OnRefuseModeMatchInvited ( );
	void OnAcceptModeMatchInvited ( );
	void OnNtfInviteJoinModeMatchTeam ( );
	void OnRefuseTeamGameInvited ( );
	void OnAcceptTeamGameInvited ( );
	void OnNtfInviteJoinTeamMatch ( struct FString sTeamGameRequistUin, struct FString sTeamGameRequistName, int nTeamMatchInviteId );
	void OnRefuseTeamMatchGroupInvited ( struct FString InviteUin, int nTeamInviteType );
	void OnAcceptTeamMatchGroupInvited ( struct FString InviteUin, int nTeamInviteType );
	void OnNtfInviteJoinTeamMatchGroup ( struct FString InviteUin, struct FString GroupName, unsigned long bIsTempGroup );
	void GetSingleMatchTopList ( );
	void AddSingleMatchDelegate ( );
	void ClearSingleMatchDelegate ( );
	void ChangeToSingleMatchTopPanel ( );
	void GetPlayedFriendData ( );
	void OnGetOnlinePlayerClanComplete ( int ErrorCode, TArray< struct FString > PlayerUins, TArray< struct FString > ClanNames );
	void OnGetOnlinePlayerComplete ( int ErrorCode );
	void GetOnlinePlayerList ( );
	void GetOnlinePlayerData ( );
	void UpdateOnlinePlayerData ( );
	void ClearOnlinePlayerDelegate ( );
	void AddOnlinePlayerDelegate ( );
	void OnCreateBtnClick ( );
	void OnJoinBtnClick ( );
	void OnNotifyMemberStateChange ( unsigned char ChangedTye, unsigned long bUpdateTeamGroup, unsigned long bIsSelfChange, unsigned char bSelfIsbanSpeech, struct FString MemberUinA, struct FString MemberUinB );
	void ClearMyTeamMateDelegate ( );
	void AddMyTeamMateDelegate ( );
	void UpateGeneralTeamMate ( );
	void GetMyTeamMateData ( );
	bool AddEnemy_Confirm ( );
	void AddEnemy ( int IndexInFriendList, struct FString Uin, struct FString NickName );
	bool OnMoveFriendToBlackList_Cancel ( );
	bool OnMoveFriendToBlackList_Confirm ( );
	void MoveFriendToBlackList ( int IndexInFriendList, struct FString Uin, struct FString NickName );
	void ShowFriendDetail ( int IndexInFriendList, struct FString Uin, struct FString NickName );
	bool OnButtonConfirm ( );
	void InviteCountDown ( );
	void InviteFriend ( int IndexInFriendList, struct FString Uin, struct FString NickName );
	bool bCanFriendInvited ( struct FString CurFriendName );
	void UpdateInviteFriendList ( );
	void AddFriendToInviteCoolDownList ( struct FString CurFriendName );
	void FollowFriend ( int IndexInFriendList, struct FString Uin );
	bool AddChatPlayer ( struct FString Uin, struct FString NickName );
	void PassphraseFriend ( int IndexInFriendList, struct FString Uin, struct FString NickName );
	bool OnDeleteFriend_Cancel ( );
	bool OnDeleteFriend_Confirm ( );
	void DeleteFriend ( int IndexInList, struct FString Uin );
	void AddFriend ( int IndexInList, struct FString Uin, struct FString NickName );
	void GetFriendListStatus ( );
	void OnNotifyFriendOnlineStatus ( int ErrorCode, struct FString Uin, unsigned char OnlineType );
	void OnGetBlackPlayerRanks ( unsigned char SystemTypes, TArray< struct FString >* PlayerUins, TArray< int >* PlayerExps );
	void OnGetFriendPlayerRanks ( unsigned char SystemTypes, TArray< struct FString >* PlayerUins, TArray< int >* PlayerExps );
	void OnGetFriendStatusComplete ( int ErrorCode, TArray< struct FString > Uins, struct FString* ErrorDesc );
	bool bIsInFriendTab ( );
	void OnDeleteFriendComplete ( int ErrorCode, struct FString PlayerUin, struct FString* ErrorDesc );
	void OnAddFriendComplete ( int ErrorCode, struct FString nUin, struct FString nNickName, struct FString* ErrorDesc );
	void ClearFriendDelegate ( );
	void AddFriendDelegate ( );
	void GetMyFriendData ( );
	void CleanUpDelegates ( );
	void OnNtfChangeFriendName ( struct FString SingleUin, struct FString SingleNickName, struct FString OldNickName );
	void OnGetPlayersTeamName ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< struct FString > PlayerTeamNames );
	void OnUpdatePanelShow ( unsigned char PageTag );
	void OnGetGeneralPlayerAddress ( TArray< struct FString >* UinList, TArray< int >* PlayerStatusList, TArray< struct FGeneralPlayerAddress >* AddressList );
	void GetGeneralPlayerAddress ( );
	void GeneralInputLock ( unsigned long bNeedLock );
	void OnNtfOnlineTeamNum ( int OnlineTeamNum );
	void OnNtfOnlineTeamNumByDelegate ( int OnlineTeamNum );
	void OnNtfOnlineFriendNum ( int OnlineFriendNum );
	void OnLoad ( );
	void CloseAllInvitePanel ( );
	void CloseInvitePlayersPanel ( );
	void OnSetWholePanelHide ( );
	void eventOnClose ( );
	void AddDelegates ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_GeneralPlayerList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PlayerDetailInfo
// 0x0254 (0x0478 - 0x0224)
class UGfxMovie_PlayerDetailInfo : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerUin;                                        		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPlayerPVPData                              PVPData;                                          		// 0x0244 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerPVEData >                    PVERecordArray;                                   		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedModeIndex;                                		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                SelectedMapIndex;                                 		// 0x02B4 (0x0004) [0x0000000000000000]              
	struct FPlayerPPZCompetitionData                   PPZCompetitionData;                               		// 0x02B8 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPlayerPPZCompetitionData                   PZ2CompetitionData;                               		// 0x031C (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPlayerPPZBreakthroughData                  PPZBreakthroughData;                              		// 0x0380 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAchiCardData >                     AchiCardList;                                     		// 0x03A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAchiCardData >                     CurrentCardList;                                  		// 0x03B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PageIndex;                                        		// 0x03C0 (0x0004) [0x0000000000000000]              
	int                                                PageIndex_Max;                                    		// 0x03C4 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x03C8 (0x0004) [0x0000000000000000]              
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x03CC (0x0004) [0x0000000000000000]              
	class UTGOnlineFriendImpression*                   OnlineFriendImpress;                              		// 0x03D0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsReqSingleMatchData : 1;                        		// 0x03D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsReqFightModeData : 1;                          		// 0x03D4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPrivate_SPM : 1;                                 		// 0x03D4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPrivate_TM : 1;                                  		// 0x03D4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bModifySettings : 1;                              		// 0x03D4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      SkipToImpressionTap : 1;                          		// 0x03D4 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FPlayerCardInfo                             stSaveCardInfo;                                   		// 0x03D8 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPVEModeAndMapInfo >                PVEModeAndMapInfoArray;                           		// 0x040C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ImpressTypes;                                     		// 0x0418 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FFriendImpression >                 ImpressionData;                                   		// 0x0424 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           MyImpressionMax;                                  		// 0x0430 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MyImpressionCount;                                		// 0x043C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MyImpressionNew;                                  		// 0x0448 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MyImpressionNewNick;                              		// 0x0454 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PVEModeIdArray;                                   		// 0x0460 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPVEMapIds >                        PVEMapIdArray;                                    		// 0x046C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138073 ];

		return pClassPointer;
	};

	void OnSetFriendsImpression ( int ErrorCode );
	void OnChooseImpression ( int impressionId );
	bool FindImpressionById ( int ImpId, struct FFriendImpression* gFriendImp );
	bool OnGetPlayerImpression ( );
	void SortImpression ( TArray< struct FImpression >* ImpList );
	void OnGetChatTargetNameList ( TArray< struct FChatTarget >* ChatTargetList );
	void OnGetFriendsImpression ( int ErrorCode, TArray< int > ImpIdIndexList, TArray< int > ImpIdCount, TArray< int > NewImpIdList, TArray< struct FString > NewUin );
	void LoadFriendImpressionData ( );
	void OnDontShowPMLevelInCardChanged ( unsigned long flag );
	void OnDontShowTeamNameInCardChanged ( unsigned long flag );
	void ShowASLog ( struct FString ASLog );
	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void OnResGetTTMData ( int ErrorCode, TArray< int > CurTTMData );
	void OnResGetCTMData ( int ErrorCode, TArray< int > CurCTMData );
	void OnResGetMDMData ( int ErrorCode, TArray< int > CurMDMData );
	void OnResGetBIOData ( int ErrorCode, TArray< int > CurBIOData );
	void OnResGetBIO2Data ( int ErrorCode, TArray< int > CurBIO2Data );
	void OnResGetPVMData ( int ErrorCode, struct FPlayerPVMData CurPVMData );
	void ReqGetPVMData ( );
	void UpdatePersonalMySeasonInfo ( unsigned long bHideData );
	void OnUpdateSingleMatchData ( struct FPersonalMatchDataInfo SingleMatchInfo );
	void OnResGetSingleMatchData ( int ErrorCode, unsigned long bIsVisible, int GameTimes, int FightScore );
	bool bIsFriendOrTeammate ( struct FString CurPlayerUin );
	void ReqGetSinglePersonalMatchData ( );
	void OnGotoPage_ButtonClicked ( );
	void OnLastPageButtonClicked ( );
	void OnNextPageButtonClicked ( );
	void OnPreviousPageButtonClicked ( );
	void OnFristPageButtonClicked ( );
	void OnModifyCardComplete ( int Result, int* AchiCardID );
	void ModifyCard ( int CardID );
	void UpdateCardList ( );
	void OnGetCardListComplete ( int Result, TArray< int >* AchiIDList, TArray< int >* AchiLevelList, TArray< int >* AchiFlagList );
	void ShowAllRank ( );
	void GetCardList ( );
	void InitEachAchieveData_old ( struct FString AchieveName, int CompletedCount, int TotalCount, int* CompletedAchieveTotal, TArray< struct FString >* AchieveArray, TArray< int >* ProgressArray );
	void InitEachAchieveData ( int AchiClassifyID, int* CompletedAchieveTotal, TArray< struct FString >* AchieveArray, TArray< int >* ProgressArray );
	void ReqGetAchieveData ( );
	void OnGetRecentlyAchievedComplete ( int ErrorCode, struct FString* ErrorDesc );
	void ReqChangeIsShowTeamInfo ( unsigned long bPrivate );
	void ReqChangeIsShowPersonalInfo ( unsigned long bPrivate );
	void ReqComparePVPData ( );
	void OnCancelPressed ( );
	void OnResTeamMatchData ( int ErrorCode, unsigned long bIsVisible );
	void InitalPVEEachLevelData ( struct FPVEModeMatchData EachPVEData, unsigned char LevelNum, TArray< int >* DataArray );
	struct FString GetCurrentChooseBitmap ( int CurMode, int CurMap );
	void GetPVEModeAndMapInfo ( );
	void ReqShowPVERecordByMap ( int iModeIndex, int iMapIndex );
	void OnResGetPVEData ( int ErrorCode, TArray< struct FPlayerPVEData > CurPVERecordArray );
	void InitalPVPEachModeData ( struct FPVPModeMatchData SingleModeData, int MatchMode, unsigned long bSingleMatch, TArray< struct FString >* DataArray );
	bool bPKMatch ( int ModeId );
	bool bSpecialMatch ( int ModeId );
	void UpdatePVPDataUI ( );
	void UpdatePVPCompareUI ( struct FPlayerPVPData CurPVPData );
	void OnResGetSV3Data ( int ErrorCode, struct FPlayerPPZBreakthroughData CurSV3Data );
	void OnResGetPZ2Data ( int ErrorCode, struct FPlayerPPZCompetitionData CurPZ2Data );
	void OnResGetPPZData ( int ErrorCode, struct FPlayerPPZCompetitionData CurPPZData );
	void OnResGetPVPData ( int ErrorCode, struct FPlayerPVPData CurPVPData );
	void SetSimpleCardData ( int CurExpValue, struct FString NickName );
	void ReqGetPVEData ( );
	void ReqGetPVPData ( );
	void OnGetNickSignature ( TArray< struct FString > SignatureList, TArray< int > SignatureCount );
	void OnShowPlayerRanks ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	void SetMyCardInfo ( );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void ShowImpressionTap ( );
	void TestGetSV3Data ( );
	void TestGetPZ2Data ( );
	void TestGetPPZData ( );
	void OnLoad ( );
	bool DoNothing ( );
	void OnGetDataTimer ( );
	void eventOnClose ( );
	void LocalizeConfigData ( );
	void eventOnStart ( );
	void AddDelegates ( );
};

UClass* UGfxMovie_PlayerDetailInfo::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_AddTeammate
// 0x002C (0x0250 - 0x0224)
class UGfxMovie_AddTeammate : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0228 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                AddType;                                          		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurPageIndex;                                     		// 0x0230 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurPageMax;                                       		// 0x0234 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FRecruitMemberInfo >                RecruitMemberList;                                		// 0x0238 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FInvitedPlayerInfo >                InvitePlayerUins;                                 		// 0x0244 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138086 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCloseMovie ( );
	void OnGotoPageClicked ( int Index );
	void OnNextPageClicked ( );
	void OnPrePageClicked ( );
	void OnAddFriendClicked ( int Index );
	void OnPlayerInfoClicked ( int Index );
	void OnAddMemberClicked ( int Index );
	void UpdateRecruitList ( int PageIndex );
	void OnResRecruitMemberList ( int ErrorCode, TArray< struct FRecruitMemberInfo > CurMemberList );
	void ShowInviteResultTip ( int ErrorCode, struct FString InvitePlayerUin );
	void OnResInvitePlayerJoin ( int ErrorCode, struct FString InvitePlayerUin );
	bool bHasInvitePlayer ( struct FString CurPlayerUin );
	void OnResQueryFriend ( int ErrorCode, struct FString Uin, struct FString NickName, int nRank, unsigned long nbNeedAuthenInfo, struct FString* ErrorDesc );
	void QueryMember ( unsigned long bNickName );
	void ShowAddTip ( unsigned long bCorrect, struct FString MessageContent );
	void OnLoad ( );
	int AS_NotifyLoaded ( unsigned long bWorldChangeEvent );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_AddTeammate::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_AllRank
// 0x001C (0x0240 - 0x0224)
class UGfxMovie_AllRank : public UGfxMovie_TGBase
{
public:
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x0230 (0x0004) [0x0000000000000000]              
	TArray< struct FTGRankInfo >                       RankInfo;                                         		// 0x0234 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138187 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnClosePressed ( );
	void SetMyCardInfo ( );
	void LocalizeConfigData ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_AllRank::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Avatar
// 0x004C (0x0270 - 0x0224)
class UGfxMovie_Avatar : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGUIAvatarWidget*                           AvatarWidget;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGAvatarMovieProxy*                         MovieProxy;                                       		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                LastRoleSubType;                                  		// 0x0230 (0x0004) [0x0000000000000000]              
	TArray< struct FCharacterListElement >             CharacterList;                                    		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FShopCharacterListElement >         ShopCharacterList;                                		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RoleIndex;                                        		// 0x024C (0x0004) [0x0000000000000000]              
	int                                                RoleIndex_Max;                                    		// 0x0250 (0x0004) [0x0000000000000000]              
	unsigned long                                      LockAvatarMovie : 1;                              		// 0x0254 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanChangeRole : 1;                               		// 0x0254 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCurPlayerReady : 1;                              		// 0x0254 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInShopUI : 1;                                    		// 0x0254 (0x0004) [0x0000000000000000] [0x00000008] 
	class UTexture*                                    DefaultCharacterIcon;                             		// 0x0258 (0x0004) [0x0000000000000000]              
	int                                                PreviewCamp;                                      		// 0x025C (0x0004) [0x0000000000000000]              
	int                                                CurRoleSelectedIndex;                             		// 0x0260 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             OnChangeShopRoleByIndex;                          		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138230 ];

		return pClassPointer;
	};

	void OnBuyComplete ( int ErrorCode, struct FResBuyCommodityInfo BuyedCommodity );
	void OnShopChangeRole ( int Index );
	void ConfigShopMovie ( );
	void InitShopRoleList ( TArray< struct FRoleElement > RoleIDInfos, int CurSelectedIndex, struct FScriptDelegate ChangeRoleClickedWithParameter );
	void GetShopRoleList ( TArray< struct FRoleElement > RoleIDInfos );
	void OnTeamBadgeChange ( int ErrorCode );
	void UpdateAvatarByRoleSubType ( int CurRoleSubType, unsigned long bNoPreview, unsigned long bOnInit );
	void OnCheckNeedUpdateAvatar ( struct FUniquePropId PropId );
	void OnTakeoffPropComplete ( int ErrorCode, struct FUniquePropId PropId, struct FString* ErrorDesc );
	void OnEquipPropComplete ( int ErrorCode, struct FUniquePropId PropId, struct FString* ErrorDesc );
	void OnDropPropComplete ( int ErrorCode, int AddGP, struct FUniquePropId PropId, struct FString ItemName );
	void TurnRightTimer ( );
	void EndTurnRight ( );
	void BeginTurnRight ( );
	void TurnLeftTimer ( );
	void EndTurnLeft ( );
	void BeginTurnLeft ( );
	void OnRotateRole ( );
	void OnLobbyButtonClicked_AS ( );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void LoadingComplete ( );
	void ShowChangeRoleLoading ( );
	void OnNtfUpdateAvatar ( );
	void OnChangeRoleComplete ( int ErrorCode, struct FString* ErrorDesc );
	void OnAvatarChangeRole ( int Index );
	void OnChangeRole ( int Index );
	void UpdateAvatar ( unsigned long bNoPreview, unsigned long bOnMovieInit );
	void GotoAndShopRole ( );
	void OnPreviousPage_ButtonClicked ( );
	void OnNextPage_ButtonClicked ( );
	void GeneralInputLock ( unsigned long bPlayerReady );
	bool IsPlayerReadyInRoom ( );
	void ConfigMovie ( unsigned char CurUISystermType );
	void InitCharacterList ( int PreviewCampType );
	void GetAvatarCharacterList ( int PreviewCampType );
	void ChangeCharacterListByCamp ( int PreviewCampType );
	void OnLoad ( );
	void AddDelegates ( );
	void DisableChangeRole ( unsigned long bDisabled );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_Avatar::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_BaseRoom
// 0x003C (0x0260 - 0x0224)
class UGfxMovie_BaseRoom : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FCurrentMapsInfo_Room                       CurrentMaps;                                      		// 0x022C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPVESubModeTypeMappings                     CurrentSubMode;                                   		// 0x023C (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ContainedMatchTypeIndexs;                         		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138297 ];

		return pClassPointer;
	};

	void GetCurrentPVESubModeData ( struct FMatchTypeMappings CurModeInfo, int nCurConfigMapIndex, int* bContainedHero );
	void GetPVPSubModeTypeNames ( TArray< int > SubModeArray );
	void GetSubModeTypeNames ( struct FMatchTypeMappings CurMatchInfo, unsigned long bCheckPlayerCount, int nPlayerCountIndex, TArray< struct FString >* NameArrays );
	bool bIncludePlayerCountInMode_Sub ( int nModeIndex, int nPlayerCountIndex );
	bool bIncludePlayerCountInMode ( int nModeIndex, int nPlayerCountIndex );
	bool bIncludePlayerCountInMap ( int nMapIndex, int nPlayerCountIndex, int nModeIndex, unsigned long bNeedCheckMode );
	void ClearCurrentMaps ( );
	void OnSuperLoad ( );
};

UClass* UGfxMovie_BaseRoom::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_MultiPlayerRoom
// 0x0138 (0x0398 - 0x0260)
class UGfxMovie_MultiPlayerRoom : public UGfxMovie_BaseRoom
{
public:
	class UGfxMovie_PlayerDetailInfo*                  PlayerDetailPanel;                                		// 0x0260 (0x0004) [0x0000000000000000]              
	int                                                RealMatchIndexOfSub;                              		// 0x0264 (0x0004) [0x0000000000000000]              
	int                                                CurrentMatchType;                                 		// 0x0268 (0x0004) [0x0000000000000000]              
	int                                                CurrentRule;                                      		// 0x026C (0x0004) [0x0000000000000000]              
	TArray< struct FMatchTypeMappings >                CurrentMatchTypes;                                		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRuleSetting >                      CurrentRuleSettings;                              		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGameRuleMappings                           CurrentRules;                                     		// 0x0288 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRuleValueMappings                          CurrentRuleValues;                                		// 0x02AC (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRespawnTimeMappings                        CurrentRespawnTimes;                              		// 0x02C4 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RoomSettingsRequestLock;                          		// 0x02DC (0x0004) [0x0000000000000000]              
	class UTGOnlineChatManager*                        ChatManager;                                      		// 0x02E0 (0x0004) [0x0000000000000000]              
	struct FString                                     SNSUin;                                           		// 0x02E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      SNSRoomID;                                        		// 0x02F0 (0x0008) [0x0000000000000000]              
	int                                                SNSZoneID;                                        		// 0x02F8 (0x0004) [0x0000000000000000]              
	int                                                SNSChannelID;                                     		// 0x02FC (0x0004) [0x0000000000000000]              
	int                                                SNSRequestId;                                     		// 0x0300 (0x0004) [0x0000000000000000]              
	unsigned char                                      SNSTraceType;                                     		// 0x0304 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentWorldType;                                 		// 0x0305 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurCheckTarget;                                   		// 0x0306 (0x0001) [0x0000000000000000]              
	unsigned char                                      playGameType;                                     		// 0x0307 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurNZPropMCType;                                  		// 0x0308 (0x0001) [0x0000000000000000]              
	unsigned long                                      bLoad : 1;                                        		// 0x030C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClearData : 1;                                   		// 0x030C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bObserverAble : 1;                                		// 0x030C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanInviteFriend : 1;                             		// 0x030C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bGMPlayer : 1;                                    		// 0x030C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPVESuperHero : 1;                                		// 0x030C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHandOverHost : 1;                                		// 0x030C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHasEquipedSkills : 1;                            		// 0x030C (0x0004) [0x0000000000000000] [0x00000080] 
	struct FString                                     LastInviteFriendUin;                              		// 0x0310 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   RoomMusic;                                        		// 0x031C (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0320 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0324 (0x0004) [0x0000000000000000]              
	class UTGOnlineChannelController*                  ChannelController;                                		// 0x0328 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerNickName;                                   		// 0x032C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerUinString;                                  		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPVENZPropInfo >                    PVENZPropList;                                    		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ReqCardInfoUin;                                   		// 0x0350 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedPlayerSeatIndex;                          		// 0x035C (0x0004) [0x0000000000000000]              
	int                                                CurPlayerCountIndex;                              		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              BeginSeconds;                                     		// 0x0364 (0x0004) [0x0000000000000000]              
	struct FString                                     TipsCloseRedNameTip;                              		// 0x0368 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TipsCloseVedioRecord;                             		// 0x0374 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TipsEnterQQTalkRoom;                              		// 0x0380 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TipsCloseDeathBack;                               		// 0x038C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138296 ];

		return pClassPointer;
	};

	void OnResJoinLiveGame ( int ErrorCode );
	void OnEnterMoreWatcherRoom ( );
	void ShowChangeRoomNameResult ( unsigned long bSucc, struct FString ResultInfo );
	void OnNtfChangeRoomName ( struct FString ChangedName );
	void OnResChangeRoomName ( int ErrorCode );
	void OnChangeRoomNameClicked ( );
	int GetCurrentNoviceVideoTypeId ( );
	void OnNoviceVideoBtnClicked ( );
	void OnResChangeRoomOwner ( int ErrorCode );
	void OnShowScoreBoard ( );
	void OnHandOverHostBtnClicked ( int Index );
	void UpdateNickNameWith32 ( struct FString PlayerName );
	void UpdateNickNameWith16 ( struct FString PlayerName );
	void UpdateNickName ( struct FString PlayerName );
	void AsShowLog ( struct FString ShowContent );
	void OnShowPVEEncouragementList ( );
	void OnReqGetTopRankList ( );
	void InviteIdlePlayers ( );
	int OnGetInvitePlayerMaxInRoom ( );
	void ShowASLog ( struct FString ASLog );
	void CloseRightClickMenu ( );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( int Index );
	void OnEnforceOffline ( int Index );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( int Index );
	void AddTeammate ( int Index );
	void InvitePlayerPKMatch ( int Index );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void GetPlayerCardInfo ( int Index );
	void OpenRightClickMenu ( );
	void ReqOpenRightClickMenu ( );
	void OnResAddFriendComplete ( int ErrorCode, struct FString Uin, struct FString NickName, struct FString* ErrorDesc );
	void OnDeleteEnemyComplete ( int ErrorCode, struct FString PlayerUin, struct FString* ErrorDesc );
	void OnAddEnemyComplete ( int ErrorCode, struct FString PlayerUin, struct FString* ErrorDesc );
	bool AddEnemy_Confirm ( );
	void AddEnemy ( int Index );
	bool OnMoveFriendToBlackList_Cancel ( );
	bool OnMoveFriendToBlackList_Confirm ( );
	void MoveFriendToBlackList ( int Index );
	void PassphraseFriend ( int Index );
	void ShowPlayerDetail ( int Index );
	bool OnButtonConfirm ( );
	void InviteCountDown ( );
	bool OnDeleteFriend_Cancel ( );
	int GetPlayerSeatIndexByUin ( struct FString PlayerUin );
	void OnDeleteFriendComplete ( int ErrorCode, struct FString PlayerUin, struct FString* ErrorDesc );
	bool OnDeleteFriend_Confirm ( );
	void DeleteFriend ( int Index );
	void AddFriend ( int Index );
	void LockInput_Guest ( unsigned long bIsLockInputInFrameGuest );
	void LockInput_Host ( unsigned long bIsLockInputInFrameHost );
	void LockInput_JoinInGame ( unsigned long bIsLockInputInFrameJoinInGame );
	void LockFunctionalButtons ( unsigned long bLock );
	bool OnMessageBox_Cancel ( );
	bool OnMessageBox_Confirm ( );
	bool OnEnterRoomFailed ( );
	void RequestRoomSettingsChange ( );
	void OnRoomSettingsReturn ( );
	void OnPlusGameSettingsReturn ( );
	void OnDefendChanged ( unsigned long bEnable );
	void OnShotHeadChanged ( unsigned long bEnable );
	bool DisableVedioReset ( );
	void OnCloseVedioRecordChange ( unsigned long bDisable );
	void OnCloseDeathBackChange ( unsigned long bDisable );
	void OnCloseRedNameChange ( unsigned long bDisable );
	void OnThirdViewChange ( unsigned long bDisable );
	void OnThrowWeaponChange ( unsigned long bDisable );
	void OnJoinChange ( unsigned long bDisable );
	void OnFriendDamageChanged ( unsigned long bEnable );
	void OnSubTypeChanged ( int Index );
	void OnRecoverPVERoomSetting ( );
	void CorrectHostRoomSettings ( );
	void OnResSetMatchSettings ( int ErrorCode );
	void OnRivivalTimeChanged ( int Index );
	void OnMapChanged ( int Index );
	void UpdateMapIcon ( );
	void OnRuleValueChange ( int Index );
	void OnRuleChanged ( int Index );
	void UpdateChangeOwnerMatch ( );
	void UpdateVedioRecordSelectedSatus ( int nModeIndex );
	void OnMatchTypeChanged ( int Index );
	bool DoNothing ( );
	void OnResKickPlayer ( int ErrorCode );
	void KickPlayer ( int Index );
	void RefreshGuestRoomSetting ( );
	bool AllowShowDeathBackChecked ( int nModeId );
	bool AllowShowQTChecked ( int nModeId );
	void GetRuleInfoByID ( int RuleId, int RuleValue, struct FString* RuleName, struct FString* RuleValueName );
	int GetConfigIndexFromModeId ( int ModeId );
	int GetConfigIndexFromRuleId ( int RuleId );
	bool GenerateMaps ( int ModeId, int SubModeId, unsigned char ContainedType, unsigned char ChangedType );
	void GenerateRespawnTimes ( int ConfigIndex, unsigned long bReSetRespawnTimeSelectedIndex );
	void GenerateRuleValues ( int CurModeIndex, int RuleId, unsigned long bReSetRuleValueSelectedIndex );
	void GenerateRules ( int ConfigIndex, unsigned char ContainedType, unsigned long bReSetRuleSelectedIndex );
	void UpdateCheckBoxSetting ( unsigned long bDisabledCheckBox, int nModeIndexBySub );
	void SetUIOtherRule ( int nModeIndexBySub );
	void SetThrowSelectedInfo ( int nModeIndexBySub );
	void SetCampRoleRule ( int ModeId, int SubModeId );
	void OnShowSkillInfo ( int ModeId, unsigned char ModeType );
	void SetMatchTypeInfo ( );
	void RefreshHostGameSetting ( );
	int GetModeIndexBySub ( );
	void GenerateSubModes ( int CurMatchIndex, unsigned long bReSetSubModeSelectedIndex );
	void OnPlayerQuitMatch ( unsigned char PlayerSeatIndex );
	void OnStartMatch ( int ErrorCode, struct FString* ErrorDesc );
	void OnPlayerSetInMatch ( unsigned char PlayerSeatIndex );
	void OnResJoinMatch ( int ErrorCode, struct FString* ErrorDesc );
	bool OnJoinGame ( );
	bool GotoAartarRoomSkills ( );
	bool GotoAartarRoomNormal ( );
	bool GotoAartarRoomGrenade ( );
	bool GotoAartarRoomPistol ( );
	bool GotoAartarRoomShotGun ( );
	bool GotoAartarRoomSubmachineGun ( );
	bool GotoAartarRoomMachineGun ( );
	bool GotoAartarRoomRifle ( );
	bool GotoAartarRoomSniper ( );
	bool OnContinueGame ( );
	void JoinGame ( );
	bool bNeedEquipWeaponOnRoleInSpecialMatch ( );
	bool bCheckConditonError ( unsigned char SomeCheckTarget );
	void OnResChangePlayerMode ( int ErrorCode );
	void OnChangeRoleComplete ( int ErrorCode, struct FString* ErrorDesc );
	void UpdateAvatar ( );
	void ChangeRole ( );
	void OnNotifyPlayerChangeCampWith32 ( unsigned char OldSeatIndex, unsigned char NewSeatIndex );
	void OnNotifyPlayerChangeCampWith16 ( unsigned char OldSeatIndex, unsigned char NewSeatIndex );
	void OnNotifyPlayerChangeCamp ( unsigned char OldSeatIndex, unsigned char NewSeatIndex );
	void OnChangeToWatchModel ( );
	void OnChangeToFightModel ( );
	void OnUpdateWatchButton ( );
	void OnPlayerChangeCamp ( int ErrorCode, struct FString* ErrorDesc );
	void RequestChangeToSpectator ( );
	void RequestChangeCamp ( unsigned long bLeft );
	void OnPlayerLeave ( unsigned char PlayerSeatIndex, int LeaveReason );
	void OnLeaveRoomResult ( int ErrorCode, int LeaveReason, struct FString* ErrorDesc );
	void OnRecoveLeaveBtn ( );
	void OnSetMultiRoomReturnBtnDisabled ( struct FOnSetMultiRoomReturnBtnDisabled_Param Param );
	void LeaveRoom ( );
	bool EscKeyFunction ( );
	void OnNotifyMatchRoomState ( int RoomFlag );
	bool IsHost ( );
	void UpdatePlayerState ( unsigned char SeatIdx );
	void OnResCreateTeam ( int ErrorCode, struct FString* TeamName );
	void UpdateAllPlayRelationShipByTeamWith32 ( );
	void UpdateAllPlayRelationShip ( );
	void OnNotifyChangeTeamNameWith32 ( struct FString NewTeamName );
	void OnNotifyChangeTeamNameWith16 ( struct FString NewTeamName );
	void OnNotifyChangeTeamName ( struct FString NewTeamName );
	void OnNotifyPlayerAddOrQuitTeamWith32 ( unsigned long bAddTeam, struct FString PlayerUin );
	void OnNotifyPlayerAddOrQuitTeamWith16 ( unsigned long bAddTeam, struct FString PlayerUin );
	void OnNotifyPlayerAddOrQuitTeam ( unsigned long bAddTeam, struct FString PlayerUin );
	bool OnQuitOrAddTeamInRoomWith32 ( );
	bool OnQuitOrAddTeamInRoomWith16 ( );
	void OnQuitOrAddTeamInRoom ( unsigned long bAddTeam );
	unsigned char GetCurrentPlayerStateType ( unsigned char SeatIdx );
	void RefreshFlashByPlayerCountWith32 ( );
	void RefreshFlashByPlayerCountWith16 ( );
	void RefreshFlash ( );
	void bCanChangeCamp ( unsigned long bCan );
	void UpdateCampButtonsState ( unsigned char LeftCount, unsigned char RightCount, unsigned char SpectatorCount );
	void CheckCampPlayerCount ( );
	void OnShowPlayerTeamNamesWith32 ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< struct FString > PlayerTeamNames );
	void OnShowPlayerTeamNamesWith16 ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< struct FString > PlayerTeamNames );
	void OnShowPlayerTeamNames ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< struct FString > PlayerTeamNames );
	void OnNtfChangeFriendNameWith32 ( struct FString SingleUin, struct FString SingleNickName, struct FString OldNickName );
	void OnNtfChangeFriendNameWith16 ( struct FString SingleUin, struct FString SingleNickName, struct FString OldNickName );
	void OnNtfChangeFriendName ( struct FString SingleUin, struct FString SingleNickName, struct FString OldNickName );
	void SetRankIcon ( int Idx, int Exps );
	void OnShowPlayerRanksWith32 ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	void OnShowPlayerRanksWith16 ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	void OnShowPlayerRanks ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	void DisabledRoomSettingButtons ( );
	void SetRoomPassword ( struct FString CurPassword );
	void OnOwnerChanged ( unsigned char OldOwnerSeatIndex, unsigned char NewOwnerSeatIndex, struct FString CurPassword );
	void NotifyHostStartMatch ( );
	void UpdateSomePlayerShow ( unsigned char PlayerSeatIndex );
	void OnPlayerEnterRoomWith32 ( unsigned char PlayerSeatIndex );
	void OnPlayerEnterRoomWith16 ( unsigned char PlayerSeatIndex );
	void OnPlayerEnterRoom ( unsigned char PlayerSeatIndex );
	void RefreshPlayerState ( int PlayerSeatIndex );
	void OnNtfEquipSpecifiedWeapon ( unsigned char PlayerSeatIndex, unsigned long bEquipWeapon );
	void OnPlayerReady ( unsigned char PlayerSeatIndex );
	void OnNotifyChangeRoomOwnerTimer ( unsigned char TimerType, int StartSeconds );
	void OnNotifyPlayerUIPanel ( unsigned char PlayerSeatIndex, unsigned long bInSettingPanel );
	void ReadySpector ( );
	void ReadyGame ( );
	bool OnReadyGame ( );
	void StartMatchResult ( int ErrorCode, struct FString* ErrorDesc );
	void CheckAllOpenedMovies ( );
	bool OnNotAllPlayerReady ( );
	bool CanStartMatch ( );
	void CloseConnectiongMovie ( );
	void ConnectingMovieTimer ( );
	void StartWatchMatch ( );
	bool bCanStartWatchMatch ( );
	void ReqStartMatch ( );
	void StartMatch ( );
	bool OnStartGame ( );
	void SetPlayerState ( int frame, int Index, unsigned long bHost );
	bool bIsTeamMate ( int Index );
	int GetMyRelationShip ( unsigned char Index, struct FString PlayerUin, unsigned long bIsMe );
	void SetMyRelationShip ( int Index, struct FString PlayerUin, unsigned long bIsMe );
	void SetMyFlag ( struct FString frame, int Index );
	void GotoAndPlay ( unsigned char StateTypes );
	void GeneralInputLock ( unsigned long bNeedLock );
	void eventOnClose ( );
	void OnClearData ( );
	void OnSetPVESkillBtnClicked ( );
	void SetPlayerStatus ( );
	bool IsFinishTrain ( int CheckModeId );
	bool OnStartPPZTest ( );
	bool OnStartMECHTest ( );
	void ShowQTCheckBox ( );
	void OnResGetPVEGameStatus ( int ErrorCode, struct FString strUin, int nSvTimes, int nIfTimes, int nLdTimes, int nAtdTimes );
	bool SetShowNoviceVideoBtn ( );
	void OnTimerStartGame ( );
	void OnLoad ( );
	void ReqPlayerListRank ( );
	void bIsSetJoinMatchTimeLimit ( );
	void UpdateModeDescriptionAndProps ( int ModeId );
	struct FString GetPVEModeDescription ( int ModeId );
	void UpdatePVEPassCardNum ( );
	void SetRoomInfoShow ( );
	bool GetCurrentMatchType ( );
	void OneCheckOutTask ( );
	void SetPVETaskModeData ( );
	void OnUpdatePlayerProps ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnBuyButtonClicked ( int Index );
	void SetNZPropData ( int CurModeId );
	unsigned char bShowNZPropData ( int CurModeId );
	void SetSkillModeData ( struct FSingleBag CurrentBag, int DefaultBagIndex, unsigned char nModeType );
	void OnChangeBagDelegateInRoom ( struct FSingleBag CurrentBag, int DefaultBagIndex );
	void GetEquipedSkillPropsBySort ( struct FSingleBag CurrentBag, TArray< struct FPlayerPropInfo >* EquipedSkillPropInfoArray );
	bool OnbShowPVMSKillShow ( unsigned char ModeType );
	void GetCurrentMatchs ( TArray< struct FMatchTypeMappings >* MatchMapping );
	int GetSubModeIdOfContainMatch ( int CurrentSubIndex, int IndexOfMap );
	bool GetSubModeIndexOfContainMatch ( int ModeId, int* SubIndexs );
	void GetPVESubModeTypeNames ( int Index );
	void CloseInvitePlayersPanel ( );
	void UpdateAvatarPreviewList ( );
	void eventOnStart ( );
	void AddDelegates ( );
};

UClass* UGfxMovie_MultiPlayerRoom::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_AvatarLoading
// 0x0014 (0x0238 - 0x0224)
class UGfxMovie_AvatarLoading : public UGfxMovie_TGBase
{
public:
	int                                                LOADINGTIME;                                      		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                CharacterSubType;                                 		// 0x022C (0x0004) [0x0000000000000000]              
	class UGfxMovie_Avatar*                            SimpleAvatar;                                     		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                RoleID;                                           		// 0x0234 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138328 ];

		return pClassPointer;
	};

	void ShowASLog ( struct FString ASLog );
	void LoadingComplete ( );
	void ShowChangeRoleLoading ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_AvatarLoading::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_GiftList
// 0x003C (0x0078 - 0x003C)
class UTGUI_GiftList : public UObject
{
public:
	class UTexture*                                    DefaultGiftTexture;                               		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUniquePropId >                     GiftIdLists;                                      		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           NickNameList;                                     		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UGfxMovie_AvatarRoom*                        OwnerMovie;                                       		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGFPSCommodityLibrary*                      ComLibrary;                                       		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUniquePropId >                     ConfirmingGiftIdList;                             		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                PageIndex;                                        		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PageIndex_Max;                                    		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138467 ];

		return pClassPointer;
	};

	bool OnGotoPage_ButtonClicked ( );
	bool OnLastPage_ButtonClicked ( );
	bool OnNextPage_ButtonClicked ( );
	bool OnPreviousPage_ButtonClicked ( );
	bool OnFristPage_ButtonClicked ( );
	bool OnNotDo ( );
	void OnConfirmGift ( int ErrorCode, struct FUniquePropId GiftPropId, TArray< int > ItemIDArray );
	void UpdateConfirmGiftButton ( int Index, unsigned long bButtonDisabled );
	void RecoveConfirmGiftButton ( struct FUniquePropId GiftPropId, unsigned long bButtonDisabled );
	void RemoveGiftIdFromComfirmingGiftList ( struct FUniquePropId GiftPropId );
	bool bAddNewIdInComfirmingGiftList ( struct FUniquePropId GiftPropId );
	int bFindGiftIdFromConfirmingGiftIdList ( struct FUniquePropId GiftPropId );
	void ClearConfirmButtonDisableByTime ( );
	void ConfirmGift ( int Index );
	void UpdateGiftList ( );
	void OnPlayerGifts ( int ErrorCode, unsigned long bNotify );
	void OnUnitialized ( );
	void OnInitialized ( );
};

UClass* UTGUI_GiftList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_EquipmentsContent
// 0x0088 (0x00C4 - 0x003C)
class UTGUI_EquipmentsContent : public UObject
{
public:
	class UGfxMovie_AvatarRoom*                        OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FEquipmentContentElement >          EquipmentList;                                    		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPlayerPropInfo                             CurrentPropInfo;                                  		// 0x004C (0x0068) [0x0000000000000000]              
	TArray< struct FPlayerPropInfo >                   PropInfoArray;                                    		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x00C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138469 ];

		return pClassPointer;
	};

	void UpdataEquipmentList ( );
	void OnInitialized ( );
};

UClass* UTGUI_EquipmentsContent::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_BagContent
// 0x0096 (0x00D2 - 0x003C)
class UTGUI_BagContent : public UObject
{
public:
	TArray< struct FBagContentElement >                WeaponArray;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FPlayerPropInfo                             CurrentPropInfo;                                  		// 0x004C (0x0068) [0x0000000000000000]              
	TArray< struct FPlayerPropInfo >                   PropInfoArray;                                    		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGfxMovie_AvatarRoom*                        OwnerMovie;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                CurrentBagIndex;                                  		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInit : 1;                                        		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      EmptyThrowLocationList[ 0x6 ];                    		// 0x00CC (0x0006) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138471 ];

		return pClassPointer;
	};

	void OnTakeOffWeaponComplete ( int ErrorCode, struct FUniquePropId PropId, struct FString* ErrorDesc );
	void OnTakeoffWeapon ( );
	void UpdateBagContent ( );
	void OnUnitialized ( );
	void OnInitialized ( );
};

UClass* UTGUI_BagContent::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_ItemList
// 0x0220 (0x025C - 0x003C)
class UTGUI_ItemList : public UObject
{
public:
	class UGfxMovie_AvatarRoom*                        OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FAvatarCommonItemInfo >             ItemList;                                         		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSingleSkillInfo >                  SkillList;                                        		// 0x004C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniquePropId >                     CurrentTabItems;                                  		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPlayerPropInfo >                   PropInfoArray;                                    		// 0x0064 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FPlayerPropInfo                             CurrentPropInfo;                                  		// 0x0070 (0x0068) [0x0000000000002000]              ( CPF_Transient )
	int                                                BindType;                                         		// 0x00D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SubType;                                          		// 0x00DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ThreeLevelType;                                   		// 0x00E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< unsigned char >                            BindTypeArray;                                    		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            SubTypeArray;                                     		// 0x00F0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x00FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FSingleSkillItem >                  AllSkillItems;                                    		// 0x0100 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniquePropId >                     SkillUniquePropIdArray;                           		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                PageIndex;                                        		// 0x0118 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PageIndex_Max;                                    		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInit : 1;                                        		// 0x0120 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bUnShowEquiped : 1;                               		// 0x0120 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bItemTipCorrect : 1;                              		// 0x0120 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bItemTipVisible : 1;                              		// 0x0120 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FDataTime                                   CurTimes;                                         		// 0x0124 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                ItemTipIndex;                                     		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ItemTipShowName;                                  		// 0x0134 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     EquipBtnLabelText;                                		// 0x0140 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UnEquipBtnLabelText;                              		// 0x014C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RepairBtnLabelText;                               		// 0x0158 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DropBtnLabelText;                                 		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RenewalsBtnLabelText;                             		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DisplayBtnLabelText;                              		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     EUnlockWay_ShopString;                            		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FAvatarCommonItemInfo                       CompareItemInfo;                                  		// 0x0194 (0x00C8) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138473 ];

		return pClassPointer;
	};

	void SortItemList ( );
	void SortUpItemList ( TArray< struct FAvatarItemSampleInfo >* nItemList );
	TArray< struct FUniquePropId > NewGetItemList ( );
	void GetCurrItemList ( unsigned long bInitShow );
	void UpdateSkillShowByNormal ( );
	void UpdateSkillShowByBag ( );
	void UpdateSkillShow ( );
	void UpdateSkillListByNormal ( );
	void UpdateSkillListByBag ( );
	void UpdateSkillList ( );
	int GetEquipToBagIndex ( struct FPlayerPropInfo PropInfo );
	void GetEquipStateAndbUse ( struct FFItemData ItemData, unsigned char nBindType, int* bEquiped, struct FString* EquipBtnLabel );
	void UpdateItemDataInfo ( );
	void UpdateItemList ( );
	void UpdatePageInfo ( );
	bool OnGotoPage_ButtonClicked ( );
	bool OnLastPage_ButtonClicked ( );
	bool OnNextPage_ButtonClicked ( );
	bool OnPreviousPage_ButtonClicked ( );
	bool OnFristPage_ButtonClicked ( );
	void OnInitialized ( );
};

UClass* UTGUI_ItemList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_LevelUp
// 0x0058 (0x027C - 0x0224)
class UGfxMovie_LevelUp : public UGfxMovie_TGBase
{
public:
	class UTGUISceneClient*                            SceneClient;                                      		// 0x0224 (0x0004) [0x0000000000000000]              
	int                                                NewLevelUp;                                       		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FString                                     AwardStr;                                         		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0238 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsShowChestThings : 1;                            		// 0x023C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ChestItemName;                                    		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChestWeaponPath;                                  		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LevelUpString;                                    		// 0x0258 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NewKillString;                                    		// 0x0264 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FLevelUpGiftContent >               GiftContentArray;                                 		// 0x0270 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138611 ];

		return pClassPointer;
	};

	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void EffectComplete ( );
	void CloseThis ( );
	void OnLevelUpByRank ( );
	void OnLevelUpByPMLevel ( );
	void OnShowChestThings ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_LevelUp::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ExpiredList
// 0x004C (0x0270 - 0x0224)
class UGfxMovie_ExpiredList : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	int                                                PayPriceTotal;                                    		// 0x0228 (0x0004) [0x0000000000000000]              
	TArray< struct FShowExpireCommodityInfo >          ExpireCommodityList;                              		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SuccRenewalPropName;                              		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FailRenewPropName;                                		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ResRenewalPropCount;                              		// 0x0250 (0x0004) [0x0000000000000000]              
	int                                                ReqRenewalPropCount;                              		// 0x0254 (0x0004) [0x0000000000000000]              
	int                                                ReqBuyPropCount;                                  		// 0x0258 (0x0004) [0x0000000000000000]              
	int                                                ResBuyPropCount;                                  		// 0x025C (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowExpiredProp : 1;                             		// 0x0260 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateData : 1;                                  		// 0x0260 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     CurPropType;                                      		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138782 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCancelBtnClicked ( );
	void RenewalTimeOut ( );
	void OnBuyComplete ( int ErrorCode, struct FResBuyCommodityInfo BuyedCommodity );
	void OnAddAllPropTimeComplete ( int ErrorCode, struct FUniquePropId PropId, int PayType, int ConsummeTP, int ConsummeGP, int ConsummeMP, TArray< struct FString > NameList, int AddAvailHours );
	bool OnConfirmRenewalAllItems ( );
	void OnRenewalAllItems ( );
	void UpdateTotalPrice ( );
	void OnAddSinglePropTimeComplete ( int ErrorCode, struct FUniquePropId PropId, int PayType, int ConsummeTP, int ConsummeGP, int ConsummeMP, TArray< struct FString > NameList, int AddAvailHours );
	void OnRenewalSingleItem ( int Index, int PriceSelectedIndex );
	void OnShowTPPropList ( );
	void OnShowMPPropList ( );
	void OnPriceSelectedChange ( int ItemIndex, int PriceIndex );
	unsigned char OnGetPriceSelectedIndex ( struct FExpireCommodityInfo ExpireInfo );
	void GetShowExpriedList ( unsigned long bSetPriceSelected );
	void UpdateExpiredList ( unsigned long bSetPriceSelected );
	void OnUpdatePlayerProps ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnLoad ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ExpiredList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_RecordVideo
// 0x0044 (0x0268 - 0x0224)
class UGfxMovie_RecordVideo : public UGfxMovie_TGBase
{
public:
	struct FString                                     ShareVideoUrl;                                    		// 0x0224 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0230 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           VideoFiles;                                       		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                VideoToDeleteIndex;                               		// 0x0240 (0x0004) [0x0000000000000000]              
	struct FString                                     WindowTitle;                                      		// 0x0244 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StrFilePath;                                      		// 0x0250 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RecordFilePath;                                   		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138904 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void HideMessageManager ( );
	void OnUpdateVideoFiles ( );
	bool OnDeleteAllVideoMessageBox_Cancel ( );
	bool OnDeleteAllVideoMessageBox_Confirm ( );
	void DeleteAllVideo ( );
	bool OnDeleteVideoMessageBox_Cancel ( );
	bool OnDeleteVideoMessageBox_Confirm ( );
	void Flash_OnShareVideo ( int Index );
	void Flash_OnInformSomeOne ( int Index );
	void DeleteVideo ( int Index );
	void PlayVideo ( int Index );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_RecordVideo::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ConsumList
// 0x0024 (0x0248 - 0x0224)
class UGfxMovie_ConsumList : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FComsumMoneyInfo >                  ComsumArray;                                      		// 0x0228 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      CurShowConsumType;                                		// 0x0234 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CurConsumSortType;                                		// 0x0235 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bDescendSort : 1;                                 		// 0x0238 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FString                                     CurMoneyType;                                     		// 0x023C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138930 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnQuitMovie ( );
	void OnSortByRemainMoneyButtonClick ( unsigned long _bDescend );
	void OnSortByChangeMoneyButtonClick ( unsigned long _bDescend );
	void OnSortByPathButtonClick ( unsigned long _bDescend );
	void OnSortByDateButtonClick ( unsigned long _bDescend );
	void OnNZConsumListButtonClick ( );
	void OnMPConsumListButtonClick ( );
	void OnGPConsumListButtonClick ( );
	void UpdateConsumList ( unsigned long _bNeedUpdateData, unsigned char _CurConsumSortType, unsigned long _bDescendSort );
	void OnDescendConsumData ( );
	void OnSortConsumDataByRemainMoney ( );
	void OnSortConsumDataByChangeMoney ( );
	void OnSortConsumDataByPath ( );
	void OnSortConsumDataByDate ( );
	void OnSortConsumData ( );
	void OnNtfConsumList ( int ErrorCode );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ConsumList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PVECryptWeaponBoxDisplay
// 0x0010 (0x0234 - 0x0224)
class UGfxMovie_PVECryptWeaponBoxDisplay : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	TArray< struct FPVECryptWeaponBoxItem >            PVECryptWeaponBoxItemArray;                       		// 0x0228 (0x000C) [0x0000000000406000]              ( CPF_Transient | CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138943 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	void CloseThis ( );
	void UpdateCryptWeaponList ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_PVECryptWeaponBoxDisplay::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_BagList
// 0x0064 (0x0288 - 0x0224)
class UGfxMovie_BagList : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UGfxMovie_Avatar*                            AvatarMovie;                                      		// 0x0228 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanChangeBag : 1;                                		// 0x022C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLoadCompleted : 1;                               		// 0x022C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPreLoadItemData : 1;                             		// 0x022C (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< struct FBagWeaponInfo >                    WeaponProps;                                      		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBagWeaponInfo >                    AllBagWeaponArray;                                		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniquePropId                               CurItemPropID;                                    		// 0x0248 (0x0010) [0x0000000000000000]              
	TArray< struct FUniquePropId >                     RenewPropIdList;                                  		// 0x0258 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniquePropId >                     AllNeedRenewPropIdList;                           		// 0x0264 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             OnChangeBagDelegateInRoom;                        		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChangeBagDelegate__Delegate;                  		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138946 ];

		return pClassPointer;
	};

	void RemoveHadRepairProps ( TArray< struct FUniquePropId > PropIdList );
	bool bCheckHadRenewPropId ( struct FUniquePropId NeedRenewPropId );
	bool OnConfrimRepairAllProps ( );
	void OnRepairAllProps ( );
	int OnComputeRepairSinglePrice ( struct FPlayerPropInfo CurrentPropInfo, int RepairPrices );
	void OnComputeRepairAllPropsPrice ( );
	void MoveDown ( );
	void MoveUp ( );
	void FlashLog ( struct FString msg );
	void OnRepairComplete ( int ErrorCode, int ConsummeTP, int ConsummeGP, TArray< struct FString > NameList, TArray< struct FUniquePropId > PropIdList );
	bool OnConfrimRepairProp ( );
	void OnRepairProp ( int ItemIndex );
	void DisabledChangeBag ( unsigned long bDisabled );
	void OnEquipPropComplete ( int ErrorCode, struct FUniquePropId PropId, struct FString* ErrorDesc );
	void OnChangeBag ( int BagIndex );
	bool IsPlayerReadyInRoom ( );
	void ReqBuyGrenadeBag ( );
	void CleanupBagContent ( );
	void UpdateBagContentShowUI ( struct FAvatarCharInfo CharInfo );
	void UpdateBagContent ( );
	void GetAllBagWeaponArray ( struct FAvatarCharInfo CharInfo );
	bool CheckIsHasSpecialWeaponInAllBag ( unsigned char WeaponSubType, int WeaponSubIdA, int WeaponSubIdB );
	bool CheckIsHasExpertWeaponInAllBag ( unsigned char CurWeaponSubType, unsigned char CurWeaponExpertType );
	void CheckBagCount ( );
	void OnLoad ( );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnUpdatePlayerProps ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
	void OnChangeBagDelegate ( struct FSingleBag CurrentBag, int DefaultBagIndex );
};

UClass* UGfxMovie_BagList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ChanelList
// 0x023C (0x0460 - 0x0224)
class UGfxMovie_ChanelList : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameLobby*                     OnlineMultiGame;                                  		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FString                                     SNSUin;                                           		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      SNSRoomID;                                        		// 0x0238 (0x0008) [0x0000000000000000]              
	int                                                SNSZoneID;                                        		// 0x0240 (0x0004) [0x0000000000000000]              
	int                                                SNSChannelID;                                     		// 0x0244 (0x0004) [0x0000000000000000]              
	unsigned char                                      SNSTraceType;                                     		// 0x0248 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurSelectPanel;                                   		// 0x0249 (0x0001) [0x0000000000004000]              ( CPF_Config )
	int                                                SNSRequestId;                                     		// 0x024C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedTraceRoom : 1;                               		// 0x0250 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnterMainChannel : 1;                            		// 0x0250 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsOpenModeMatch : 1;                              		// 0x0250 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	struct FMultiGameRoomFilter                        Filter;                                           		// 0x0254 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentSubChannel;                                		// 0x0264 (0x0004) [0x0000000000000000]              
	float                                              BeginSeconds;                                     		// 0x0268 (0x0004) [0x0000000000000000]              
	int                                                CurrentMainChannel;                               		// 0x026C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FMainChannelInfo >                  CurrentMainChannelList;                           		// 0x0270 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FChannelInfo >                      CurrentSubChannelList;                            		// 0x027C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                CurrentMainChannelID;                             		// 0x0288 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGfxMovie_GeneralPlayerList*                 GeneralPlayerListUI;                              		// 0x028C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ChannelSelectedIndex;                             		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                ModeMatchTimeout;                                 		// 0x0294 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UTGUI_ModeGuide*                             ModeGuideMovie;                                   		// 0x0298 (0x0004) [0x0000000000000000]              
	struct FMatchModeGame                              PVPMode;                                          		// 0x029C (0x002C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FMatchModeGame                              PVEMode;                                          		// 0x02C8 (0x002C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FMatchModeGame                              AGAINSTMode;                                      		// 0x02F4 (0x002C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMatchModeInfo >                    PVPModeList;                                      		// 0x0320 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMatchModeInfo >                    PVEModeList;                                      		// 0x032C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMatchModeInfo >                    AGAINSTModeList;                                  		// 0x0338 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FMatchModeGame                              BIOPVPMode;                                       		// 0x0344 (0x002C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMatchModeInfo >                    BIOPVPModeList;                                   		// 0x0370 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FMatchModeGame                              BIOPVEMode;                                       		// 0x037C (0x002C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMatchModeInfo >                    BIOPVEModeList;                                   		// 0x03A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FMatchModeGame                              BIOAGAINSTMode;                                   		// 0x03B4 (0x002C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMatchModeInfo >                    BIOAGAINSTModeList;                               		// 0x03E0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FGuideModeData                              PVEModeData;                                      		// 0x03EC (0x0018) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FGuideModeInfo >                    PVEModeTypeList;                                  		// 0x0404 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FGuideModeData                              AGAINSTModeData;                                  		// 0x0410 (0x0018) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FGuideModeInfo >                    AGAINSTModeTypeList;                              		// 0x0428 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FGuideModeData                              PVPModeData;                                      		// 0x0434 (0x0018) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FGuideModeInfo >                    PVPModeTypeList;                                  		// 0x044C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                CurrentModeType;                                  		// 0x0458 (0x0004) [0x0000000000000000]              
	int                                                CurrentSelModeId;                                 		// 0x045C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139196 ];

		return pClassPointer;
	};

	void OnOpenNewGuide ( );
	void OnMemberQuitTeam ( );
	void OnReadyMatchGame ( unsigned long bReady );
	void OnCancelMatchGame ( );
	void OnStartMatchGame ( );
	void OnRemovePlayer ( struct FString Uin );
	void OnInvitePlayer ( );
	void OnChooseMap ( int ChooseGameType, int ChooseModeIndex, int ChooseSubModeIndex, int MapIndex, unsigned long bClick );
	void OnChooseSubModeList ( int ChooseGameType, int ChooseModeIndex, int ChooseSubModeIndex, unsigned long bClick );
	void OnChooseModeList ( int ChooseGameType, int ChooseModeIndex, unsigned long bClick );
	void OnChooseGameModeList ( int ChooseGameType, unsigned long bClick );
	void SetPlayerStatus ( unsigned long bEnterModeMatch );
	void IsMaskButtons ( unsigned long bMask );
	void ShowQTCheckBox ( );
	void ShowChannelPanel ( unsigned long bShowPanel );
	void OnExitTeam ( unsigned long bNeedExitTeam );
	void OnEnterGuidePanel ( unsigned char nGuidePanel, unsigned long bClick );
	void OnCloseWeb ( );
	void OnQuickGame ( int ModeId, int MapId );
	void OnWebNotify ( int NotificationType );
	void OnShowGuideWebControl ( int ModeType, int ModeId );
	void OnChangeWorld ( int WorldIndex );
	bool OnCheckPlayerEnterMainChannel ( int CurExpValue, unsigned char EnterChannelType );
	void OnEnterMainChannelFromSub ( );
	void UpdateChannelStateByIsMain ( unsigned long bIsMainChannel, struct FString CurChannelName );
	bool DoEnterMainChannel ( );
	void OnEnterMainChannelClicked ( int SelectedIndex );
	bool bNeedSecondConfirmMainChannel ( int SelectedIndex );
	void OnOnlineMatchBtnClicked ( );
	bool IsCurrentWorldMainChannel ( unsigned char CurrentChanelType );
	void OnUpdateMainChannelList ( );
	int OnGetNetworkState ( int CurPingValue );
	void OnResMainChannelList ( int ErrorCode );
	void ReqMainChannelListByTimer ( );
	void OnResponseChannelPingValue ( int ErrorCode, struct FString* ErrorDesc );
	void ReqChannelPingValue ( );
	void RequestMainChannelList ( );
	void ReqUpdateChannelList ( );
	void OnQueryRoomList ( int ErrorCode, struct FString* ErrorDesc );
	bool OnMessageBox_Cancel ( );
	bool OnMessageBox_Confirm ( );
	void TraceEnterRoom ( );
	void OnResponseSwitchChannel ( int ErrorCode, int EnterMainChannelId, int EnterSubChannelId );
	void OnResponseSwitchZone ( int ErrorCode, int EnterMainChannelId, int EnterSubChannelId );
	void OnNtfZoneFull ( int ErrorCode, struct FString ErrorContent );
	void SwitchZoneTimeOut ( );
	void EnterChannelByIndex ( int Index );
	void EnterChannel ( );
	void OnGetFriendStatusComplete ( int ErrorCode, TArray< struct FString > Uins, struct FString* ErrorDesc );
	void OnUpdateSubChannelList ( );
	void OnResponseChannelList ( int ErrorCode, struct FString* ErrorDesc );
	void ReqChannelListByTimer ( );
	void RequestChannelList ( );
	bool OnEnterRoomFailed ( );
	void OnServerEnterRoom ( int ErrorCode, struct FString* ErrorDesc );
	void QuickEnter ( );
	void UpdateOnlinePlayerData ( );
	void eventOnClose ( );
	void OnClearData ( );
	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void CloseInvitePlayersPanel ( );
	void ConfigChannelUI ( );
	void SetPlayerState ( );
	void OnChangeTab ( unsigned char CurTab );
	void OnInitModeIndex ( );
	void OnLoad ( );
	void ReqRoomList ( );
	void AddDelegates ( );
	void InitMatchModeGameConfigData ( struct FMatchModeGame* Data );
	void eventOnStart ( );
};

UClass* UGfxMovie_ChanelList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_ModeGuide
// 0x0044 (0x0080 - 0x003C)
class UTGUI_ModeGuide : public UObject
{
public:
	TArray< struct FString >                           HardCodedStrings;                                 		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	class UGfxMovie_ChanelList*                        MovieParent;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	class UTGModeGuideController*                      ModeGuideController;                              		// 0x0050 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	class ULocalPlayer*                                LP;                                               		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< class UTexture* >                          TexturePictureList;                               		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture*                                    DefaultMapTexture;                                		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStaticLoadPicture : 1;                           		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockPanel : 1;                                   		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInitComplete : 1;                                		// 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                LastChooseIndex[ 0x4 ];                           		// 0x0070 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139236 ];

		return pClassPointer;
	};

	bool GetHotModeIndex ( int* gIndex );
	void OnShowErrorTips ( int ErrorCode, struct FString StrDesc );
	void OnBeRemoved ( );
	void OnNotifyTeamPlayerChange ( unsigned char nType, struct FString Uin );
	void OnQuitTeam ( );
	void OnResCancelReady ( unsigned long bAgreeCancel );
	void OnCancelReadyMatchGame ( struct FString Uin );
	void OnReadyMatchGame ( struct FString Uin );
	void OnNotifyTeamDismissed ( struct FString Uin );
	void OnExitTeam ( struct FString Uin );
	void OnNotifyTeamMatchStoped ( int nResult );
	void OnNotifyTeamMatchFailed ( int nResult );
	void OnNotifyTeamMatching ( int ExpectTime );
	void OnResRemoveSomeone ( int nTeamId, struct FString Uin, unsigned long bResult, int nReason );
	void OnRemovePlayer ( struct FString Uin );
	void OnNotifySomeoneJoinFailed ( int nTeamId, int nReason );
	void OnResSomeoneRefuseJoinTeam ( int nTeamId, struct FString NickName, int nReason );
	void OnResGetTeamId ( int ErrorCode );
	void OnInvitePlayer ( );
	void GeneralInputLock ( unsigned long bNeedLock );
	int GetCurrentMapIndex ( int CurGameModeType, int CurModeIndex, int CurSubModeIndex, int Index, TArray< int >* AllMapIdData );
	bool GetCurrentMapStatus ( int CurGameModeType, int CurModeIndex, int CurSubModeIndex, int Index, TArray< unsigned char >* AllHotMapStatus );
	int GetCurrentSubModeIndex ( int CurGameModeType, int CurModeIndex, int Index );
	int GetCurrentModeIndex ( int CurGameModeType, int Index );
	void GetMapIdListByIndexList ( TArray< int > AllMapIdList, TArray< int >* MapIdList );
	bool GetMapIdByIndex ( struct FMatchTypeMappings ModeInfo, int nMapIndex, unsigned long bMatchAll, TArray< int > AllMapIdList, TArray< int >* MapIdList );
	bool GetModeDetailData ( int CurGameModeType, int* ModeId, int* SubModeId, TArray< int >* MapIdList, int* bContianedType );
	void OnStopMatchResult ( int ErrorCode, unsigned long bTeam );
	void OnStopMatchGame ( unsigned long bTimeout );
	bool MatchFailedAndGotoChannelList ( );
	void OnNtfStartModeMatch ( int ErrorCode, int ModeId, int SubModeId, int MapId, struct FQWord QTalkRoomId_G, struct FQWord QTalkRoomId_R );
	void OnShowPlayerTeamNames ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< struct FString > PlayerTeamNames );
	void OnNtfServiceDisabled ( int DisabledServiceId );
	void OnMatchResult ( int ErrorCode, unsigned long bTeam );
	void OnStarGameFailed ( int ErrorCode );
	void OnMatchTimeOut ( );
	bool IsFinishTrain ( int CheckModeId );
	bool OnStartPPZTest ( );
	bool CheckBioTutorial ( int ModeId );
	bool CheckMyPVEScore ( int GetCurModeId, int GetCurSubModeId, int GetCurMapId );
	void OnStartMatchGame ( );
	void OnCancelMatchGame ( );
	bool CheckMap ( int ChooseGameType, int ChooseModeIndex, int ChooseSubModeIndex, int MapIndex );
	bool CheckSubMode ( int ChooseGameType, int ChooseModeIndex, int Index );
	bool CheckMode ( int ChooseGameType, int Index );
	int GetChooseMapId ( );
	int GetTextureIndex ( );
	bool CheckChooseIndexChange ( );
	void UpdateBGMap ( );
	bool GetCurrentModeGameType ( struct FMatchModeGame* ReMatchModeGame );
	bool EnableQTChecked ( );
	void OnChangeBGMap ( );
	void OnChooseMap ( int ChooseGameType, int ChooseModeIndex, int ChooseSubModeIndex, int MapIndex, unsigned long bClick );
	void OnChooseSubModeList ( int ChooseGameType, int ChooseModeIndex, int ChooseSubModeIndex, unsigned long bClick );
	void OnChooseModeList ( int ChooseGameType, int ChooseModeIndex, unsigned long bClick );
	void ShowLayerDescriptionText ( int ChooseGameType, int ChooseModeIndex );
	void OnChooseGameModeList ( int ChooseGameType, unsigned long bClick );
	void OnUnintData ( );
	void OnShowInitData ( );
	void SetMatchModeGameTexture ( struct FMatchModeGame* ModeGame );
	bool IsBioWorld ( );
	void OnLoadModeDetail ( unsigned long bSetTextureList );
	void OnLoadBioModeDetail ( unsigned long bSetTextureList );
	void RemoveDelegates ( );
	void AddDelegates ( );
	void SetMapNameByMapId ( struct FMatchModeGame* ModeGame );
	void OnSyncCurrentModeGameIndex ( );
	void OnNotifyModeGameChange ( TArray< int > ModeGameIndex );
	void OnRoleChange ( unsigned long bLeader );
	void OnInitData ( class UGfxMovie_ChanelList* pMovieParent );
};

UClass* UTGUI_ModeGuide::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ModeChange
// 0x0010 (0x0234 - 0x0224)
class UGfxMovie_ModeChange : public UGfxMovie_TGBase
{
public:
	unsigned long                                      IsModeGuidePanel : 1;                             		// 0x0224 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableChannelBtn : 1;                           		// 0x0224 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	TArray< unsigned long >                            ShowStatus;                                       		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139298 ];

		return pClassPointer;
	};

	void OnLockPanel ( unsigned long bLock );
	void OnFocusButton ( unsigned long bGuideButton );
	void OnEnterChannelPanel ( );
	void OnEnterModeMatchPanel ( );
	void ShowRootButton ( unsigned long IsShow, unsigned long IsStillShow );
	void eventOnClose ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ModeChange::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_QuickGame
// 0x0050 (0x0274 - 0x0224)
class UGfxMovie_QuickGame : public UGfxMovie_TGBase
{
public:
	struct FString                                     LastModeName;                                     		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameLobby*                     OnlineMultiGameLobby;                             		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                CurrentModeMenuIndex;                             		// 0x0238 (0x0004) [0x0000000000000000]              
	TArray< struct FQuickGameModeSetting >             AllQuickModeSettingArray;                         		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AllModeNameArray;                                 		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AllModeVisibleArray;                              		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bChangeSetting : 1;                               		// 0x0260 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateGameMenus : 1;                             		// 0x0260 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNewQuickGame : 1;                                		// 0x0260 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     AllMapName;                                       		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineChannelController*                  ChannelController;                                		// 0x0270 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139487 ];

		return pClassPointer;
	};

	void OnResponseSwitchChannel ( int ErrorCode, int EnterMainChannelId, int EnterSubChannelId );
	void OnResponseSwitchZone ( int ErrorCode, int EnterMainChannelId, int EnterSubChannelId );
	bool QuickGameNeedChangeChannel ( );
	bool QuickGameNeedChangeZone ( );
	void OnReponseAllChannelQuickGame ( int ErrorCode );
	void ReSetF3QuickGame ( );
	void CloseF3QuickGame ( );
	void CheckQuickEnterRoom ( );
	void RequestQuickGame ( int ModeId, int MapId, int SubModeId, TArray< int > MapIdArray );
	void QuickGame ( int ModeIndex, int MapIndex );
	void MoveToTop ( unsigned long bTop );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void RefreshQuickGameMenus ( );
	void GetCurrentGameNameInfo ( int* CurrentModeIndex, struct FString* CurrentModeName, struct FString* CurrentMapName, int* CurrentSpcialIndex );
	void GetMapNameAndSpecialStringByIndex ( struct FQuickGameModeSetting CurQuickModeSetting, struct FString* MapStrings, struct FString* SpecialStrings, struct FString* CurrentMapName, int* CurrentSpcialIndex );
	void OnEnterRoom ( int ErrorCode, struct FString* ErrorDesc );
	void AddDelegates ( );
	void CreateRoom ( );
	void OnEnterTutorial ( );
	void OnFindRoomBtnClicked ( );
	void eventOnClose ( );
	void DisableQuickGameButton ( unsigned long bDisable );
	void ShowNewPlayerGuideButton ( unsigned long bShow );
	void MaskControlInBIOWorld ( );
	void NotifyMovieHide ( unsigned long bHide );
	void Initialize ( );
	bool IsFinishAllLocalMatch ( );
	void OnLoad ( );
	bool GetIsTraditionMode ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_QuickGame::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Task
// 0x0060 (0x0284 - 0x0224)
class UGfxMovie_Task : public UGfxMovie_TGBase
{
public:
	float                                              BeginSeconds;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentGroupUI;                                   		// 0x0228 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsTaskCenter : 1;                                		// 0x022C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LastRequestTaskID;                                		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                LastRequestTaskGroupID;                           		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                PendingAbandonTaskID;                             		// 0x0238 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x023C (0x0004) [0x0000000000000000]              
	class UTGOnlineTask*                               OnlineTask;                                       		// 0x0240 (0x0004) [0x0000000000000000]              
	class UTGTaskManager*                              TaskManager;                                      		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FString                                     TGTutorialMap_COMMON;                             		// 0x0248 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TGTutorialMap_MECH;                               		// 0x0254 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TGTutorialMap_TEAM;                               		// 0x0260 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TGTutorialMap_PVE;                                		// 0x026C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TGTutorialMap_PPZ;                                		// 0x0278 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139526 ];

		return pClassPointer;
	};

	void OnAutoCommitTaskChange ( unsigned long flag );
	void OldUpdateListData ( );
	void UpdateListData ( );
	void UpdateFilterList ( );
	void SetTaskSort ( int SortType );
	void SetTaskFilter ( int FilterType );
	void ShowTaskStatis ( unsigned long ShowStatis );
	bool EscKeyFunction ( );
	void OnBuyComplete ( int ErrorCode, struct FResBuyCommodityInfo BuyedCommodity );
	void OnResponseUpdateTaskProgress ( int ErrorCode, int TaskID, int NodeIndex );
	void OnGotoShopRoom ( );
	void RemoveBuyCommodityDelegate ( );
	void AddBuyCommodityDelegate ( );
	void RemoveShopRoomDelegate ( );
	void AddShopRoomDelegate ( );
	void ConnectingMovieTimer ( );
	void CheckClientReport ( int TaskID, unsigned long bAddTask );
	void OnSubmitTaskResponse ( int ErrorCode, int TaskID, unsigned char AwardType );
	void OnSubmitTaskClick ( int TaskID, int AwardIndex );
	bool OnAbandonTaskConfirmOK ( );
	void OnAbandonTaskClick ( int TaskID );
	bool OnAcceptRewardTaskConfirm ( );
	void OnAcceptTaskResponse ( int ErrorCode, int TaskID );
	void ClearLastRequestTaskGroupID ( );
	void OnAcceptRandomTaskClick ( int TaskGroupID );
	void ClearLastRequest ( );
	void OnAcceptTaskClick ( int TaskID, int bRandom );
	void OnNotifyPreRandomTask ( );
	void OnShowTaskTipChanged ( );
	void OnNotifyPlayerTaskInfo ( unsigned char OpType, TArray< int > TaskIDs );
	void OnGetPlayerTaskProgressResponse ( TArray< int > TaskIDs );
	void OnRefreshTaskDetailUIFinished ( int TaskID );
	void ShowPostTaskTip ( );
	void ReturnFromTutorialLevel ( );
	void GotoTutorialLevel ( unsigned char nType );
	void CloseTaskTip ( );
	void FlashLog ( struct FString msg );
	void CloseThis ( );
	void OnLoad ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_Task::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_NewGuide
// 0x0050 (0x0274 - 0x0224)
class UGfxMovie_NewGuide : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	TArray< struct FQuickGameModeSetting >             AllQuickModeSettingArray;                         		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                g_ModeId;                                         		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                g_MapId;                                          		// 0x0238 (0x0004) [0x0000000000000000]              
	int                                                g_SubModeId;                                      		// 0x023C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ModeNames;                                        		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnNotifyUIOpened;                                 		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bEnableClose : 1;                                 		// 0x0258 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableSceneTest : 1;                             		// 0x0258 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	TArray< struct FString >                           strHardCode;                                      		// 0x025C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FScriptDelegate                             __CallBackUIOpenged__Delegate;                    		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139527 ];

		return pClassPointer;
	};

	void OnLoadStoryGame ( int Index );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCloseMovie ( );
	void OnBtnCloseMovie ( unsigned long PlaySound );
	void SetCanClose ( unsigned long bCan );
	bool OnEnterModeSelectedUI ( );
	void OnEnterMidLevel ( );
	bool OnCancelEnterNewTrain ( );
	bool OnConfrimEnterNewTrain ( );
	void OnEnterNewTrainTask ( );
	void RequestQuickGame ( int ModeId, int MapId, int SubModeId );
	void QuickGame ( int ModeIndex, int MapIndex );
	void OnQuickEnterMode ( int nIndex );
	int FindModeNameIndex ( struct FString strName );
	void OnEnterPVETrain ( );
	void OnEnterTeamTrain ( );
	void OnEnterPPZTrain ( );
	void OnEnterMechTrain ( );
	void OnEnterNewTrain ( );
	bool OnCloseInBioWorld ( );
	void OnNtfFinishLocalMatch ( unsigned char nModeId, int GP );
	bool IsTrainTaskFinished ( int eModeId );
	void NotifyFinishTask ( int nModeId );
	void OnReqStartGame ( int Index );
	void CheckFinishData ( );
	void OnInitNewGuideUI ( );
	void OnLoad ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
	void CallBackUIOpenged ( );
};

UClass* UGfxMovie_NewGuide::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_CreateRoom
// 0x0108 (0x0368 - 0x0260)
class UGfxMovie_CreateRoom : public UGfxMovie_BaseRoom
{
public:
	struct FString                                     strTurnOnDeathReplay;                             		// 0x0260 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     strTurnOffDeathReplay;                            		// 0x026C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     strTurnOn;                                        		// 0x0278 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     strTurnOff;                                       		// 0x0284 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTGOnlineChannelController*                  ChannelController;                                		// 0x0290 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentWorldType;                                 		// 0x0294 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurMainChannelType;                               		// 0x0295 (0x0001) [0x0000000000000000]              
	int                                                CurrentMatchType;                                 		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                CurConfigMatchIndex;                              		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                CurrentRule;                                      		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                CurrentMapIndex;                                  		// 0x02A4 (0x0004) [0x0000000000000000]              
	TArray< int >                                      MapIndexArrayBySubMode;                           		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMatchTypeMappings >                CurrentMatchs;                                    		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRuleSetting >                      CurrentRuleSettings;                              		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGameRuleMappings                           CurrentRules;                                     		// 0x02CC (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRuleValueMappings                          CurrentRuleValues;                                		// 0x02F0 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRespawnTimeMappings                        CurrentRespawnTimes;                              		// 0x0308 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPlayerCountMappings                        CurrentPlayerCounts;                              		// 0x0320 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ObserverNumbers;                                  		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MatchTypeIndexs;                                  		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentModeId;                                    		// 0x0350 (0x0004) [0x0000000000000000]              
	unsigned long                                      bClearData : 1;                                   		// 0x0354 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultRoomNameChanged : 1;                      		// 0x0354 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     DefalutRoomName;                                  		// 0x0358 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentSubModeIndex;                              		// 0x0364 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139612 ];

		return pClassPointer;
	};

	void AsShowLog ( struct FString ShowContent );
	void CancelCreateRoom ( );
	bool SetInputFocus ( unsigned long bFocus );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnServerEnterRoom ( int ErrorCode, struct FString* ErrorDesc );
	void OnCreateRoomResult ( int ErrorCode, struct FString* ErrorDesc );
	void SendCreateRoomToServer ( struct FCreateRoomParam Param, unsigned long bIsPVEMode );
	void CreateRoom ( );
	void ClearFlag ( int Mask, int* flag );
	void SetFlag ( int Mask, int* flag );
	void RefreshObserverPlayerCount ( int PlayerCount, int CurRoomPlayerCount_Max );
	void ClearDataProvider ( struct FString dataProviderPath );
	void UpdateObserverPlayerCount ( unsigned long bObserverBoxSelected, unsigned long bInit, int nFightPlayCountIndex );
	void OnObserverChanged ( unsigned long bSelect );
	void OnObserverCountChanged ( int Index );
	void OnPlayerCountChanged ( int Index );
	void OnRuleChanged ( int Index );
	void NotifyRuleChange ( int IndexOfMatchType );
	void GetPlayerCountsInfo ( int nCurConfigMatchIndex, int nCurConfigMapIndex, unsigned char CurChangeType );
	void NotifyMatchTypeChange ( int IndexOfMatchType );
	void UpdateUIDefaultValue ( unsigned long bInit );
	void GetCurrentMaps ( int MatchType, int ConfigSubModeIndex, unsigned char CurMatchInfoChangeType );
	void SetRecordVedioDisabledByMap ( );
	void OnMapChanged ( int MapIndex );
	void OnSubMatchTypeChanged ( int SubModeIndex );
	void UpdateSelectedSetting ( int nRealModeIndex, unsigned char nModeType );
	void OnMatchTypeChanged ( int Index );
	void OnSetDefaultRoomName_SuperHero ( int nModeId, int nSubId );
	bool CheckDefaultRoomNameChanged ( );
	void OnSetDefaultRoomName ( int ModeId );
	int GetModeIndexBySub ( );
	void SetUIDefaultValue ( int Index );
	int GetTGMatchIndexOfSub ( int IndexOfMap );
	void GetPVESubModeTypeNames ( int Index, int CurConfigMapIndex, unsigned char CurChangeType );
	void UpdateModeTypeUI ( );
	void OnLoad ( );
	void IsSetF3QuickGame ( unsigned long bEnable );
	void OnChangeMatchCategory ( unsigned char ModeType );
	void GetCurrentMatchs ( unsigned char ModeType, TArray< struct FMatchTypeMappings >* MatchMapping, TArray< int >* MatchTypeArray, TArray< struct FString >* MatchTypeNames );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_CreateRoom::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_FindRoomList
// 0x015E (0x0382 - 0x0224)
class UGfxMovie_FindRoomList : public UGfxMovie_TGBase
{
public:
	class UTGOnlineChannelController*                  ChannelController;                                		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FRoomSelectedParameter                      FilterSelectedParameter;                          		// 0x0228 (0x002C) [0x0000000000000000]              
	TArray< struct FMatchTypeMappings >                MatchMappingArray;                                		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPVESubModeTypeMappings                     CurSubMode;                                       		// 0x0260 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCurrentMapsInfo_Room                       CurMapInfo;                                       		// 0x0278 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGameRuleMappings                           CurRuleInfo;                                      		// 0x0288 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRuleValueMappings                          CurRuleValueInfo;                                 		// 0x02AC (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMatchTypeMappings                          RealModeInfoBySubMode;                            		// 0x02C4 (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RealModeIndexByMap;                               		// 0x0354 (0x0004) [0x0000000000000000]              
	struct FPlayerCountMappings                        CurPlayerCountInfo;                               		// 0x0358 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      StatusValueArray;                                 		// 0x0370 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUpdateDropData : 1;                              		// 0x037C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnterRoomClicked : 1;                            		// 0x037C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      CurMainChannelType;                               		// 0x0380 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentWorldType;                                 		// 0x0381 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139882 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void CloseMovieBtnClicked ( );
	void OnMovieAction ( struct FString sMovieAction, struct FString sMovieName, class UJsonObject* Extra );
	void LockedUIByWaiting ( unsigned long bLockedUI, unsigned long bInitUI );
	void EnterRoomTimeOut ( );
	void EnterRoomByIndex ( int nIndex );
	void OnViewDataChanged ( struct FString ViewDataName, class UJsonObject* Extra );
	void OnViewDataError ( int ErrorId, struct FString ErrorName );
	void SetFlag ( int Mask, int* flag );
	void OnRepFindRoomList ( );
	void UpdateFlagSettingFlashUI ( unsigned long bConfigUI );
	void UpdateDeathBackDisabled ( );
	void UpdateThrowWeaponDisabled ( );
	void UpdateFriendDefendDisabled ( );
	void UpdateCloseRedNameDisabled ( );
	void OnStatusChanged ( int nIndex );
	void UpdateGameStatusFlashUI ( unsigned long bReset, unsigned long bConfigUI );
	void OnPlayerLimitChanged ( int nIndex );
	void UpdateIdlePlayerCountFlashUI ( unsigned long bReset, unsigned long bConfigUI );
	int GetRealConfigModeIndex ( );
	void OnTargetValueLimitChanged ( int nIndex );
	void UpdateTargetValueFlashUI ( unsigned long bInit, unsigned long bConfigUI );
	void OnTargetLimitChanged ( int nIndex );
	void UpdateTargetFlashUI ( unsigned long bInit, unsigned long bConfigUI );
	void OnMapChanged ( int nIndex );
	void UpdateMapFlashUI ( unsigned long bInit, unsigned long bConfigUI );
	void OnSubMatchTypeChanged ( int nIndex );
	void UpdateSubModeFlashUI ( unsigned long bInit, unsigned long bConfigUI );
	void OnMatchTypeChanged ( int nIndex );
	void UpdateModeFlashUI ( unsigned long bConfigUI );
	void OnModeClassifyChanged ( int nIndex );
	void OnConfigFlashUI ( );
	void OnLoad ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_FindRoomList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_QTalkPanel
// 0x00C8 (0x02EC - 0x0224)
class UGfxMovie_QTalkPanel : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UGfxMovie_Chat*                              ChatMovie;                                        		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FString                                     CurRoomName;                                      		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClickEndterRoomID;                                		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TGQTalkPanelLoc_X;                                		// 0x0244 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                TGQTalkPanelLoc_Y;                                		// 0x0248 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Tips_ShowQTRoom;                                  		// 0x024C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Tips_CreateLink;                                  		// 0x0258 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Text_ClickQQTalkURL;                              		// 0x0264 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     QT_Tital;                                         		// 0x0270 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CurOpenURL;                                       		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsOpenCrossRoomUI : 1;                            		// 0x0288 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             QT_Notify;                                        		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMyTeamQTalk                                MyTeamRoom;                                       		// 0x0298 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TGOfficialRoom;                                   		// 0x02BC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TGHelpOnlineRoom;                                 		// 0x02C8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TGHelpOnlineSubRoom;                              		// 0x02D4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __NotifyCurrentQTRoomdInfo__Delegate;             		// 0x02E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139926 ];

		return pClassPointer;
	};

	void OnResExecuteCmd ( unsigned long bSuccessful, int nCmd );
	void OnShowQTRoomUI ( );
	void OnNotifyMaskPhoneMic ( unsigned long bMaskPhone, unsigned long bMaskMic );
	void OnGetQTalkSetting ( int nSounds, int nMic, unsigned long bFreeTalk, int talkType, struct FString strKey, struct FString strMouse );
	void ExitQTalkRoom ( );
	void OpenQTalkClient ( );
	void ShowMoreSettingPanel ( );
	void TalkSetting ( int Index );
	void ControlMic ( unsigned long bClose );
	void ControlSounds ( unsigned long bClose );
	void EnterHelpRoom ( );
	void EnterRoomById ( struct FString RoomID );
	void CreatePrivateRoom ( );
	void EnterTeam ( );
	void OnEnterOfficial ( );
	bool Event_ClickQTalkRoom ( struct FString strQTRoom );
	bool MsgBoxEnterRoom ( );
	void OnCreateQuickEnterURL ( struct FString RoomID, struct FString RoomName );
	void OnResExitRoom ( int nType, struct FString RoomID );
	void OnResChangeStatusBar ( struct FString roomStatus, struct FString reserved );
	void OnResEnterRoom ( int nType, struct FString RoomName, TArray< struct FString > roomIDList, struct FString roomStatus );
	void OnAddQTalkClickDelegate ( );
	bool OpenWebWindows ( );
	void RequestResult ( unsigned long bSuccessful, struct FString reserved, unsigned long bOpenWeb, struct FString strURL );
	bool EnterKeyFunction ( );
	void ShowMySelf ( );
	void SetActivityArea ( int ActWidth, int ActHeight );
	bool AllowShowStateBar ( );
	void OnLoad ( );
	void NotifyCurrentQTRoomdInfo ( TArray< struct FString > RoomID );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_QTalkPanel::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_KeySystemMessage
// 0x0054 (0x0278 - 0x0224)
class UGfxMovie_KeySystemMessage : public UGfxMovie_TGBase
{
public:
	struct FString                                     MessageContent;                                   		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MessageShowTime;                                  		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTGOnlineChatManager*                        OnlineChatManager;                                		// 0x0238 (0x0004) [0x0000000000000000]              
	struct FString                                     MoviePath_Standard;                               		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 139951 ];

		return pClassPointer;
	};

	void FlashLog ( struct FString Str );
	void SetMoviePathByScreenResolutionScale ( );
	void ShowKeySystemMessageSecond ( struct FString Content );
	void ShowKeySystemMessage ( struct FString Content );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_KeySystemMessage::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Input
// 0x0054 (0x0278 - 0x0224)
class UGfxMovie_Input : public UGfxMovie_TGBase
{
public:
	struct FString                                     Title;                                            		// 0x0224 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0230 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      Style;                                            		// 0x023C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CommandTypes;                                     		// 0x023D (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CurMovieType;                                     		// 0x023E (0x0001) [0x0000000000000000]              
	unsigned long                                      bTeamRoom : 1;                                    		// 0x0240 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FString                                     ShowText;                                         		// 0x0244 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0250 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             OnConfirm;                                        		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnDisagree;                                       		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnButtonClickedWithStringString__Delegate;      		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140230 ];

		return pClassPointer;
	};

	bool SetInputFocus ( unsigned long bFocus );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnServerEnterRoom ( int ErrorCode, struct FString* ErrorDesc );
	void OnResCheckNickName ( int ErrorCode, struct FString* ErrorDesc );
	void OnTestButtonClicked ( );
	void OnCancel ( );
	void OnOKByChangeTeamSafeCode ( unsigned long bReSetSafeCode );
	void OnOk ( unsigned long bFirstRadioBtnSelected );
	void ShowCorrectText ( struct FString CorrectText );
	void ShowErrorText ( struct FString ErrorText );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
	bool OnButtonClickedWithStringString ( struct FString StringContent1, struct FString StringContent2, unsigned long bFirstRadioBtnSelected );
};

UClass* UGfxMovie_Input::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PlayerExp
// 0x0028 (0x024C - 0x0224)
class UGfxMovie_PlayerExp : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x0230 (0x0004) [0x0000000000000000]              
	struct FString                                     NotHasChangeNameCardMessage;                      		// 0x0234 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotHasChangeNameCardTitle;                        		// 0x0240 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140529 ];

		return pClassPointer;
	};

	void OnShowSkillLevel ( );
	void OnOpenLevelIntorduce ( );
	void DelayUpdatePlayerExpInfo ( );
	void MoveDown ( );
	void MoveUp ( );
	bool OnBuyChangeNameCard ( );
	void OnChangeName ( );
	void SetPlayerDateInfo ( );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void OnModifyCardComplete ( int Result, int* AchiCardID );
	void UpdateTeamBageInfo ( );
	void OnNotifyBadgePropsBadge ( unsigned char UpdateTypes, int nCount, int nPackCount );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void DisPlayerExp ( );
	void UpdateNickName ( struct FString PlayerName );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_PlayerExp::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_LotteryUI
// 0x027C (0x04A0 - 0x0224)
class UGfxMovie_LotteryUI : public UGfxMovie_TGBase
{
public:
	TArray< struct FString >                           AreaNameArray;                                    		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrLotteryArea;                                  		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                CurrBuyBulletArea;                                		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                CurrBuyBulletCountType;                           		// 0x0238 (0x0004) [0x0000000000000000]              
	TArray< int >                                      LotteryPositionId;                                		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         LotterySoundArray;                                		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LotterySoundPaths;                                		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UAudioComponent* >                   LotterySoundComArray;                             		// 0x0260 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	struct FString                                     strNickName;                                      		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StrAccount;                                       		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LuckyBulletIDArray;                               		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EquipValueToolID;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           LotteryTip;                                       		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AllLotteryTips;                                   		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CurrLeftBulletCountArray;                         		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrGamePointValue;                               		// 0x02B8 (0x0004) [0x0000000000000000]              
	int                                                CurrMonthPointValue;                              		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                CurrEquipValue;                                   		// 0x02C0 (0x0004) [0x0000000000000000]              
	TArray< int >                                      BulletTPValueArray;                               		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      BulletMPValueArray;                               		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SomeBulletsTPValueArray;                          		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SomeBulletsMPValueArray;                          		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LotteryPic;                                       		// 0x02F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LotteryName;                                      		// 0x0300 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LotteryTimer;                                     		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LotteryCount;                                     		// 0x0318 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LotteryExperience;                                		// 0x0324 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LotteryMonthPoint;                                		// 0x0330 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LotteryGamePoint;                                 		// 0x033C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ShotCount;                                        		// 0x0348 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           BuyBulletIntroText;                               		// 0x034C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotEnoughMonthUint;                               		// 0x0358 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ShowTipLotteryIdx;                                		// 0x0364 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           PartExchangePic;                                  		// 0x0370 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           PartExchangeName;                                 		// 0x037C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PartExchangeTimer;                                		// 0x0388 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PartExchangeCount;                                		// 0x0394 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      NeedPartCount;                                    		// 0x03A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NeedPartCountText;                                		// 0x03AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExchangResultTip;                                 		// 0x03B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CongratulateOtherTip;                             		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CongratulateSelfTip;                              		// 0x03D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FireExchange;                                     		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AddExperience;                                    		// 0x03E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ShootGetLottery;                                  		// 0x03F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AreaBulletText;                                   		// 0x0400 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ShotCountText;                                    		// 0x040C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SystemGiveText;                                   		// 0x0418 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LeftFireCountText;                                		// 0x0424 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LotteryInstroBtText;                              		// 0x0430 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DayUnitName;                                      		// 0x043C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HourUnitName;                                     		// 0x0448 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NZPointUnitName;                                  		// 0x0454 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MonthPointUnitName;                               		// 0x0460 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CountUnitName;                                    		// 0x046C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WanUnitName;                                      		// 0x0478 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExperienceName;                                   		// 0x0484 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0490 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerLotteryGift >                PlayerLotteryGiftArray;                           		// 0x0494 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140546 ];

		return pClassPointer;
	};

	void LotteryFlashLog ( struct FString strLog );
	bool IsPropFull ( int OpType );
	void OnLotterySoundFinished ( class UAudioComponent* FinishAC );
	void PlayLotterySound ( unsigned char SoundId );
	bool GetTP_MP_BulletFromType ( int Type, int* TP, int* MP, int* BulletCount, int* Area );
	void ReadInfoFromLocalization ( );
	bool GetWeaponPicFromTools ( int ItemId, struct FString* PicName );
	int GetAreaBulletFromTools ( int ItemId );
	void UpdateLotteryMarDataOnce ( );
	void OnNtfRewardTP ( int ErrorCode, int iRewardTP, int iTPBalance );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnGetMarqueeReturn ( TArray< struct FPlayerLotteryGift > GiftDatas );
	void OnPartExchageReturn ( int ErrorCode, int uIndex );
	void OnLotteryBuyBulletReturn ( int ErrorCode );
	void OnLotteryFireReturn ( int ErrorCode, struct FString Position0, TArray< struct FString > Positions );
	void OnExchange ( int iExchange );
	void OnConfirmQuit ( );
	void RequestLotteryMarquee ( );
	void OnCancleBuyBullet ( int uIndex );
	void OnBuyBulletConfirm ( int iType, int iCount );
	void OnShowTipDialogAgain ( int IsShow );
	void OnPointValue ( );
	void OnComponentExchange ( );
	void OnShowBuyBulletArea ( int iArea );
	void OnFire ( );
	void OnIsReadyFire ( unsigned long BReadyFire );
	void OnShowArea ( int iArea );
	void clearAllData ( );
	void InitAllFlashVar ( );
	void GetAllLotteryIdxForInstructionWnd ( );
	void GetAllBulletValues ( );
	void GetAllKindsValues ( );
	void GetAllBulletsFromTools ( );
	void GetAllExchangeInfo ( );
	void GetAllLotteryInfo ( );
	void SetUpdateLotteryMarDataPerTime ( );
	void InitUpdateLotteryMarqueeData ( );
	void eventOnClose ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_LotteryUI::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_SystemSettings
// 0x0098 (0x02BC - 0x0224)
class UGfxMovie_SystemSettings : public UGfxMovie_TGBase
{
public:
	class ULocalPlayer*                                LP;                                               		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTG_VideoSettings*                           VideoSettingsProfile;                             		// 0x0228 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTG_AudioSettings*                           AudioSettingsProfile;                             		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTG_KeyboardSettings*                        KeyboardSettingsProfile;                          		// 0x0230 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTG_GameSettings*                            GameSettingsProfile;                              		// 0x0234 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                FrameIndex;                                       		// 0x0238 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     HasNullKeyWarning;                                		// 0x023C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KeyDescription;                                   		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0254 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MoviePath_Standard;                               		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KeyConflictString;                                		// 0x0294 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ConflictKeyA;                                     		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ConflictKeyB;                                     		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OpenTabIndex;                                     		// 0x02B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140549 ];

		return pClassPointer;
	};

	void ActionScriptVoidStringString ( struct FString Path, struct FString Arg, struct FString arg1 );
	void OnLobbyMusicSettingsChanged ( int Value );
	void OnAutoResponseCheckChange ( unsigned long bFlag );
	void ChangeQTalkKey ( struct FString strKey );
	void ReqTestQTalkMic ( );
	void OnGetQTalkSetting ( int nSounds, int nMic, unsigned long bFreeTalk, int talkType, struct FString strKey, struct FString strMouse );
	void SaveQTalkSettings ( unsigned long bBootType, int Sounds, int MIC, unsigned long bFreeMic, struct FString strKey );
	void OnIsAutoCloseBackMusic ( unsigned long bAutoClosed );
	void OnStartQQTalk ( );
	void DisableInputMethod ( );
	void EnableInputMethod ( );
	void WarnningCanntBeEdit ( );
	void SetMoviePathByScreenResolutionScale ( );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void ShowASLog ( struct FString ASLog );
	void FlashLog ( );
	void CannotSetKey ( struct FString KeyUIName );
	void OnCancelPressed ( );
	void ChangeBackGroudMusicVolume ( int CurrentMusicVolume );
	void OnVoiceVolumeValueChanged ( int AsVoiceVolume );
	void OnSFXVolumeValueChanged ( int AsSFXVolume );
	void OnMusicVolumeValueChanged ( int AsMusicVolume );
	void OnWholeVolumeValueChanged ( int AsWholeVolume );
	bool OnButtonConfirm_Cancel ( );
	bool OnButtonConfirm_OK ( );
	void OnButtonConfirm ( );
	void RecoverSystemSettings ( );
	bool OnSetDefaultSystemSettings_Cancel ( );
	bool OnSetDefaultSystemSettings_Confirm ( );
	void SetDefaultSystemSettings ( );
	bool OnActionNeedHotKey_Cancel ( );
	bool OnActionNeedHotKey_Confirm ( );
	bool OnApplySystemSettings_Cancel ( );
	void OpenActionKeyConflictDailog ( );
	void OpenActionNeedHotKeyDailog ( );
	void ApplyAllSystemSettings ( );
	void SaveAllSystemSetting ( );
	bool HasAnyNullKey ( TArray< struct FString >* KeyDescriptionList, TArray< struct FString >* KeyNameList );
	bool GetAllKeyInUI ( TArray< struct FString >* KeyDescriptionList, TArray< struct FString >* KeyNameList );
	bool OnApplySystemSettings_Confirm ( );
	void ApplySystemSettings ( );
	void ConfigSystemSettingsMovie ( );
	void ConfigSocialSettingsMovie ( );
	void ConfigGameSettingsMovie ( );
	void ConfigKeyboardSettingsMovie ( );
	void ConfigAudioSettingsMovie ( );
	void ConfigVideoSettingsMovie ( );
	void SetKeyboardSettingsData ( );
	void GotoTab ( int TabIndex );
	void OnLoad ( );
	int AS_NotifyLoaded ( unsigned long bWorldChangeEvent );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_SystemSettings::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ChatInMatch
// 0x02A4 (0x04C8 - 0x0224)
class UGfxMovie_ChatInMatch : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineChatManager*                        ChatManager;                                      		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                ChatState;                                        		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiGameRoom;                              		// 0x0234 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoaded : 1;                                      		// 0x0238 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUsePreLastTime : 1;                              		// 0x0238 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUsePreLastTacticalCommandTime : 1;               		// 0x0238 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsContinuousChatSend : 1;                        		// 0x0238 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsNoCampMode : 1;                                		// 0x0238 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHasClan : 1;                                     		// 0x0238 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIsIndMode : 1;                                   		// 0x0238 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bIsSpecialMatch : 1;                              		// 0x0238 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bSelfIsObserver : 1;                              		// 0x0238 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bFastShoutSendMessage : 1;                        		// 0x0238 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      IsShowQTalkDescribe : 1;                          		// 0x0238 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bFirstOpenInput : 1;                              		// 0x0238 (0x0004) [0x0000000000000000] [0x00000800] 
	struct FString                                     SelfUin;                                          		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ATGPlayerController*                         SelfPC;                                           		// 0x0248 (0x0004) [0x0000000000000000]              
	struct FSystemTimeData                             TimeLastSendData;                                 		// 0x024C (0x0020) [0x0000000000000000]              
	struct FSystemTimeData                             TimePreLastSendData;                              		// 0x026C (0x0020) [0x0000000000000000]              
	struct FSystemTimeData                             LastSendTacticalCommandTimeData;                  		// 0x028C (0x0020) [0x0000000000000000]              
	struct FSystemTimeData                             PreLastSendTacticalCommandTimeData;               		// 0x02AC (0x0020) [0x0000000000000000]              
	class UGfxMovie_KeySystemMessage*                  KeySystemMessageMovie;                            		// 0x02CC (0x0004) [0x0000000000000000]              
	struct FString                                     MoviePath_Standard;                               		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x02F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0300 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ShieldedPlayerList;                               		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AutoResponseInterval;                             		// 0x0318 (0x0004) [0x0000000000000000]              
	int                                                LastReceiveOtherP2PMessageTime;                   		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                DefaultChatChannel;                               		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                ChatChannelSwitch;                                		// 0x0324 (0x0004) [0x0000000000000000]              
	struct FString                                     ChatFunctionTips;                                 		// 0x0328 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGGfxUISceneClient*                         UIClient;                                         		// 0x0334 (0x0004) [0x0000000000000000]              
	struct FString                                     DefaultMutilPlayerActionUin;                      		// 0x0338 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     SystemString;                                     		// 0x0344 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MeString;                                         		// 0x0350 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AllClanMembersString;                             		// 0x035C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AllPlayersString;                                 		// 0x0368 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AllTeammatesString;                               		// 0x0374 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AllSpectorsString;                                		// 0x0380 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadEnableGameVoiceString;                      		// 0x038C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadEnableGameVoiceKeyTipsString;               		// 0x0398 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadEnableScreenClanMessageByDefaultString;     		// 0x03A4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadEnableScreenP2PMessageByDefaultString;      		// 0x03B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CantSendClanMessageBecauseNoClanString;           		// 0x03BC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadBeBanByGMString;                            		// 0x03C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadSendMessageTooFastPleaseWaitAMinuteString;  		// 0x03D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouCanOnlyUseGameCampChannelBecauseInMatchString; 		// 0x03E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TeamChannelHadBeScreenYouCanEnableItBackToRoomString;		// 0x03EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MessageCanntBeEmptyString;                        		// 0x03F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CanntChatWithAPlayerInYourBlackListString;        		// 0x0404 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PleaseInputTargetNickNameString;                  		// 0x0410 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CanntFindTargetString;                            		// 0x041C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CanntSendMessageToYourSelfString;                 		// 0x0428 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     JoinForObserveString;                             		// 0x0434 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     JoinForMatchString;                               		// 0x0440 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     QuitFromObserveString;                            		// 0x044C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     QuitFromMatchString;                              		// 0x0458 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AutoResponseWhenScreenP2PMessageInMatchString;    		// 0x0464 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FriendStatusMessageString;                        		// 0x0470 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FriendOnlineMessageRightString;                   		// 0x047C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FriendOfflineMessageRightString;                  		// 0x0488 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChatTargetTooManyString;                          		// 0x0494 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChatTargetInCMMatchString;                        		// 0x04A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChatErrorInHappyMatch;                            		// 0x04AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotifyPlayerPickupPVEChestString;                 		// 0x04B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundCue*                                   SoundEnterGame;                                   		// 0x04C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140576 ];

		return pClassPointer;
	};

	void NotifyPickupPVEChest ( struct FString PlayerName );
	bool bCanChatInGame ( );
	void SwitchChatChannel ( int ChannelId );
	void ResetPosition ( );
	void ReCalcPosition ( );
	void SetFriendWhisperFromUI ( struct FString* Uin, struct FString* NickName );
	bool DoActionInMatch ( int Type, unsigned long bSendToOther, struct FString FromUin, struct FString ToUin, struct FString PlayerName, struct FString* Content );
	void SetMoviePathByScreenResolutionScale ( );
	void ChatMessagePageMoveBackward ( );
	void ChatMessagePageMoveForward ( );
	void OnNtfChangeFriendName ( struct FString Uin, struct FString NickName, struct FString OldNickName );
	void OnNotifyFriendOnlineStatus ( int ErrorCode, struct FString Uin, unsigned char OnlineType );
	void GetVolunteerP2PTargetType ( );
	void SaveHistoryContent ( );
	void SetChatHistoryData ( );
	void OnReturn ( );
	void SetChatMoviebHasTeam ( unsigned long bHasTeam, unsigned char bIsBanSpeech );
	void OnResGetMembersList ( int ErrorCode, int MemberCount, unsigned char bSelfIsbanSpeech, unsigned long bIsAll );
	void OnResCreateTeam ( int ErrorCode, struct FString* TeamName );
	void OnResHandOverTeam ( int ErrorCode, struct FString* ReceiverUin );
	void OnNotifyMemberStateChange ( unsigned char ChangedTye, unsigned long bUpdateTeamGroup, unsigned long bIsSelfChange, unsigned char bSelfIsbanSpeech, struct FString MemberUinA, struct FString MemberUinB );
	void FlashLog ( struct FString Log );
	void ShowASLog ( struct FString ASLog );
	float GetRealTimeDiff ( struct FSystemTimeData NewTimeData, struct FSystemTimeData OldTimeData );
	void SendTacticalCommand ( struct FString TacticalCommand, int TacticalCommandID );
	void FastResponseWhisper ( );
	void FastShout ( int Index );
	void TalkToP2P ( );
	void TalkToTeammate ( );
	void TalkToObserver ( );
	void TalkToAll ( );
	void ClearTextInputTimer ( );
	void TalkToAllies ( );
	void InGameSetGameParameters ( unsigned long nbIsNoCampMode, unsigned long nbHasClan, unsigned long nbIsIndMode, unsigned long nIsSpecialMatch );
	void SetChatInputVisible ( unsigned long bChatInputVisible );
	void SetChatAreaVisible ( unsigned long bChatAreaVisible );
	struct FString NickNameToUIN ( struct FString NickName );
	struct FString UINToNickName ( struct FString Uin );
	void PersonalMatchSystemBroadcast ( int Type, int Num, struct FString NickName );
	void OnChatError ( int ErrorCode, struct FString UinTarget, struct FString Text, int TacticalCommandID, int BannedLeftHours );
	struct FString RecoverMessageContent ( struct FString SrcStr, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames );
	void PushP2PMessageInGame ( unsigned long bMaybeSystemMsgFlag, int Type, struct FString NickNameTarget, unsigned long Unknown, struct FString Content );
	void PushActionMessage ( unsigned long bBroadcast, int Type, struct FString Content );
	void PushLocalMessage ( int Type, struct FString From, struct FString to, struct FString Content );
	void PushBroadcastMessage ( int Type, struct FString NickNameFrom, struct FString Content );
	void PushSystemBroadcastMessage ( int Type, struct FString NickNameFrom, struct FString Content );
	void OnShowTeamMatchGroupInfo ( struct FString ResultContent );
	void OnChatSendBack ( int Type, unsigned long bDirty, struct FString ToUin, struct FString ChatContent, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames, int TacticalCommandID );
	void OnChatReceivedActionInGame ( int Type, struct FString UINFrom, struct FString NickNameFrom, struct FString Text, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames );
	void OnChatReceivedP2P ( int Type, struct FString UINFrom, struct FString NickNameFrom, struct FString Text, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames );
	void OnChatReceivedBroadcast ( int Type, struct FString UINFrom, struct FString NickNameFrom, struct FString Text, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames, int TacticalCommandID );
	void OnChatReceivedSystemBroadcast ( int Type, struct FString UINFrom, struct FString NickNameFrom, struct FString Text, TArray< int > AchiUniqueIds, TArray< struct FString > AchiNames );
	void OnChatReceivedPlayerStatusChanged ( struct FString NickName, int StatusChangeType, unsigned long bAlwaysObserver );
	void HideChatArea ( );
	void ChatSendP2P ( int Type );
	void ChatSendBroadcast ( int Type );
	void ChatSend ( int Type );
	bool PlayerInShieldList ( struct FString* Uin );
	void CheckShieldChatInMatchOnBeginMatch ( );
	void OnTimerShowQTalkStatus ( );
	void OnShowQTalkText ( );
	void OnGetQTalkSetting ( int nSounds, int nMic, unsigned long bFreeTalk, int talkType, struct FString strKey, struct FString strMouse );
	void InitChatChannelAndTips ( );
	void OnMovieLoaded ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ChatInMatch::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ChestMovie
// 0x0070 (0x0294 - 0x0224)
class UGfxMovie_ChestMovie : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               ValidId;                                          		// 0x0228 (0x0010) [0x0000000000000000]              
	int                                                ScoreValue;                                       		// 0x0238 (0x0004) [0x0000000000000000]              
	int                                                OpenTimes;                                        		// 0x023C (0x0004) [0x0000000000000000]              
	unsigned char                                      ChestType;                                        		// 0x0240 (0x0001) [0x0000000000000000]              
	struct FString                                     ChestTypeName;                                    		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMoneyType;                                       		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bOpenedAllCommon : 1;                             		// 0x025C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOpenSpecial : 1;                                 		// 0x025C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNoGPMoney : 1;                                   		// 0x025C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTimeout : 1;                                     		// 0x025C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsWin : 1;                                       		// 0x025C (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                SpecialChestIndex;                                		// 0x0260 (0x0004) [0x0000000000000000]              
	struct FString                                     TextSpecialBoxDetail;                             		// 0x0264 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TextByScoreDetail;                                		// 0x0270 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TextByEndGameDetail;                              		// 0x027C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TextOpenChestTip;                                 		// 0x0288 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140975 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnConfirmQuit ( );
	void OnNtfAutoOpenLuckyChest ( struct FUniquePropId CurValidId, TArray< struct FChestPropInfo > ChestList, unsigned char ChestIndex, int SpecialBoxCount, unsigned long IsEndGame );
	bool OnComfirmOpenSpecialChest ( );
	void OnOpenSpecialChest ( int Index );
	bool GetChestPropInfo ( int ItemId, struct FString* PropName, struct FString* PropIconPath );
	bool ShowChooseAnimation ( );
	void SetSpecialBoxDetail ( int BoxCount, unsigned long bEndGame );
	void OnResOpenLuckyChest ( struct FUniquePropId CurValidId, TArray< struct FChestPropInfo > ChestList, unsigned char ChestIndex, unsigned long bSpecialChest, int SpecialBoxCount, unsigned long IsEndGame, int ErrorCode );
	void OnOpenCommonChestTimeOut ( );
	void OnOpenCommonChest ( int Index );
	void OnInitChestUI ( );
	void OnChestTimeOut ( );
	void OnLoad ( );
	void TestFunction ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ChestMovie::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Complaint
// 0x00E8 (0x030C - 0x0224)
class UGfxMovie_Complaint : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0260 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0264 (0x0004) [0x0000000000000000]              
	class UTGOnlineComplaint*                          OnlineComplaint;                                  		// 0x0268 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ComplaintReasonStringArray;                       		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ComplaintReasonIdArray;                           		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ReasonEntryCount;                                 		// 0x0284 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UTGUISceneClient*                            SceneClient;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	struct FString                                     ComplaintWarnningTitleString;                     		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ComplaintWarnningContentString;                   		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ComplaintNotifyTitleString;                       		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ComplaintNotifyContentString;                     		// 0x02B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CheckInputErrorTitleString;                       		// 0x02BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CheckInputErrorContentString;                     		// 0x02C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ATGPlayerController*                         PlayerController;                                 		// 0x02D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPersonalMatchFlag : 1;                           		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bComplaintFromScroeboard : 1;                     		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsRegular : 1;                                   		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     SelfUin;                                          		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SelfName;                                         		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strComplaintName;                                 		// 0x02F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     strComplaintUin;                                  		// 0x0300 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141076 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void SetMoviePathByScreenResolutionScale ( );
	void LoadLocalizeString ( );
	void FlashLog ( struct FString logString );
	bool NotifyComplaintAccepted ( );
	bool OnComplaintWarnningCancel ( );
	bool OnComplaintWarnningOK ( );
	void ComplaintOpenWarnning ( );
	void OnCancel ( );
	void OnConfirm ( );
	void GetPlayerInfo ( TArray< struct FString >* R_PlayerName, TArray< struct FString >* R_PlayerUin, TArray< struct FString >* G_PlayerName, TArray< struct FString >* G_PlayerUin );
	void UpdateUIData ( );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_Complaint::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Connecting
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_Connecting : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141163 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
};

UClass* UGfxMovie_Connecting::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_CreateRole
// 0x0018 (0x023C - 0x0224)
class UGfxMovie_CreateRole : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCreateRoleSuccessful : 1;                        		// 0x0228 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNeedShowTaskGuide : 1;                           		// 0x0228 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     GiveWeaponContent;                                		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StartPlayFrame;                                   		// 0x0238 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141245 ];

		return pClassPointer;
	};

	void EnterTask ( );
	void OnNotifyPropsInfo ( );
	void OnResChangeLoginRole ( int ErrorCode, int PropCount );
	void ReqChangeLoginRole ( int RebelRoleIndex, int GSDURoleIndex );
	bool OnCreateRoleFailed ( );
	void OnCreateRoleReturn ( int ErrorCode, struct FString* ErrorDesc );
	void ShowNewPlayerGetProps ( );
	void OnResCheckNickName ( int ErrorCode, struct FString* ErrorDesc );
	void ReqCheckNickName ( );
	bool CheckNickNameAvail ( struct FString* RoleName );
	void OnCreateRole ( );
	void ShowGiveContents ( );
	void OpenMoviesByLogin ( );
	void OnLoad ( );
	void eventOnClose ( );
	void AddDelegates ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_CreateRole::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovieLogin
// 0x0004 (0x0228 - 0x0224)
class UGfxMovieLogin : public UGfxMovie_TGBase
{
public:
	int                                                CreateRoleStartPlayFrame;                         		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141258 ];

		return pClassPointer;
	};

	void OnCreateRoleReturn ( int ErrorCode, struct FString* ErrorDesc );
	void OpenCreateRoleUI ( );
	void OnGotoCreateRole ( );
	void OnLoginNoRole ( );
	void OnLoginFailed ( struct FString Error );
	void OnLoginSuccess ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovieLogin::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ShopBuyTogether
// 0x0048 (0x026C - 0x0224)
class UGfxMovie_ShopBuyTogether : public UGfxMovie_TGBase
{
public:
	struct FScriptDelegate                             OnOkButtonClicked;                                		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCommodityType;                                   		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFCommodityBuyInfo >                GPCartCommodityList;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFCommodityBuyInfo >                OtherCartCommodityList;                           		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PriceArray;                                       		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0260 (0x0004) [0x0000000000000000]              
	int                                                GoodsNum;                                         		// 0x0264 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadBuyCommdity : 1;                              		// 0x0268 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141622 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnRechargeButtonClicked ( );
	void BuyCommodities ( );
	void ShowCommodities ( );
	void CloseDialog ( );
	void eventOnStart ( );
	void OnLoad ( );
};

UClass* UGfxMovie_ShopBuyTogether::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_FeedSuggestion
// 0x001C (0x0240 - 0x0224)
class UGfxMovie_FeedSuggestion : public UGfxMovie_TGBase
{
public:
	int                                                SuggestionType;                                   		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FString                                     SuggestionContent;                                		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Suggestions;                                      		// 0x0234 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141673 ];

		return pClassPointer;
	};

	bool SetInputFocus ( unsigned long bFocus );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCancelBtnClick ( );
	bool OnCommitCancel ( );
	bool OnCommitOk ( );
	void OnSendBtnClick ( );
	void SetButtonLabels ( );
	void OnLoad ( );
	void eventOnClose ( );
};

UClass* UGfxMovie_FeedSuggestion::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_MessageBox
// 0x009C (0x02C0 - 0x0224)
class UGfxMovie_MessageBox : public UGfxMovie_TGBase
{
public:
	struct FString                                     Title;                                            		// 0x0224 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0230 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     OKName;                                           		// 0x023C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     CancelName;                                       		// 0x0248 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Style;                                            		// 0x0254 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoad : 1;                                        		// 0x0258 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldNotAutoClosed : 1;                         		// 0x0258 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bXSendCloseDelegate : 1;                          		// 0x0258 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              CloseTime;                                        		// 0x025C (0x0004) [0x0000000000000000]              
	struct FString                                     MoviePath_Standard;                               		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnOkButtonClicked;                                		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnCancelButtonClicked;                            		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnOkWithParameter;                                		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141828 ];

		return pClassPointer;
	};

	void SetMoviePathByScreenResolutionScale ( );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnClose ( );
	void OnCloseMovieBtnClicked ( );
	void OnCancel ( );
	void OnOk ( );
	void CloseTimer ( );
	void SetNtfNextData ( TArray< struct FString > MessageArray );
	void SetRenewalData ( TArray< struct FString > MessageArray );
	void UpdateBagContent ( int BagIndex );
	struct FString GetBagContent ( int BagIndex );
	void SetBagData ( );
	void OpenMessageBoxErrer ( );
	void SetUpMessageBox ( int inStyle, struct FString inTitle, struct FString InMessage, struct FScriptDelegate ClickedOk, struct FScriptDelegate ClickedCancel, float inCloseTime, struct FString OkText, struct FString CancelText, unsigned long bNotAutoClose, struct FScriptDelegate ClickedOkWithParameter );
	void UpdateFrash ( );
	void AnalysisMessageContent ( struct FString CurMessage, TArray< struct FString >* MessageArray );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_MessageBox::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_FontLib
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_FontLib : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141847 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_FontLib::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_FontTest
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_FontTest : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141849 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_FontTest::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_FpsTips
// 0x0040 (0x0264 - 0x0224)
class UGfxMovie_FpsTips : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGUISceneClient*                            SceneClient;                                      		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTG_VideoSettings*                           VideoSettingsProfile;                             		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                AutoShutDownTime;                                 		// 0x0230 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     WarnningString;                                   		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TipsTitle;                                        		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TipsContent;                                      		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TipsContent01;                                    		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141851 ];

		return pClassPointer;
	};

	int GetCurrentConfigLevel ( );
	void DontShowAgain ( unsigned long flag );
	void TellFastConfigLevel ( );
	void FastConfig ( );
	void ManualConfig ( );
	void Cancel ( );
	void FlashLog ( struct FString logString );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_FpsTips::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_FriendWhisper
// 0x0044 (0x0268 - 0x0224)
class UGfxMovie_FriendWhisper : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0260 (0x0004) [0x0000000000000000]              
	class ATGPlayerController*                         PlayerController;                                 		// 0x0264 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141880 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void SetMoviePathByScreenResolutionScale ( );
	void OnNotifyFriendOnlineStatus ( int ErrorCode, struct FString Uin, unsigned char OnlineType );
	void OnGetFriendStatusComplete ( int ErrorCode, TArray< struct FString > Uins, struct FString* ErrorDesc );
	void LoadLocalizeString ( );
	void FlashLog ( );
	void OnCancel ( );
	void OnConfirm ( );
	void UpdateUIData ( );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_FriendWhisper::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_GameBag
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_GameBag : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141928 ];

		return pClassPointer;
	};

	void ShowBag ( int BagId );
	void CloseBag ( );
	void Changebag ( int Index );
	void ChangeBagIcon ( int Index );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_GameBag::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_FriendCardList
// 0x0044 (0x0458 - 0x0414)
class UTGUI_FriendCardList : public UUIObject
{
public:
	class UGfxMovie_GeneralPlayerList*                 OwnerMovie;                                       		// 0x0414 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0418 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FGroupInfo >                        QQGroupList;                                      		// 0x041C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FQQFriendInfo >                     QQFriendList;                                     		// 0x0428 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     StrFriendDoc;                                     		// 0x0434 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StrComradeDoc;                                    		// 0x0440 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StrUnknownError;                                  		// 0x044C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141996 ];

		return pClassPointer;
	};

	void TestData ( class UJsonObject** Obj );
	bool FindCardFriend ( struct FString Uin, struct FFirendCardInfo* GetChooseFriend );
	void StealFriendCardResult ( int ErrorCode );
	void StealFriendCard ( struct FString Uin, int CardIndex, int nStealType );
	bool GetFriendName ( struct FString Uin, struct FString* ReturnName );
	void UpdateFriendCardList ( );
	void GetFirendCardList ( int ErrorCode );
	void ReqFriendCardList ( );
	void UnInitialized ( );
	void OnInitialized ( );
};

UClass* UTGUI_FriendCardList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_QQFriendList
// 0x002C (0x0440 - 0x0414)
class UTGUI_QQFriendList : public UUIObject
{
public:
	class UGfxMovie_GeneralPlayerList*                 OwnerMovie;                                       		// 0x0414 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0418 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FGroupInfo >                        QQGroupList;                                      		// 0x041C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FQQFriendInfo >                     QQFriendList;                                     		// 0x0428 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     StrInviteUin;                                     		// 0x0434 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 141998 ];

		return pClassPointer;
	};

	void SortQQFriendByState ( TArray< struct FQQFriendInfo >* QQFriends );
	void UpdateQQFriendList ( );
	void Test ( TArray< struct FGroupInfo >* tQQGroupList, TArray< struct FQQFriendInfo >* tQQFriendList );
	void OnGetQQFriendList ( int ErrorCode );
	void CheckIfGetQQFriendList ( );
	bool CancelGetQQFriend ( );
	bool ReGetQQFriendList ( );
	void TimerUpdateQQFriendList ( );
	void ReqQQFriendList ( );
	void OnResInviteFriendGameTip ( int ErrorCode, unsigned long bQQFriend, struct FString FriendNickName );
	bool OnConfirmInvite ( );
	bool OnCancelInvite ( );
	void OnRecruitBtnClicked ( int Index );
	void UnInitialized ( );
	void ActionScriptVoidStringString ( struct FString Path, struct FString arg1, struct FString arg2 );
	void OnInitialized ( );
};

UClass* UTGUI_QQFriendList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_FriendList
// 0x00EC (0x0128 - 0x003C)
class UTGUI_FriendList : public UObject
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class UGfxMovie_AddFriend*                         AddFriendPanel;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	class UGfxMovie_PlayerDetailInfo*                  FriendDetailPanel;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	class UGfxMovie_GeneralPlayerList*                 OwnerMovie;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     LocalizeStringPath;                               		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DefaultFriendGroupName;                           		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCanInviteFriend : 1;                             		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     LastInviteFriendUin;                              		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurIndexInFriendList;                             		// 0x0074 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerNickName;                                   		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0088 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FSingleMessage >                    MessageList;                                      		// 0x008C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UTGMessageManager*                           MessageManager;                                   		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                FriendDemandMessageIndex;                         		// 0x009C (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               SelectedMessageId;                                		// 0x00A0 (0x0010) [0x0000000000000000]              
	TArray< struct FFriendInfo >                       FriendList;                                       		// 0x00B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FGroupInfo >                        FriendGroupList;                                  		// 0x00BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      FriendListFiter;                                  		// 0x00C8 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                FriendListSortFuncFlag;                           		// 0x00CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                FriendListSortType;                               		// 0x00D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MessagePageIndex;                                 		// 0x00D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MessagePageIndex_Max;                             		// 0x00D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FUniquePropId >                     CheckBoxSelectedIdArray;                          		// 0x00DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUniquePropId                               ExpandMessageId;                                  		// 0x00E8 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FEnemyInfo >                        BlackList;                                        		// 0x00F8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     SystemMessageSenderNameString;                    		// 0x0104 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SystemMessageTypeString;                          		// 0x0110 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SystemMessageTailString;                          		// 0x011C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142000 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void UpdateBlackList ( );
	void GetBlackList ( );
	void Cleanup ( );
	int GetOnlineFriendNumber ( );
	void UpdateFriendListData ( );
	void JSonUpdateFriendListData ( );
	void UpdateFriendList ( );
	void InitFriendListNumber ( );
	void DoSortFriendListByChummy ( );
	void DoSortFriendListByStatus ( );
	void DoSortFriendListByNickName ( );
	void DoSortFriendListByRank ( );
	void SortFriendList ( );
	void FilterFriendList ( );
	void GetFriendList ( );
	void SortFriendListByChummy ( int CurSortType );
	void SortFriendListByStatus ( int CurSortType );
	void SortFriendListByNickName ( int CurSortType );
	void SortFriendListByRank ( int CurSortType );
	void GetFriendAdress ( int IndexInFriendList );
	void EvaluateFriend ( int IndexInFriendList );
	bool OnAddPlayerToBlackList_Confirm ( );
	void AddEnemy ( int FriendInListIndex );
	bool OnDeleteFriend_Cancel ( );
	bool OnDeleteFriend_Confirm ( );
	void DeleteFriend ( int IndexInFriendList );
	void ShowFriendDetail ( int IndexInFriendList );
	bool OnMoveFriendToBlackList_Cancel ( );
	bool OnMoveFriendToBlackList_Confirm ( );
	void MoveFriendToBlackList ( int IndexInFriendList );
	void FriendMark ( int IndexInFriendList, struct FString MarkName );
	void FollowFriend ( int IndexInFriendList );
	void PassphraseFriend ( int IndexInFriendList );
	void OpenAddFriendMovie ( );
	void CloseRightClickMenu ( );
	void InvitePlayerPKMatch ( int IndexInFriendList );
	void AddTeammate ( int Index );
	void FriendLeaveMessage ( int Index );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( int Index );
	void OnEnforceOffline ( int Index );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( int Index );
	void OpenRightClickMenu ( );
	void MessageCheckSelecteChange ( unsigned long bSelected, int MessageIndex );
	void GoPage_MessageBox ( int GoPageIndex );
	void NextPage_MessageBox ( );
	void PrePage_MessageBox ( );
	void MessageResponse_GoToMyGears ( int MessageIndex );
	void MessageResponse_Cancel ( int MessageIndex );
	void MessageResponse_Refuse ( int MessageIndex );
	void OnBuyCommodityComplete ( int ErrorCode, struct FResBuyCommodityInfo BuyedCommodity );
	void MessageResponse_Ok ( int MessageIndex );
	bool OnConfrimDeleteAllMessages ( );
	void DeleteAllMessages ( );
	void DeleteSelectedMessages ( );
	void GetMessageDetail ( int MessageIndex );
	void ExpandMessageInBox ( unsigned long bExpand, int MessageIndex );
	void UpdateMessageList ( );
	void SortMessageList ( );
	void FilterMessageList ( );
	int GetUncheckedMessageCount ( );
	void GetMessageTitals ( );
	void OnButtonMessageClick ( unsigned long bOpenBox );
	bool IsEqualSelectedMessageId ( struct FUniquePropId SingleId );
	void SetEmptySelectedMessageId ( );
	void GetMessageManagerText ( );
	void OnReturn ( );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void FlashLog ( struct FString ASLog );
	void ShowASLog ( struct FString ASLog );
	void GetAdsorptionPoint ( );
	void SavePrivateSettings ( );
	void GetPrivateSettings ( );
	void GetFriendGroupList ( int FriendIndex, TArray< int >* GroupIdArray, TArray< struct FString >* GroupNameArray );
	void OnGroupInfoChanged ( int ErrorCode, int GroupID, struct FString GroupName, struct FString* ErrorDesc );
	void OnResDeleteGroup ( int ErrorCode, int GroupID, struct FString GroupName, struct FString* ErrorDesc );
	void OnResRenameGroup ( int ErrorCode, int GroupID, struct FString GroupName, struct FString* ErrorDesc );
	void DelectGroup ( int GroupID );
	void ModifyGroupName ( int nGroupID );
	void OnModifyFriendGroupComplete ( int ErrorCode, struct FString* Uin );
	void ChangeGroup ( int FriendInListIndex, int GroupID );
	void GetFriendGroupInfo ( int FriendIndex );
	void OnAddGroupComplete ( int ErrorCode, int GroupID, struct FString GroupName, struct FString* ErrorDesc );
	bool OnButtonConfirm ( );
	void AddFriendGroup ( );
	void UpdatePlaymateList ( );
	void OnInitialized ( );
	void InitFriendSystem ( );
	void OnUnInitFunction ( );
};

UClass* UTGUI_FriendList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_GeneralPlayerList
// 0x0098 (0x00D4 - 0x003C)
class UTGUI_GeneralPlayerList : public UObject
{
public:
	class UGfxMovie_GeneralPlayerList*                 OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< class UJsonObject* >                       GeneralPlayerDataList;                            		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGeneralPlayerData >                GeneralPlayerTempDataList;                        		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGeneralPlayerData >                GeneralPlayerTempDataList_channel;                		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGeneralPlayerData >                GeneralPlayerTempDataList_player;                 		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     TempTeamLeaderNickName;                           		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           PlayerUinArray;                                   		// 0x0084 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           ClanNameArray;                                    		// 0x0090 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bNeedUpdateClanName : 1;                          		// 0x009C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UJsonObject*                                 RootObj;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	struct FString                                     GroupRecentPlaymate;                              		// 0x00A4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GroupChannelPlayer;                               		// 0x00B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GroupTeammate;                                    		// 0x00BC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GroupPersonalMatchMember;                         		// 0x00C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142012 ];

		return pClassPointer;
	};

	void UpdateSingleMatchTopList ( );
	void OnGetSingleMatchTopList ( int ErrorCode );
	class UJsonObject* UpdateGeneralPlayerList ( struct FString GroupName, unsigned long IsShowStatus );
	class UJsonObject* GetChannelTempPlayerList ( );
	class UJsonObject* GetCurrentTempPlayerList ( );
	bool OnNtfChangeFriendName ( struct FString PlayerUin, struct FString PlayerNickName );
	bool OnGetPlayersTeamName ( TArray< struct FString > PlayerUins, TArray< struct FString > PlayerTeamNames );
	void GetRecentPlaymatesList ( );
	void OnGetOnlinePlayerClanComplete ( TArray< struct FString > PlayerUins, TArray< struct FString > ClanNames );
	void OnGetOnlinePlayerComplete ( );
	void GetOnlinePlayerList ( class UJsonObject** BuildDataObj );
	void FriendMark ( int IndexInFriendList, struct FString MarkName );
	void GetTeammatesList ( );
	void OnGetPlayerRanks ( unsigned char SystemTypes, TArray< struct FString >* PlayerUins, TArray< int >* PlayerExps );
	void UnInitialized ( );
	void OnInitialized ( );
};

UClass* UTGUI_GeneralPlayerList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_RoomSetting
// 0x0090 (0x02B4 - 0x0224)
class UGfxMovie_RoomSetting : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	int                                                CurConfigMatchIndex;                              		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                CurrentRule;                                      		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                CurMapIndex;                                      		// 0x0230 (0x0004) [0x0000000000000000]              
	TArray< struct FMatchTypeMappings >                CurrentMatchs;                                    		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGameMapMappings >                  CurrentMaps;                                      		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MatchTypeIndexsByMap;                             		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRuleSetting >                      CurrentRuleSettings;                              		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGameRuleMappings                           CurrentRules;                                     		// 0x0264 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRuleValueMappings                          CurrentRuleValues;                                		// 0x0288 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ObserverNumbers;                                  		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bClearData : 1;                                   		// 0x02AC (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                FightPlayerCountMax;                              		// 0x02B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142420 ];

		return pClassPointer;
	};

	void OnCancelRoomSetting ( );
	int GetSubModeId ( );
	void OpenPKShieldUI ( );
	void OnConfirmRoomSetting ( );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void ClearFlag ( int Mask, int* flag );
	void SetFlag ( int Mask, int* flag );
	void OnObserverChanged ( unsigned long bSelect );
	void OnObserverCountChanged ( int Index );
	void OnRuleChanged ( int Index );
	void NotifyRuleChange ( int IndexOfMatchType );
	void NotifyMatchTypeChange ( int IndexOfMatchType );
	int GetConfigMatchIndexByMap ( int MapIndex );
	void OnMapChanged ( int MapIndex );
	void SetUIDefaultValue ( );
	void OnLoad ( );
	void IsSetF3QuickGame ( unsigned long bEnable );
	void GetCurrentMaps ( );
	void GetPKMatchs ( TArray< struct FMatchTypeMappings >* MatchMapping );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_RoomSetting::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_MessageTip
// 0x0004 (0x0228 - 0x0224)
class UGfxMovie_MessageTip : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142662 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void CloseTip ( );
	void EnterMessageManager ( );
	void ShowTip ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_MessageTip::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_GuideMode
// 0x0010 (0x0234 - 0x0224)
class UGfxMovie_GuideMode : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	TArray< int >                                      CurShowGuideModeIndexArray;                       		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142695 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCloseMovie ( );
	void OnReqStartGame ( int Index );
	void OnModeTypeSelected ( int SelectedModeType );
	void UpdateModeIntroductions ( int SelectedModeType );
	void OnInitGuideModeUI ( );
	void OnLoad ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_GuideMode::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_HappyMatch
// 0x012C (0x0350 - 0x0224)
class UGfxMovie_HappyMatch : public UGfxMovie_TGBase
{
public:
	TArray< struct FString >                           HappyPointTipArray;                               		// 0x0224 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CommentTitle;                                     		// 0x0230 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ErrorTitle;                                       		// 0x023C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WarnningTitle;                                    		// 0x0248 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItIsNotHappyMatchTime;                            		// 0x0254 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotInHappyMatchTime;                              		// 0x0260 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouMustHave500HappyPointToJoinHappyMatch;         		// 0x026C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadInHappyMatch;                               		// 0x0278 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHadNotInHappyMatch;                            		// 0x0284 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HappyPointAutoRecharge;                           		// 0x0290 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HappyMatchExplanationTitle;                       		// 0x029C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HappyMatchExplanationUrl;                         		// 0x02A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WaittingTextWhenPromotion;                        		// 0x02B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WaittingTextWhenFinal;                            		// 0x02C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MatchingFailString;                               		// 0x02CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     QuitMatchTitle;                                   		// 0x02D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     QuitMatchMessage;                                 		// 0x02E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HappyPointExchangeSuccess;                        		// 0x02F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotHaveEnoughHappyPointToExchange;                		// 0x02FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HappyPointExchangeFail;                           		// 0x0308 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0314 (0x0004) [0x0000000000000000]              
	class UTGHappyMatchController*                     HappyMatchController;                             		// 0x0318 (0x0004) [0x0000000000000000]              
	class UTGOnlineHappyMatch*                         OnlineHappyMatch;                                 		// 0x031C (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiGameRoom;                              		// 0x0320 (0x0004) [0x0000000000000000]              
	class UTGHappyMatchData*                           HappyMatchData;                                   		// 0x0324 (0x0004) [0x0000000000000000]              
	class UTGGfxUISceneClient*                         UIClient;                                         		// 0x0328 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFreeze : 1;                                      		// 0x032C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUIShowWaittingText : 1;                          		// 0x032C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHadBeginEnterMatch : 1;                          		// 0x032C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                CurrentSelectMode;                                		// 0x0330 (0x0004) [0x0000000000000000]              
	int                                                FreezeState;                                      		// 0x0334 (0x0004) [0x0000000000000000]              
	TArray< int >                                      HappyPointCostArray;                              		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ExperienceExchangeArray;                          		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142719 ];

		return pClassPointer;
	};

	int GetNextPlayerHappyMatchProgress ( struct FString* TipString );
	void LastMatchScoreComeBack ( );
	void OnNtfStartOnlineMatch ( int ErrorCode, int CurModeId, int CurSubModeId, int CurMapId, struct FQWord QTalkRoomId_G, struct FQWord QTalkRoomId_R );
	void GeneralInputLock ( unsigned long bNeedLock );
	void UpdateMatchingPlayerNum ( int ErrorCode, struct FString Uin, int PlayerNum );
	void TimerUpdateMatchingPlayerNum ( );
	void StopUpdateMatchingPlayerNum ( );
	void StartUpdateMatchingPlayerNum ( );
	void OnSelectMode ( int Mode );
	void ShowExplanation ( );
	void OnResExchangeExperience ( int ErrorCode, struct FString Uin );
	void OnHappyPointExchangeExperience ( int Index );
	void GetReward ( );
	void OnFreezeTimeout ( );
	void OnReturn ( );
	void CloseThis ( );
	void OnPing ( );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnResCancelMatch ( int ErrorCode );
	bool OnInsistQuitHappyMatch ( );
	void OnCancelMatch ( );
	void OnResBeginMatch ( int ErrorCode );
	void OnBeginMatch ( );
	void SetHappyMatchPlayerInfo ( );
	void SetHappyMatchInfo ( unsigned long bIsInHappyMatchTime, int BeginTime, int EndTime );
	void FreezeUI ( );
	void Freeze ( unsigned long bLock, int enumFreezeState );
	void OnWaitMatchingTimeout ( );
	void InitHappyPointExchange ( );
	void OnViewDataChanged ( struct FString ViewDataName, class UJsonObject* Extra );
	void HappyMatchAddDelegates ( );
	void eventOnClose ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_HappyMatch::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_HelpHall
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_HelpHall : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142842 ];

		return pClassPointer;
	};

	bool EnterKeyFunction ( );
	void QuitHelp ( );
	bool EscKeyFunction ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_HelpHall::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_HelpMenu
// 0x0040 (0x0264 - 0x0224)
class UGfxMovie_HelpMenu : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0260 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142852 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void ShowASLog ( struct FString ASLog );
	void OnReturn ( );
	void SetMoviePathByScreenResolutionScale ( );
	void ShowModeInfo ( );
	void OnLoad ( );
	void OnClose ( );
	void OnStart ( );
};

UClass* UGfxMovie_HelpMenu::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_InvitePlayers
// 0x00A8 (0x02CC - 0x0224)
class UGfxMovie_InvitePlayers : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGUI_InvitePlayerList*                      InvitePlayerList;                                 		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                InviteType;                                       		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                RequestType;                                      		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                PMTeamId;                                         		// 0x0234 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurPayType;                                       		// 0x0238 (0x0001) [0x0000000000000000]              
	int                                                InvitePlayerCount;                                		// 0x023C (0x0004) [0x0000000000000000]              
	struct FTMTeamPlayerInfo                           TMLeader;                                         		// 0x0240 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FilterUins;                                       		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           CurrentQTRoomId;                                  		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FModeGudiePlayerInfo                        ModeMatchInfo;                                    		// 0x028C (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142963 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	bool bCanInvitePlayer ( struct FString Uin );
	void OnInviteTeamMatchMember ( );
	void InviteIdlePlayers ( );
	void ShowASLog ( struct FString ASLog );
	void OnExit ( );
	void InvitePlayers ( );
	void ResetInvitePlayerList ( int SelectedCount );
	void SetInviteType ( int NewRequestType );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_InvitePlayers::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_InvitePlayerList
// 0x0030 (0x006C - 0x003C)
class UTGUI_InvitePlayerList : public UObject
{
public:
	class UGfxMovie_InvitePlayers*                     OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< struct FInvitePlayerData >                 InvitePlayerDataList;                             		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                InvitePlayerCount;                                		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                IdelAndFriendCount;                               		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                IdelLocalPlayerCount;                             		// 0x005C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           IdelPlayerUins;                                   		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 142978 ];

		return pClassPointer;
	};

	bool FilterPlayer ( struct FString strUin );
	void UpdateInvitePlayerList ( );
	void OnGetInvitePlayerList ( );
	void GetInvitePlayerList ( );
	void OnInviteTeamMatchMembers ( );
	bool OnCanFineIdelPlayer ( struct FString Uin, TArray< struct FString > PlayerUinArray );
	void OnInviteIdelTeamMembers ( );
	void OnInviteFriends ( );
	void OnResLocalIdlePlayerList ( int ErrorCode, TArray< struct FString > PlayerUinArray, TArray< struct FString > NickNameArray, struct FString* ErrorDesc );
	void OnGetPlayerRanks ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	void OnResGetMembersList ( int ErrorCode, int MemberCount, unsigned char bSelfIsbanSpeech, unsigned long bIsAll );
	void OnGetFriendStatusComplete ( int ErrorCode, TArray< struct FString > Uins, struct FString* ErrorDesc );
	void ReqGetIdlePlayerList ( );
	void ClearDelegates ( );
	void OnInitialized ( );
};

UClass* UTGUI_InvitePlayerList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_KickPlayerInGame
// 0x011C (0x0340 - 0x0224)
class UGfxMovie_KickPlayerInGame : public UGfxMovie_TGBase
{
public:
	int                                                PlayerPriority;                                   		// 0x0224 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ResistPlayerUins;                                 		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ResistPlayerNickNames;                            		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ResistPlayerDisabled;                             		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ResistPlayerBeVoteCounts;                         		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ResistPlayerVotePlayerCounts;                     		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           GSDUPlayerUins;                                   		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           GSDUPlayerNickNames;                              		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      GSDUPlayerDisabled;                               		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      GSDUPlayerBeVoteCounts;                           		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      GSDUPlayerVotePlayerCounts;                       		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AllPlayerUins;                                    		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AllPlayerNickNames;                               		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AllPlayerDisabled;                                		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AllPlayerBeVoteCounts;                            		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AllPlayerVotePlayerCounts;                        		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AllHumanHeros;                                    		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShowAllPanel : 1;                                		// 0x02E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowResistPanel : 1;                             		// 0x02E8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShowGSDUPanel : 1;                               		// 0x02E8 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                DisableVoteCountingDown;                          		// 0x02EC (0x0004) [0x0000000000000000]              
	int                                                VoteChanceCount;                                  		// 0x02F0 (0x0004) [0x0000000000000000]              
	int                                                VoteChanceType;                                   		// 0x02F4 (0x0004) [0x0000000000000000]              
	int                                                TeamSize;                                         		// 0x02F8 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x02FC (0x0004) [0x0000000000000000]              
	class ATGPlayerController*                         PC;                                               		// 0x0300 (0x0004) [0x0000000000000000]              
	struct FString                                     MoviePath_Standard;                               		// 0x0304 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0310 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x031C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0328 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0334 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143059 ];

		return pClassPointer;
	};

	void SetMoviePathByScreenResolutionScale ( );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnReturn ( );
	void KickPlayerCancel ( );
	void KickPlayerConfirm ( );
	void ResetKickPlayerListMovie ( unsigned long bFirstCall );
	void NotifyPlayerLogout ( struct FString NickName );
	int GetVoteChanceType ( );
	void SetPlayerData ( TArray< struct FString > nPlayerUins, TArray< struct FString > nPlayerNickNames, TArray< struct FString > nBeVoteCounts, TArray< struct FString > TargetVotesToKickArray, int TeamIndex, int nDisableVoteCountingDown, TArray< struct FString > nHumanHeros );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_KickPlayerInGame::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_LeaveMessage
// 0x0021 (0x0245 - 0x0224)
class UGfxMovie_LeaveMessage : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FString                                     TargetName;                                       		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TargetUin;                                        		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      MessageType;                                      		// 0x0244 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143161 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCancel ( );
	void OnResTeamLeaderNotice ( int ErrorCode, struct FString PlayerUin );
	void OnResFriendLeaveMessage ( int ErrorCode, struct FString PlayerUin );
	void OnLeaveMessageTimeOut ( );
	void OnOk ( );
	void InitMessageUI ( );
	void OnLoad ( );
	void AddDelegates ( );
	void eventOnClose ( );
};

UClass* UGfxMovie_LeaveMessage::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_ShopRoleList
// 0x00E8 (0x0124 - 0x003C)
class UTGUI_ShopRoleList : public UObject
{
public:
	TArray< struct FPlayerPropInfo >                   DefaultWeaponPropArray;                           		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentWeaponInHand;                              		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< struct FRoleElement >                      RoleIDInfos;                                      		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGfxMovie_ShopRoom*                          OwnerMovie;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FRoleElement                                CurrentRole;                                      		// 0x005C (0x004C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRoleElement                                DefaultRole;                                      		// 0x00A8 (0x004C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x00F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDefaultRoleShow : 1;                             		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultWeaponShow : 1;                           		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRoleSelected : 1;                                		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPreviewStartWeapon : 1;                          		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPreviewStartCharactar : 1;                       		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000010] 
	TArray< struct FPreviewItem >                      PartSelectArray;                                  		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPreviewItem >                      WeaponSelectArray;                                		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniquePropId                               DefaultRolePropId;                                		// 0x0114 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143264 ];

		return pClassPointer;
	};

	bool GotoShoppingCart ( );
	void ReInitCurrentWeaponInHand ( );
	void OnTakeoffItem ( int EquipIndex );
	void ClearEquiments ( );
	void UpdateEquipments ( );
	void PreviewSocket ( int ComIndex, struct FFCommodityDataRaw ItemElement );
	void CheckIsHasTheWeapon ( struct FFCommodityDataRaw ItemElement );
	void UpdateIsHasTheWeaponState ( TArray< int > ItemIDs );
	void PreviewWeapon ( int ComIndex, struct FFCommodityDataRaw ItemElement );
	void PreviewRole ( struct FFCommodityDataRaw ItemElement );
	bool OnEquipItem ( int ItemIndex, struct FFCommodityDataRaw* ItemElement );
	void GetCurrentShowScokets ( TArray< int >* ItemIDArray );
	void CheckScoketIsMatchRole ( );
	void GetCurrentShowWeapons ( TArray< int >* ItemIDArray );
	void UpdatePreviewRole ( );
	void ShowRoleInfo ( );
	void UpdateAvatar ( int RoleIndex, unsigned long bPlayRoleSound, unsigned long bNeedUpdateItemList );
	void OnChangeRole ( int RoleIndex );
	void ChangeDefaultRole ( );
	void ChangeDefaultWeapon ( struct FUniquePropId PropId );
	void GetDefaultWeapon ( );
	int GetDefautlRole ( );
	void GetAllRoleItemIDs ( );
	void OnInitialized ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UTGUI_ShopRoleList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_ShoppingCart
// 0x005C (0x0098 - 0x003C)
class UTGUI_ShoppingCart : public UObject
{
public:
	class UGfxMovie_ShopRoom*                          OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	class UGfxMovie_ShopRoom*                          LastOwnerMovie;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                GoodsNum;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FString                                     SaleType;                                         		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TPOriginalPriceTotal;                             		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                TPCommonPriceTotal;                               		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                TPVIPPriceTotal;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                GPOriginalPriceTotal;                             		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                GPCommonPriceTotal;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                GPVIPPriceTotal;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                OriginalQBTotal;                                  		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                CommonQBTotal;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                VIPQBTotal;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                PageIndex;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                CartPageIndex_Max;                                		// 0x007C (0x0004) [0x0000000000000000]              
	TArray< struct FCartCommodityInfo >                TPCartList;                                       		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCartCommodityInfo >                GPCartList;                                       		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143266 ];

		return pClassPointer;
	};

	bool DoNothing ( );
	bool CheckAddCart ( struct FFCommodityDataRaw ItemElement );
	void GotoCartAppointPage ( int PageNum );
	void GotoCartNextPage ( );
	void GotoCartPreviousPage ( );
	void CartPriceSelected ( int CartItemIndex, int PriceSelected );
	bool CleanupCart ( );
	void DeleteShoppingCart ( int ItemIndex );
	void DeleteTheSameCommodityInCart ( int CommodityID );
	void AddShoppingCart ( int ComIndex );
	void ShowCartPrice ( );
	void UpdateCartItemList ( );
	void OnInitialized ( );
};

UClass* UTGUI_ShoppingCart::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_ShopItemList
// 0x009C (0x00D8 - 0x003C)
class UTGUI_ShopItemList : public UObject
{
public:
	class UGfxMovie_ShopRoom*                          OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                CurrentMainMenu;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                CurrentSubMenu;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                CurrentSubSubMenu;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                CurrentFilterType;                                		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                CurrentSortType;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     SearchText;                                       		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentCommodityIndexList;                        		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInit : 1;                                        		// 0x0064 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bCanBuyTeamShop : 1;                              		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                PageIndex;                                        		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PageIndex_Max;                                    		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      CommodityIndexList;                               		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            BIsAvailableList;                                 		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CompareID;                                        		// 0x0088 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayerPropInfo >                   AllPropArray;                                     		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocalizeStringPath;                               		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Keywords;                                         		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemCommodityInfo >                PageCommodityList;                                		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGTeamRoomController*                       TeamRoomController;                               		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             TaskFilterFunc;                                   		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __ShopItemSearchFunc__Delegate;                   		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143268 ];

		return pClassPointer;
	};

	bool ShopItemSearchFunction ( struct FString TargetString, struct FString Keyword );
	void DoSearch ( struct FString Text );
	bool DoNothing ( );
	void GotoAppointPage ( int PageNum );
	void GotoNextPage ( );
	void GotoPreviousPage ( );
	void GetRealType ( );
	void FilterScoketByRole ( );
	void UpdateListData ( int FirstIndex, TArray< int >* ParamCommodityIndexArray );
	void UpdateEachPage ( );
	void UpdateItemList ( int MainType, int SubType, int SubSubType, int FilterType, int SortType, unsigned long bSearch );
	void RefreshItemList ( );
	void UpdateItemListByRole ( int RoleShopIndex );
	void OnViewDataChanged ( unsigned char nViewDataType, class UJsonObject* Extra );
	void UnInitialized ( );
	void OnInitialized ( );
	bool ShopItemSearchFunc ( struct FString Keyword );
};

UClass* UTGUI_ShopItemList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_LittleShopRoom
// 0x000C (0x02D8 - 0x02CC)
class UGfxMovie_LittleShopRoom : public UGfxMovie_ShopRoom
{
public:
	class UGfxMovie_ShopRoom*                          LastCartOwnerMoive;                               		// 0x02CC (0x0004) [0x0000000000000000]              
	float                                              LastBuyOperationTime;                             		// 0x02D0 (0x0004) [0x0000000000000000]              
	int                                                CommodityGroupID;                                 		// 0x02D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143598 ];

		return pClassPointer;
	};

	bool OnConfirmTryWeapon ( );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void ShowGroup ( int GroupID );
	void InitAutoPlayImageShow ( int nGroupIndex );
	void InitFlashUI ( );
	void UpdateItemList ( int MainType, int SecondType, int ThirdType, int FilterType, int SortType, unsigned long bSearch );
	void OnLoad ( );
	void OnInitialize ( );
	bool EscKeyFunction ( );
	void ClearDelegates ( );
	void AddDelegates ( );
	void CloseThis ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_LittleShopRoom::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_LittleShopItemList
// 0x0064 (0x013C - 0x00D8)
class UTGUI_LittleShopItemList : public UTGUI_ShopItemList
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x00D8 (0x0004) [0x0000000000000000]              
	struct FString                                     EquipBtnLabelText;                                		// 0x00DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UnEquipBtnLabelText;                              		// 0x00E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RepairBtnLabelText;                               		// 0x00F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DropBtnLabelText;                                 		// 0x0100 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RenewalsBtnLabelText;                             		// 0x010C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DisplayBtnLabelText;                              		// 0x0118 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           ItemTags;                                         		// 0x0124 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FCommodityInList >                  CommodityInListArray;                             		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143615 ];

		return pClassPointer;
	};

	void RefreshItemList ( );
	void UpdateEachPage ( );
	void UpdateItemList ( int MainType, int SubType, int SubSubType, int FilterType, int SortType, unsigned long bSearch );
	void UnInitialized ( );
	void OnInitialized ( );
};

UClass* UTGUI_LittleShopItemList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Loading
// 0x0064 (0x0288 - 0x0224)
class UGfxMovie_Loading : public UGfxMovie_TGBase
{
public:
	struct FString                                     UserName;                                         		// 0x0224 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0230 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UGFxMoviePlayer*                             Movie;                                            		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             LoginSuccess;                                     		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             LoginFailed;                                      		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             LoginNoRole;                                      		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginSuccess__Delegate;                       		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginNoRole__Delegate;                        		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143654 ];

		return pClassPointer;
	};

	void OnCreateRoleReturn ( int ErrorCode, struct FString* ErrorDesc );
	void LoginFailedEx ( struct FString Error );
	void OpenCreateRoleUI ( );
	void LoginNoRoleEx ( int ErrorCode );
	void LoginSuccessEx ( );
	void OnLoginReturn ( int ErrorCode, struct FString* ErrorDesc );
	void eventOnClose ( );
	void OnLoadComplete ( );
	void OnLoginNoRole ( );
	void OnLoginSuccess ( );
	void OnLoginFailed ( struct FString Error );
};

UClass* UGfxMovie_Loading::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_WorldChoose
// 0x001C (0x0240 - 0x0224)
class UGfxMovie_WorldChoose : public UGfxMovie_TGBase
{
public:
	class UGfxMovie_LoginLobby*                        LobbyMovie;                                       		// 0x0224 (0x0004) [0x0000000000000000]              
	TArray< class UGfxMovie_TGBase* >                  CacheMovie;                                       		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __ControlMusic__Delegate;                         		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143723 ];

		return pClassPointer;
	};

	void OnEnterWorld ( int WorldIndex );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnStartBGMusic ( unsigned long bStart );
	void OnSetMusicSign ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
	void ControlMusic ( unsigned long bStart );
};

UClass* UGfxMovie_WorldChoose::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_RecommandWeapon
// 0x0124 (0x0348 - 0x0224)
class UGfxMovie_RecommandWeapon : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FPlayerPVPData                              PVPData;                                          		// 0x0228 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              RecommandPanelStayTime;                           		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                PressBuyButtonTimes;                              		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                SourceTypeId;                                     		// 0x0290 (0x0004) [0x0000000000000000]              
	TArray< struct FInnerIntArray >                    TotalInformationArray;                            		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInnerStringArray >                 InfoNameArray;                                    		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInnerStringArray >                 InfoValueBasicArray;                              		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInnerStringArray >                 InfoValueExtendArray;                             		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInnerStringArray >                 InfoValueMaxArray;                                		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInnerFloatArray >                  InfoValueExtendFloatArray;                        		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInnerFloatArray >                  InfoValueMaxFloatArray;                           		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LeftWeaponIDIndexArray;                           		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HeadShotLocalizedText;                            		// 0x02F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KDRatioLocalizedText;                             		// 0x0300 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KillPersonPerTDMLocalizedText;                    		// 0x030C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KillPersonPerBMLocalizedText;                     		// 0x0318 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FServerDataType                             ServerData;                                       		// 0x0324 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143747 ];

		return pClassPointer;
	};

	void StringFormat ( int DecimalFlag, struct FString* Str );
	bool EscKeyFunction ( );
	void OnCancelMovie ( );
	void OnBuyWeapon ( int Index );
	void OnWatchVideo ( );
	void OnWeaponItemClicked ( int Index );
	void CalculateKillTimesPerMatch ( int MatchTypeId, struct FString* KillTimesPerMatch );
	void SetNewInformationArray ( );
	void UpdateInformationPanelUI ( int Index );
	void GetInformationPanelData ( );
	void OnResGetPVPData ( int ErrorCode, struct FPlayerPVPData CurPVPData );
	void UpdateWeaponListUI ( );
	void OnLoad ( );
	void eventOnClose ( );
	void AddDelegates ( );
	void ClearOldInformationArray ( );
	void SetInformationArray ( );
	int FilterWeaponIDArray ( TArray< int >* TotalWeaponIDArray );
	bool GetServerData ( struct FRecommandWeaponStruct* RecommandWeapons );
	void ClearServerData ( );
	void ClearInformationArray ( );
};

UClass* UGfxMovie_RecommandWeapon::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_RankList
// 0x0044 (0x0268 - 0x0224)
class UGfxMovie_RankList : public UGfxMovie_TGBase
{
public:
	class UTGUISceneClient*                            SceneClient;                                      		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineRankList*                           OnlineRankList;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGRankListManager*                          RankListManager;                                  		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x0238 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x023C (0x0004) [0x0000000000000000]              
	class UTGUI_RankListUI*                            CurrentRankList;                                  		// 0x0240 (0x0004) [0x0000000000000000]              
	struct FString                                     SelfUin;                                          		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHadLoad : 1;                                     		// 0x0250 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastChangeRankListTime;                           		// 0x0254 (0x0004) [0x0000000000000000]              
	struct FString                                     ReqCardInfoUin;                                   		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BeginSeconds;                                     		// 0x0264 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143760 ];

		return pClassPointer;
	};

	void GetRankListTipString ( unsigned long flag );
	void AddFriendWith ( );
	void VewPlayerDetail ( );
	void ResponsePlayerCardInfo ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void RequestPlayerCardInfo ( );
	void EnableGetAwardBtn ( unsigned long flag );
	void UpdateRankListAwardBtn ( struct FString Uin, int ListType, int Date, unsigned long bAward );
	void GetAwardResponse ( int ErrorNum, struct FString Uin, int RankListType, int Date, int Amount );
	void OnResGetMDMData ( int ErrorCode, TArray< int > CurMDMData );
	void OnGetPlayerDailyRecord ( int ErrorCode, struct FString PlayerUin, struct FPlayerDailyRecord DailyRecord );
	void OnResGetSingleMatchData ( int ErrorCode, unsigned long bIsVisible, int GameTimes, int FightScore );
	void OnResGetBIOData ( int ErrorCode, TArray< int > CurBIOData );
	void OnResGetTTMData ( int ErrorCode, TArray< int > CurTTMData );
	void OnResGetCTMData ( int ErrorCode, TArray< int > CurCTMData );
	void OnResTeamMatchData ( int ErrorCode, unsigned long bIsVisible );
	void OnResGetPVMData ( int ErrorCode, struct FPlayerPVMData CurPVMData );
	void OnResGetPVEData ( int ErrorCode, TArray< struct FPlayerPVEData > CurPVERecordArray );
	void OnResGetPVPData ( int ErrorCode, struct FPlayerPVPData CurPVPData );
	void GetAward ( );
	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void UpdatePlayerDataUI ( );
	void UpdatePlayerData ( );
	void UpdateListDataUI ( );
	void UpdateListData ( );
	void UpdateListTitleData ( );
	void UpdateListTitleUI ( );
	void UpdateRankListTreeData ( );
	void UpdateListByType ( int ListType, int PType, int Date );
	void GotoRankList ( int Type, int PType, int Date );
	void FlashLog ( );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_RankList::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ZombieMask
// 0x0004 (0x0228 - 0x0224)
class UGfxMovie_ZombieMask : public UGfxMovie_TGBase
{
public:
	class UTGModeGuideController*                      ModeGuideController;                              		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143769 ];

		return pClassPointer;
	};

	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ZombieMask::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Survey
// 0x001C (0x0240 - 0x0224)
class UGfxMovie_Survey : public UGfxMovie_TGBase
{
public:
	unsigned long                                      bLoaded : 1;                                      		// 0x0224 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTGOnlineTask*                               OnlineTask;                                       		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FSurveyInfo                                 Survey;                                           		// 0x022C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SurveyTaskID;                                     		// 0x023C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 143839 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	bool OnSubmitErrorOK ( );
	void OnSubmitSurveyResponse ( int ErrorCode, int SurveyId, int GroupID, int QuestionId );
	void SubmitSurvey ( );
	void ConfigUI ( );
	void CleanData ( );
	bool OnQuitCancel ( );
	bool OnQuitOK ( );
	void OnCloseClick ( );
	void OnSendClick ( );
	bool DoNothing ( );
	void ShowSurveyTask ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_Survey::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_MatchWaitMovie
// 0x0020 (0x0244 - 0x0224)
class UGfxMovie_MatchWaitMovie : public UGfxMovie_TGBase
{
public:
	unsigned char                                      CurMatchType;                                     		// 0x0224 (0x0001) [0x0000000000000000]              
	unsigned char                                      PlayerType;                                       		// 0x0225 (0x0001) [0x0000000000000000]              
	int                                                ExpectTime;                                       		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamGame*                           OnlineTeamGame;                                   		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGOnlineTechnicalGame*                      OnlineTechnicalGame;                              		// 0x0234 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnNotifyStartMatchFailed__Delegate;             		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 144275 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnNtfServiceDisabled ( int DisabledServiceId );
	void CloseWaitMovie ( );
	void OnNtfDissolveTeamMatch ( );
	void OnNtfKickTeamMatchMember ( struct FString PlayerUin, struct FString PlayerNickName, unsigned long bIsSelf );
	void OnNtfQuitEnterTeamMatch ( );
	void OnResQuitEnterTeamMatch ( int ErrorCode );
	void OnNtfEnterTeamMatchResult ( int ErrorCode );
	void OnNtfQuitTeamMatchUI ( struct FString PlayerUin, struct FString PlayerNickName, unsigned long bIsSelf );
	void OnCancelReadyMatch ( );
	void OnTimeUp ( );
	void OnNtfStartOnlineMatch ( int ErrorCode, int ModeId, int SubModeId, int MapId, struct FQWord QTalkRoomId_G, struct FQWord QTalkRoomId_R );
	void OnNtfStartModeMatch ( int ErrorCode, int ModeId, int SubModeId, int MapId, struct FQWord QTalkRoomId_G, struct FQWord QTalkRoomId_R );
	void OnResStopMatchTMGame ( int ErrorCode );
	void OnNtfStopMatchPMTeam ( int ErrorCode );
	void OnResStopMatchPMTeam ( int ErrorCode );
	void OnResUnReadyPersonalMatch ( int ErrorCode );
	void OnLoad ( );
	void ClearDelegates ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
	void OnNotifyStartMatchFailed ( int ErrorCode );
};

UClass* UGfxMovie_MatchWaitMovie::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TechnicalMatch
// 0x00A0 (0x02C4 - 0x0224)
class UGfxMovie_TechnicalMatch : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineTechnicalGame*                      OnlineTechnicalGame;                              		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                CurSelectMode;                                    		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                CurCostNZPoint;                                   		// 0x0234 (0x0004) [0x0000000000000000]              
	unsigned long                                      CurIsTeam : 1;                                    		// 0x0238 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      EnableTeamButton : 1;                             		// 0x0238 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned char                                      CurPayType;                                       		// 0x023C (0x0001) [0x0000000000000000]              
	unsigned char                                      CurState;                                         		// 0x023D (0x0001) [0x0000000000000000]              
	TArray< struct FTTMatchInfo >                      TGPrsonal_Match;                                  		// 0x0240 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FTTMatchInfo >                      TGTeam_Match;                                     		// 0x024C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     PersonalIntroduceURL;                             		// 0x0258 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TeamIntroduceURL;                                 		// 0x0264 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                TGSTATUS_COLD;                                    		// 0x0270 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                TGSTATUS_NONUMAL;                                 		// 0x0274 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                OpenTime;                                         		// 0x0278 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CloseTime;                                        		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FTMTeamPlayerInfo                           SelPlayerInfo;                                    		// 0x0280 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MAX_PLAYERS;                                      		// 0x02B4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __CompareDelegate__Delegate;                      		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 144317 ];

		return pClassPointer;
	};

	void SortData ( struct FScriptDelegate CompareFunc, TArray< struct FDataObject >* objCollect );
	bool EscKeyFunction ( );
	void OnGamePlayerStatusChanged ( struct FString PlayerUin, unsigned char EStatus, int Reason );
	void OnPlayerStatusChanged ( struct FString PlayerUin, unsigned char EStatus, int Reason );
	void OnResCancelReadyMatch ( unsigned long bAgreeReady );
	void OnNtfDismissTMTeam ( struct FString PlayerUin );
	void OnNtfQuitTMTeam ( struct FString PlayerUin, struct FString PlayerName );
	void ActionScriptFunction_SetTeamPlayerSeat ( int arg1, struct FString arg2, struct FString arg3 );
	void UpdateTeamList ( );
	void OnNtfJoinTMTeam ( unsigned long bChangeTeam, unsigned long bTeamDismiss, int PMTeamId, unsigned char PayType, TArray< struct FString > AddUins );
	void OnResJoinTMTeam ( int ErrorCode, int PMTeamId );
	void OnResRefuseJoinTMTeam ( int PMTeamId, struct FString PlayerUin, struct FString PlayerNickName, int RefuseReason );
	void FLASH_OnChoosePlayer ( int Index );
	void FLASH_OnRemovePlayer ( );
	void FLASH_OnInvitePlayer ( );
	void OnPlusGameSettingsReturn ( );
	void FLASH_OnCloseVedioRecordChange ( unsigned long bDisable );
	void GeneralInputLock ( unsigned long bNeedLock );
	int GetPlayerCountByModel ( int TMMode, int CostMoney, unsigned long bTeam );
	void OnUpdateUIShow ( int ErrorCode );
	void FLASH_ShowPrizeIntroduce ( );
	void FLASH_ShowGameIntroduce ( );
	void OnServerEnterRoom ( int ErrorCode, struct FString* ErrorDesc );
	void Quit ( );
	void FLASH_OnQuit ( );
	void OnResStopMatchTMGame ( int ErrorCode );
	void OnResMatchResult ( int ErrorCode );
	void StartMatchFailed ( int ErrorCode );
	bool ReqQuitTechnicalMatch ( unsigned long IsTimeOut );
	void CancelMatch ( );
	void FLASH_CancelMatch ( );
	void OnResMatchGame ( int ErrorCode, int ExitTime );
	void AllMatchFailedTips ( int ErrorCode );
	void TeamMatchFailedTips ( int ErrorCode );
	void OnNtfTeamMatchStoped ( int ErrorCode );
	void OnResTeamStopMatchGame ( int ErrorCode );
	void OnNtfTeamMatching ( int ExitTime );
	void OnNtfTeamMatchResult ( int ErrorCode );
	void OnResLeaderMatchGame ( int ErrorCode, int ExitTime );
	void OnNtfPayModeChanged ( struct FTechnicalMatchData ModeData );
	void OnNtfPayTypeChanged ( unsigned char PayType );
	void FLASH_OnChangePayType ( unsigned long bLeaderPay );
	bool OnContinueGame ( );
	void FLASH_ReadyMatch ( );
	void FLASH_OnChooseMatchType ( int nIndex, int nNZPoint, unsigned long bIsTeam );
	void FLASH_OnSetCurrentPageType ( unsigned long bTeam );
	void MsgBox ( struct FString MsgKey, struct FString TitleKey, struct FString MsgHead );
	void ShowTips ( struct FString MsgKey, struct FString TitleKey, struct FString MsgHead );
	void SetPlayerStatus ( );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	struct FString GetTypeNameByMode ( int TMode );
	void InitialData ( );
	void ResetVideoRecordStatus ( );
	void InvitedIntoTeamRoom ( );
	void TimerChangeToTeam ( unsigned long bTeamLeader );
	void OnLoad ( );
	void RemoveDelegate ( );
	void AddDelegate ( );
	void ExitTechnicalMatch ( );
	void eventOnClose ( );
	void eventOnStart ( );
	int CompareDelegate ( struct FDataObject obj1, struct FDataObject obj2 );
};

UClass* UGfxMovie_TechnicalMatch::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_SinglePersonalMatch
// 0x002C (0x0250 - 0x0224)
class UGfxMovie_SinglePersonalMatch : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x0228 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoad : 1;                                        		// 0x022C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsLeaderPMTeam : 1;                              		// 0x022C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInGamePMTeam : 1;                                		// 0x022C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisabledSPMatch : 1;                             		// 0x022C (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     sOwnerUin;                                        		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      bStateTypePMTeam;                                 		// 0x023C (0x0001) [0x0000000000000000]              
	float                                              fBeginSeconds;                                    		// 0x0240 (0x0004) [0x0000000000000000]              
	TArray< struct FSimpleMatchTypeMapping >           SPMModeMappingArray;                              		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 144334 ];

		return pClassPointer;
	};

	void OnPlusGameSettingsReturn ( );
	void OnCloseVedioRecordChange ( unsigned long bDisable );
	void OnScoreReviewBtnClicked ( );
	bool EscKeyFunction ( );
	void ShowTipMessage ( unsigned char MessageType, struct FString MessageName, TArray< struct FString > ReplaceNames );
	void GeneralInputLock ( unsigned long bNeedLock );
	void OnDescriptionBtnClicked ( );
	void OnPMAnalysisButtonClicked ( );
	void OnQuitPMTeamClicked ( );
	void OnNtfLeaderPMMatchState ( unsigned long bIsEnterMatch, int PMTeamId, struct FString PlayerUin );
	void OnNtfEndGamePMTeam ( struct FString PlayerUin );
	void OnNtfQuitGamePMTeam ( struct FString PlayerUin );
	void OnNtfInGamePMTeam ( struct FString PlayerUin );
	void OnNtfNtfDismissPMTeam ( struct FString PlayerUin );
	void OnNtfStopMatchPMTeam ( int ErrorCode );
	void OnResStopMatchPMTeam ( int ErrorCode );
	void ReqQuitPersonalMatchTeam ( unsigned long bTimeout );
	void OnReqQuitPersonalMatchTeamByTimer ( );
	void OnNtfEnterMatchPMTeam ( int ErrorCode, int ExprectTime );
	void OnResEnterMatchPMTeam ( int ErrorCode, int ExprectTime, TArray< struct FString > ProhibitUins );
	void OnNtfCancelReadyPMTeam ( struct FString PlayerUin );
	void OnResCancelReadyPMTeam ( int ErrorCode );
	void OnNtfReadyPMTeam ( struct FString PlayerUin );
	void OnNtfRemovePMTeam ( struct FString PlayerUin );
	void ClearPMTeamList ( );
	void OnNtfQuitPMTeam ( struct FString PlayerUin );
	void OnNtfJoinPMTeam ( unsigned long bChangeTeam, unsigned long bTeamDismiss, int PMTeamId, TArray< struct FString > AddUins );
	void OnQueryFriendComplete ( int ErrorCode, struct FString ErrorDesc, struct FString nUin, struct FString nNickName, int nRank, unsigned long nbNeedAuthenInfo );
	void GotoStateUI ( unsigned char CurStateType, unsigned long bIsLeader );
	void SetEnterMatchButtonState ( );
	void UpdatePMTeamList ( unsigned long bReqRank );
	void OnShowPlayerRanks ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	unsigned char GetClickEnterMatchType ( );
	void OnReqJoinPersonalMatch ( int nModeIndex );
	void UpdateQuickModeNames ( );
	void OnRemoveBtnClicked ( int Index );
	void OnCancelReayBtnClicked ( );
	void OnReadyBtnClicked ( );
	void OnResPMTeamId ( int PMTeamId, int ErrorCode );
	void InvitePlayers ( );
	void OnChoseBtnClicked ( );
	void UpdateNickName ( struct FString PlayerName );
	void OnNtfStartOnlineMatch ( int ErrorCode, int ModeId, int SubModeId, int MapId, struct FQWord QTalkRoomId_G, struct FQWord QTalkRoomId_R );
	void RecoverUnReadyUI ( );
	void OnResUnReadyPersonalMatch ( int ErrorCode );
	void ReqQuitPersonalMatch ( unsigned long bTimeout );
	void OnReqQuitPersonalMatchByTimer ( );
	void OnResReadyPersonalMatch ( int ErrorCode, int ExpectTime );
	void OnQuitSPMUI ( );
	void ReqQuitSinglePersonalMatch ( );
	bool OnDealQuitPMTeam ( );
	void OnNtfDropOutSingleMatch ( int FightScore, int WeightScore );
	void OnSetSelfTipContent ( unsigned char CurMatchLevel, int FightLevelScore, struct FString ActiveState, int NextAddScore );
	void OnNtfServiceDisabled ( int DisabledServiceId );
	void OnNtfProhibitPMMatch ( int DropOutCount );
	void SetDisabledMatch ( );
	void OnResGetSingleMatchData ( int ErrorCode, unsigned long bIsVisible, int GameTimes, int FightScore );
	void SetPlayerStatus ( );
	void UpdateMatchTimeInfo ( );
	void OnGetPMMatchSeasonTime ( int ErrorCode );
	void SetMatchDescription ( );
	void SetPlayerInfoInSPMUI ( unsigned long bReqRank );
	void ShowQTCheckBox ( );
	void EndDisabledMatch ( );
	void ResetVideoRecordStatus ( );
	void OnLoad ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_SinglePersonalMatch::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_MDMGuide
// 0x0040 (0x0264 - 0x0224)
class UGfxMovie_MDMGuide : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0260 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 144359 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void ShowASLog ( struct FString ASLog );
	void OnReturn ( );
	void SetMoviePathByScreenResolutionScale ( );
	void ShowModeInfo ( );
	void OnLoad ( );
	void OnClose ( );
	void OnStart ( );
};

UClass* UGfxMovie_MDMGuide::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_MessageManager
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_MessageManager : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 144469 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_MessageManager::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_MessageTipBox
// 0x0018 (0x023C - 0x0224)
class UGfxMovie_MessageTipBox : public UGfxMovie_TGBase
{
public:
	struct FString                                     TipMessage;                                       		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnTipBoxClosedDelegate;                           		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 144492 ];

		return pClassPointer;
	};

	void onEffectedOut ( );
	void SetTip ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_MessageTipBox::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PVETopRank
// 0x0039 (0x025D - 0x0224)
class UGfxMovie_PVETopRank : public UGfxMovie_TGBase
{
public:
	TArray< struct FString >                           RankPlayerUins;                                   		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      IndexInTopListArray;                              		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x023C (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0240 (0x0004) [0x0000000000000000]              
	int                                                DifficultSelectedIndex;                           		// 0x0244 (0x0004) [0x0000000000000000]              
	int                                                MapSelectedIndex;                                 		// 0x0248 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoad : 1;                                        		// 0x024C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSetData : 1;                                     		// 0x024C (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FPVEMapInfo_RankList >              TopRankMapList;                                   		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentWorldType;                                 		// 0x025C (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145521 ];

		return pClassPointer;
	};

	void OnCloseMovie ( );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnClearTimer ( );
	void OpenHelpUI ( );
	void OnCloseLoadingUI ( );
	void OnGetPlayerRanks ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	struct FString OnGetPVESubModeName ( unsigned char LevelNums );
	void OnSetPVERankList ( unsigned long bNeedGetPlayerRankInfo );
	void OnPVEDifficultChanged ( int Index );
	void OnMapChanged ( int Index );
	void OnResGetPVETopRankList ( int ErrorCode, int ModeId, int MapId );
	void OnLoad ( );
	void GetPVEMapInfo ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_PVETopRank::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PVEEncouragement
// 0x01BC (0x03E0 - 0x0224)
class UGfxMovie_PVEEncouragement : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x0228 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap1_Level1Array;                               		// 0x022C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap1_Level2Array;                               		// 0x0238 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap1_Level3Array;                               		// 0x0244 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap1_Level4Array;                               		// 0x0250 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap1_Level5Array;                               		// 0x025C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap2_Level1Array;                               		// 0x0268 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap2_Level2Array;                               		// 0x0274 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap2_Level3Array;                               		// 0x0280 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap2_Level4Array;                               		// 0x028C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap2_Level5Array;                               		// 0x0298 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap3_Level1Array;                               		// 0x02A4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap3_Level2Array;                               		// 0x02B0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap3_Level3Array;                               		// 0x02BC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap3_Level4Array;                               		// 0x02C8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap3_Level5Array;                               		// 0x02D4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap4_Level1Array;                               		// 0x02E0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap4_Level2Array;                               		// 0x02EC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap4_Level3Array;                               		// 0x02F8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap4_Level4Array;                               		// 0x0304 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct UGfxMovie_PVEEncouragement_FThingsListData  TGMap4_Level5Array;                               		// 0x0310 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FFinishGameDataList >               SVFinishGameThingsArray;                          		// 0x031C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FFinishGameDataList >               SFFinishGameThingsArray;                          		// 0x0328 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FFinishGameDataList >               LDFinishGameThingsArray;                          		// 0x0334 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FFinishGameDataList >               ATDFinishGameThingsArray;                         		// 0x0340 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     PE_Level1;                                        		// 0x034C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_Level2;                                        		// 0x0358 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_Level3;                                        		// 0x0364 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_Level4;                                        		// 0x0370 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_Level5;                                        		// 0x037C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_Tital;                                         		// 0x0388 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_WebTital;                                      		// 0x0394 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_WebUrl;                                        		// 0x03A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_ConvertSuccessful;                             		// 0x03AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_ConvertFailed;                                 		// 0x03B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_ConvertLessCards;                              		// 0x03C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PE_FinishGameIntroduce;                           		// 0x03D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ConvertThingsId;                                  		// 0x03DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145523 ];

		return pClassPointer;
	};

	void OnShowIntroduce ( );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnResConvertThings ( unsigned long bSuccessful, int CardType, int UseTime, int PayCard );
	void OnConvertThings ( int FG_Type, int FG_Index, int SelIndex );
	void OnQuit ( );
	struct FString GetThingsName ( int ThingsId );
	TArray< struct FString > GetEncouragementThingsSource ( TArray< int > thingsList, TArray< struct FString >* ThingsName );
	void AddThingsList ( TArray< int > thingsList, int nScoreValue, TArray< struct UGfxMovie_PVEEncouragement_FThingsItem >* stThingsItem );
	TArray< struct UGfxMovie_PVEEncouragement_FThingsItem > GetThingsSourceByMapId ( int nMapId );
	void OnSelectTab ( int gIndex );
	class UJsonObject* TestData ( );
	void SetFinishGameThingsData ( );
	void OnMainTabChange ( );
	void OnLoad ( );
	void AS_Log ( struct FString txtLog );
	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_PVEEncouragement::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_NewAchievedArrived
// 0x009C (0x02C0 - 0x0224)
class UGfxMovie_NewAchievedArrived : public UGfxMovie_TGBase
{
public:
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0224 (0x0004) [0x0000000000000000]              
	TArray< struct FTGAchievementData >                NewAchievedList;                                  		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTGAchievementData                          CurTGAchievementData;                             		// 0x0234 (0x007C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   NormalAchiSound;                                  		// 0x02B0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   AdvancedAchiSound;                                		// 0x02B4 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AC;                                               		// 0x02B8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTGUISceneClient*                            SceneClient;                                      		// 0x02BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145590 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void ShowNewAchieved ( int ErrorCode, struct FString* ErrorDesc );
	void GetNewAchievedList ( );
	void ClearAll ( );
	void CloseThis ( );
	void FlashLog ( struct FString msg );
	void OnConfirm ( );
	void ShowNextNewAchieved ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_NewAchievedArrived::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_NewModeNotice
// 0x0010 (0x0234 - 0x0224)
class UGfxMovie_NewModeNotice : public UGfxMovie_TGBase
{
public:
	TArray< int >                                      ModeIdArray;                                      		// 0x0224 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0230 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145758 ];

		return pClassPointer;
	};

	void FlashLog ( struct FString msg );
	void TimerUpdate ( );
	void OnVote ( int ModeId, unsigned long flag );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	bool GetModeIndexByModeId ( int ModeId, int* ModeIndex );
	void UpdateModeStateUI ( TArray< struct FVoteStat >* VoteStats );
	void UpdateModeState ( );
	void CloseThis ( );
	void eventOnClose ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_NewModeNotice::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_OnlineMatch
// 0x0014 (0x0238 - 0x0224)
class UGfxMovie_OnlineMatch : public UGfxMovie_TGBase
{
public:
	class UTGOnlineMatchController*                    OnlineMatchController;                            		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineMatch*                              OnlineMatch;                                      		// 0x0228 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsInRoomList : 1;                                 		// 0x022C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurMatchUID;                                      		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                CurBusIP;                                         		// 0x0234 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145801 ];

		return pClassPointer;
	};

	void OnMovieAction ( struct FString MovieAction, struct FString InMovieName, class UJsonObject* Extra );
	void OnViewDataChanged ( struct FString ViewDataName, class UJsonObject* Extra );
	void OnViewDataError ( int ErrorId, struct FString ErrorName );
	void OnEnterMatchRoom ( int RoomID, int BusIP, unsigned long IsObserver );
	void OnEnterMatch ( int MatchUID, int BusIP );
	void ViewMatchDetails ( struct FString DescURL );
	void OnBackBtnClicked ( );
	void eventOnClose ( );
	void OnTimerEnterOnlineMatchRoom ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_OnlineMatch::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_OnlineMatchRoom
// 0x0008 (0x022C - 0x0224)
class UGfxMovie_OnlineMatchRoom : public UGfxMovie_TGBase
{
public:
	class UTGOnlineMatchController*                    OnlineMatchController;                            		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineMatch*                              OnlineMatch;                                      		// 0x0228 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145834 ];

		return pClassPointer;
	};

	void OnViewDataChanged ( struct FString ViewDataName, class UJsonObject* Extra );
	void RefreshReadyButtonState ( );
	void RefreshMapAndRuleList ( );
	void RefreshPlayerList ( );
	void OnReadyBtnClicked ( );
	void OnBackBtnClicked ( );
	void eventOnClose ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_OnlineMatchRoom::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_OptionalMode
// 0x0010 (0x0234 - 0x0224)
class UGfxMovie_OptionalMode : public UGfxMovie_TGBase
{
public:
	TArray< struct FSimpleMatchTypeMapping >           SPMModeMappingArray;                              		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x0230 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145849 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCloseMovieClicked ( );
	void OnConfirmClicked ( int SelectedIndex );
	void ConfigUI ( );
	void OnLoad ( );
};

UClass* UGfxMovie_OptionalMode::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_SB_Base
// 0x0188 (0x03AC - 0x0224)
class UGfxMovie_SB_Base : public UGfxMovie_TGBase
{
public:
	struct FString                                     MTIPS_BASEEXP;                                    		// 0x0224 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_TEAMEXP;                                    		// 0x0230 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_NETBAREXP;                                  		// 0x023C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_TOOLSEXP;                                   		// 0x0248 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_PM_EXP;                                     		// 0x0254 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_CLAN_EXP;                                   		// 0x0260 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_VIPEXP;                                     		// 0x026C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_ACTVEXP;                                    		// 0x0278 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_PENDANTEXP;                                 		// 0x0284 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_SPECEXP;                                    		// 0x0290 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_TODAYFIRSTWINEXP;                           		// 0x029C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_FEATSCORE;                                  		// 0x02A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_ROUNDSCORE;                                 		// 0x02B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_MATCHLEVELSCORE;                            		// 0x02C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_ACESCORE;                                   		// 0x02CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_ACTIVESCORE;                                		// 0x02D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_TODAYFIRSTWINSCORE;                         		// 0x02E4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_BASEGP;                                     		// 0x02F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_COMMONGP;                                   		// 0x02FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_TEAMGP;                                     		// 0x0308 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_PM_GP;                                      		// 0x0314 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_ACTVGP;                                     		// 0x0320 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_PENDANTGP;                                  		// 0x032C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MTIPS_SPECGP;                                     		// 0x0338 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StrMinute;                                        		// 0x0344 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StrMinutes;                                       		// 0x0350 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                TGNetBarPlus_GOLD;                                		// 0x035C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                TGNetBarPlus_SILVER;                              		// 0x0360 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                TGNetBarPlus_COPPER;                              		// 0x0364 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                HappyMatchResultShowTime;                         		// 0x0368 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UTGScoreBoardController*                     ScoreBoardController;                             		// 0x036C (0x0004) [0x0000000000000000]              
	class UTGMatchPlayerStat*                          OwnerPlayer;                                      		// 0x0370 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0374 (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0378 (0x0004) [0x0000000000000000]              
	class UTGOnlineMultiGameRoom*                      OnlineMultiRoom;                                  		// 0x037C (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0380 (0x0004) [0x0000000000000000]              
	int                                                CurModeId;                                        		// 0x0384 (0x0004) [0x0000000000000000]              
	int                                                CurMapId;                                         		// 0x0388 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ScoreboardWinMusic;                               		// 0x038C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ScoreboardLoseMusic;                              		// 0x0390 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             NotifyReturnRoom;                                 		// 0x0394 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __NotifyShowScoreboard__Delegate;                 		// 0x03A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145872 ];

		return pClassPointer;
	};

	void EndViewPortClientLoadingState ( );
	void OnResponse_GetCurrentTaskInfo ( TArray< struct FString > TaskNameArray, TArray< float > TaskCurrentValueArray, TArray< float > TaskTargetValueArray );
	void OnNotify_EndGame ( );
	void OnEndGameScoreChange ( );
	void ShowNewAchieved ( int ErrorCode, struct FString* ErrorDesc );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void OnOk ( );
	bool ReturnToHappyMatch ( );
	void HappyMatchOperator ( );
	void SetCurrentType ( int nType );
	void CheckRecommandWeaponData ( );
	void OnSuperUnload ( );
	void OnUpdateScoreboardTime ( );
	void OnSuperLoad ( unsigned char SBType );
	void eventOnClose ( );
	void eventOnStart ( );
	void SetProcessBarDescribe ( );
	void NotifyShowScoreboard ( );
};

UClass* UGfxMovie_SB_Base::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PersonalScoreboard
// 0x0034 (0x03E0 - 0x03AC)
class UGfxMovie_PersonalScoreboard : public UGfxMovie_SB_Base
{
public:
	unsigned long                                      bMovieLoaded : 1;                                 		// 0x03AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMechMode : 1;                                    		// 0x03AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBioMode : 1;                                     		// 0x03AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bReturnRoom : 1;                                  		// 0x03AC (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                LevelNum;                                         		// 0x03B0 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerNickName;                                   		// 0x03B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentIndex;                                     		// 0x03C0 (0x0004) [0x0000000000000000]              
	TArray< class UTGMatchPlayerStat* >                MemberList;                                       		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MyRank;                                           		// 0x03D0 (0x0004) [0x0000000000000000]              
	struct FString                                     ReqCardInfoUin;                                   		// 0x03D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145970 ];

		return pClassPointer;
	};

	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void OnSaveVideoBtnClicked ( );
	void AddTeammate ( int Index, unsigned long Camp );
	bool OnMoveFriendBlack_Confirm ( );
	void MoveFriendToBlackList ( int Index );
	bool OnAddPlayerToBlackList_Confirm ( );
	void AddEnemy ( int Index, unsigned long bIsRegular );
	void PassphraseFriend ( int Index );
	void ShowPlayerDetail ( int Index, unsigned long bIsRegular );
	bool OnDeleteFriend_Confirm ( );
	void DeleteFriend ( int Index );
	void AddFriend ( int Index );
	void ComplainSomeone ( int Index, unsigned long bIsRegular );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( int Index );
	void OnEnforceOffline ( int Index );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( int Index );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void GetPlayerCardInfo ( int Index );
	void OpenRightClickMenu ( );
	void ReqOpenRightClickMenu ( int Index );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnLevelUp ( );
	int OnGetRate ( float CurRate );
	bool IsPlaySuccessful ( unsigned long bWithScore, TArray< class UTGMatchPlayerStat* >* out_SortPlayers );
	void DisplayScore ( TArray< class UTGMatchPlayerStat* >* out_Players );
	void GetRecentPlaymates ( );
	void EnableOkButton ( );
	void InitialTestData ( );
	void OnLoad ( );
	void ClearOwnerPlayerData ( );
	void OnShowJoinMatchLessTime ( );
	void OnNotify_EndGame ( );
	void OnResponse_GetCurrentTaskInfo ( TArray< struct FString > TaskNameArray, TArray< float > TaskCurrentValueArray, TArray< float > TaskTargetValueArray );
	void ShowTaskData ( );
	void ShowAchiveData ( );
	void ShowAwardData ( );
	void ShowOwnerPlayer ( );
	void ShowScores ( );
	void SetDescriptions ( );
	void ShowNewAchieved ( int ErrorCode, struct FString* ErrorDesc );
	void eventOnClose ( );
	void eventOnStart ( );
	void OnOk ( );
};

UClass* UGfxMovie_PersonalScoreboard::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ShowTMPrize
// 0x0010 (0x0234 - 0x0224)
class UGfxMovie_ShowTMPrize : public UGfxMovie_TGBase
{
public:
	class UTGOnlineTechnicalGame*                      OnlineTechnicalGame;                              		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                MyRank;                                           		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                EndGetNZPointRank;                                		// 0x0230 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 145999 ];

		return pClassPointer;
	};

	void OnQuit ( );
	void OnChoosePrize ( int Index );
	struct FString GetThingsById ( int ThingsId, struct FString* ThingsName );
	void Test ( );
	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ShowTMPrize::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_SaveVideo
// 0x0010 (0x0234 - 0x0224)
class UGfxMovie_SaveVideo : public UGfxMovie_TGBase
{
public:
	class UTGOnlineMultiGameRoom*                      OnlineMultiGameRoom;                              		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FString                                     VideoName;                                        		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 146198 ];

		return pClassPointer;
	};

	void OnNotifyRecordDownload ( unsigned long bSuccessful, struct FString strIniFilePath );
	void OnNotifyRecordDownloadProgress ( float ProgressValue );
	void OnCancelBtnClick ( );
	void eventOnClose ( );
	void OnLoad ( );
	void DownLoadVideo ( );
	bool OnConfirmDownloadVideo ( );
	void OnSaveBtnClick ( );
};

UClass* UGfxMovie_SaveVideo::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PlayerComebackAwards
// 0x000C (0x0230 - 0x0224)
class UGfxMovie_PlayerComebackAwards : public UGfxMovie_TGBase
{
public:
	class UTGActivityManager*                          ActivityManager;                                  		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineActivity*                           OnlineActivity;                                   		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x022C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 146207 ];

		return pClassPointer;
	};

	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_PlayerComebackAwards::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PMAnalysis
// 0x0030 (0x0254 - 0x0224)
class UGfxMovie_PMAnalysis : public UGfxMovie_TGBase
{
public:
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x0224 (0x0004) [0x0000000000000000]              
	TArray< struct FPMAnalyseTotalStatis >             CurPMAnalyseData;                                 		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLoaded : 1;                                      		// 0x0234 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFleeInMatch : 1;                                 		// 0x0234 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                CurSelectedIndex;                                 		// 0x0238 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerUin;                                        		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerNickName;                                   		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 146794 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCloseAnalysisMovie ( unsigned long bIsAutoOpen );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void GetPlayerCardInfo ( );
	void OnGetOtherInfos ( );
	void OnGetMatchKeyInfos ( );
	int OnGetRate ( int SomeValue, int TotalValue );
	void OnGetWeaponInfos ( );
	bool bIsSpecialMedal ( int CurSpecialMedal, unsigned char SpecialType );
	void OnGetBasicInfos ( );
	void OnGetOverallInfos ( );
	void OnSetStars ( );
	void OnUpdateFlashUI ( );
	void OnSelectedSomeMatch ( int Index );
	void OnGetAllMerit ( );
	void OnLoad ( );
	void OnTestData ( );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_PMAnalysis::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PropShiftMovie
// 0x003C (0x0260 - 0x0224)
class UGfxMovie_PropShiftMovie : public UGfxMovie_TGBase
{
public:
	class UTGTeamRoomController*                       TeamRoomController;                               		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FShiftPropInfo                              CurPropInfo;                                      		// 0x0228 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 146898 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCancelBtnClicked ( );
	void OnConfirmBtnClicked ( int nWareHouseIndex );
	void OnViewDataError ( int ErrorId, struct FString ErrorContent );
	void OnUpdateWareHouseList ( );
	void OnViewDataChanged ( unsigned char nViewDataType, class UJsonObject* Extra );
	void OnUpdatePropInfo ( );
	void eventOnClose ( );
	void OnLoad ( );
};

UClass* UGfxMovie_PropShiftMovie::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_PVEScoreboard
// 0x004C (0x03F8 - 0x03AC)
class UGfxMovie_PVEScoreboard : public UGfxMovie_SB_Base
{
public:
	unsigned long                                      bMovieLoaded : 1;                                 		// 0x03AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSetLoadingMCVisible : 1;                         		// 0x03AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bReturnRoom : 1;                                  		// 0x03AC (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< struct FString >                           RankPlayerUins;                                   		// 0x03B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      IndexInTopListArray;                              		// 0x03BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LevelNum;                                         		// 0x03C8 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerNickName;                                   		// 0x03CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentIndex;                                     		// 0x03D8 (0x0004) [0x0000000000000000]              
	TArray< class UTGMatchPlayerStat* >                MemberList;                                       		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurSubModeId;                                     		// 0x03E8 (0x0004) [0x0000000000000000]              
	struct FString                                     ReqCardInfoUin;                                   		// 0x03EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 147126 ];

		return pClassPointer;
	};

	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void OnSaveVideoBtnClicked ( );
	void AddTeammate ( int Index );
	bool OnMoveFriendBlack_Confirm ( );
	void MoveFriendToBlackList ( int Index );
	bool OnAddPlayerToBlackList_Confirm ( );
	void AddEnemy ( int Index, unsigned long bIsRegular );
	void PassphraseFriend ( int Index );
	void ShowPlayerDetail ( int Index, unsigned long bIsRegular );
	bool OnDeleteFriend_Confirm ( );
	void DeleteFriend ( int Index );
	void AddFriend ( int Index, unsigned long Camp );
	void ComplainSomeone ( int Index, unsigned long bIsRegular );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( int Index );
	void OnEnforceOffline ( int Index );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( int Index );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void GetPlayerCardInfo ( int Index );
	void OpenRightClickMenu ( );
	void ReqOpenRightClickMenu ( int Index );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnLevelUp ( );
	int OnGetRate ( float CurRate );
	void DisplayScore ( TArray< class UTGMatchPlayerStat* >* out_Players );
	void GetRecentPlaymates ( );
	void EnableOkButton ( );
	void InitialTestData ( );
	void OnNtfGameRecInfo ( struct FString URL );
	void RefreshSaveVideoBtnState ( );
	void OnLoad ( );
	void ClearOwnerPlayerData ( );
	void OnShowJoinMatchLessTime ( );
	void OnNotify_EndGame ( );
	void OnResponse_GetCurrentTaskInfo ( TArray< struct FString > TaskNameArray, TArray< float > TaskCurrentValueArray, TArray< float > TaskTargetValueArray );
	void ShowTaskData ( );
	void ShowAchiveData ( );
	void ShowOwnerPlayer ( );
	void OnResStartLuckyDraw ( struct FUniquePropId ValidId, int OpenTimes, int ScoreValue );
	void OnShowChestMovie ( );
	void ShowScores ( );
	struct FString GetPVESubModeName ( int SubModeId );
	void ShowNewAchieved ( int ErrorCode, struct FString* ErrorDesc );
	void eventOnClose ( );
	void eventOnStart ( );
	void OnOk ( );
	void OnClearTimer ( );
	void OnCloseLoadingUI ( );
	void OnGetPlayerRanks ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	void OnSetPVERankList ( );
	void OnSetPVEDetailData ( );
	struct FString OnGetPVESubModeName ( unsigned char LevelNums );
};

UClass* UGfxMovie_PVEScoreboard::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_QBQP2TP
// 0x0004 (0x0228 - 0x0224)
class UGfxMovie_QBQP2TP : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 147479 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void ReqCancel ( );
	bool DoNothing ( );
	void ReqRechargeTP ( unsigned char QBQP2TPType, unsigned char PayType, unsigned long bMixPay );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_QBQP2TP::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_QTalkMaskPanel
// 0x0008 (0x022C - 0x0224)
class UGfxMovie_QTalkMaskPanel : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      CanQuickClose : 1;                                		// 0x0228 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 147496 ];

		return pClassPointer;
	};

	void OnEnterTeamRoom ( unsigned long bQTalkRoomId_G );
	void OnReOpenQTRoom ( );
	void OnResMaskUser ( struct FString RoomID, struct FString NickName, struct FString nUin, unsigned long bMask );
	void OnUserMask ( struct FString strUin, unsigned long bMask );
	void OnAllUserMask ( unsigned long bMask );
	void OnQuit ( );
	void OnOk ( );
	bool EscKeyFunction ( );
	void NotifyQTMicChange ( int MicValue );
	void NotifyQTSoundsChange ( int SoundsValue );
	void GetMyTeamPlayers ( struct FString MyUin, TArray< struct FString >* arrayNickName, TArray< struct FString >* arrayUin );
	void ShowUserList ( );
	void CallASFunction ( struct FString Path, unsigned long arg1, int arg2, int arg3, int arg4, struct FString arg5, struct FString arg6 );
	void OnGetQTalkSetting ( int nSounds, int nMic, unsigned long bFreeTalk, int talkType, struct FString strKey, struct FString strMouse );
	void SetCanQuickClose ( );
	void OnLoad ( );
	void FlashLog ( struct FString txtLog );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_QTalkMaskPanel::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_QuitGame
// 0x002C (0x0250 - 0x0224)
class UGfxMovie_QuitGame : public UGfxMovie_TGBase
{
public:
	float                                              AverageExp_EachMatch;                             		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineTask*                               OnlineTask;                                       		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlinePersonalGame*                       OnlineSingleMatch;                                		// 0x0230 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0234 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             OnConfirmQuitGame;                                		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnReturnGame;                                     		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 147809 ];

		return pClassPointer;
	};

	void FlashLog ( struct FString msg );
	void UpdateActivityInfo ( );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnGotoTaskRoom ( int Group, unsigned long bCenter );
	void OnReturn ( );
	void OnQuit ( );
	void OnGetPlayerDailyRecord ( int ErrorCode, struct FString PlayerUin, struct FPlayerDailyRecord DailyRecord );
	void OnGetSingleMatchData ( int ErrorCode, unsigned long bIsVisible, int GameTimes, int FightScore );
	void OnGetRecentlyAchievedComplete ( int ErrorCode, struct FString* ErrorDesc );
	void FreshDailyTaskInfo ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_QuitGame::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_QuitOption
// 0x0084 (0x02A8 - 0x0224)
class UGfxMovie_QuitOption : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ObserverString;                                   		// 0x0260 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DemoString;                                       		// 0x026C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TechnicalMatchString;                             		// 0x0278 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PersonalMatchString;                              		// 0x0284 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HappyMatchString;                                 		// 0x0290 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ClanMatchString;                                  		// 0x029C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 147874 ];

		return pClassPointer;
	};

	void ShowQTMaskPanel ( );
	void Complaint ( );
	void IgnorePlayerChat ( );
	void SetMoviePathByScreenResolutionScale ( );
	void ShowASLog ( struct FString ASLog );
	bool OnReturnFromTutorial ( );
	bool OnReturnRoom ( );
	void SetKickPlayerData ( struct FString nPlayerUinsString, struct FString nPlayerNickNamesString, struct FString nBeVoteCountsString, struct FString nTargetVotesToKickString, int TeamIndex, int DisableVoteCountingDown, struct FString nHumanHerosString );
	void OpenKickPlayer ( );
	void OpenSystemSettings ( );
	void OpenFriendWhisper ( );
	bool OnCancel ( );
	void ReturnRoom ( );
	void ReturnGame ( );
	bool IsInTryWeaponMode ( );
	bool IsInDemoPlayMode ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_QuitOption::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ShieldChatInGame
// 0x0050 (0x0274 - 0x0224)
class UGfxMovie_ShieldChatInGame : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineChatManager*                        ChatManager;                                      		// 0x0260 (0x0004) [0x0000000000000000]              
	class UGfxMovie_ChatInMatch*                       MovieChatInMatch;                                 		// 0x0264 (0x0004) [0x0000000000000000]              
	struct FString                                     SelfUin;                                          		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 147964 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void SetMoviePathByScreenResolutionScale ( );
	void FlashLog ( );
	void GetPlayerInfo ( TArray< struct FString >* R_PlayerName, TArray< struct FString >* R_PlayerUin, TArray< int >* R_PlayerSelectedState, TArray< struct FString >* G_PlayerName, TArray< struct FString >* G_PlayerUin, TArray< int >* G_PlayerSelectedState );
	void SetPlayerList ( );
	void SetShieldTeamAndP2PFlag ( unsigned long TeamFlag, unsigned long P2PFlag );
	void AddPlayerToShield ( struct FString Uin );
	void Cancel ( );
	void Confirm ( );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ShieldChatInGame::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_RankListUI
// 0x0024 (0x0060 - 0x003C)
class UTGUI_RankListUI : public UObject
{
public:
	int                                                RankListType;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class UGfxMovie_RankList*                          OwnerMovie;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTGOnlineRankList*                           OnlineRankList;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RankArray;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           NickNameArray;                                    		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 147978 ];

		return pClassPointer;
	};

	int GetRankListType ( );
	void eventOnUnInitialized ( );
	void eventOnInitialized ( );
	void OnUninit ( );
	void eventOnInit ( );
	void eventDestroyed ( );
	void eventUnInit ( );
	bool eventInit ( );
};

UClass* UTGUI_RankListUI::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Reconnect
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_Reconnect : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 148306 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCancelReconnect ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_Reconnect::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Respawn
// 0x0004 (0x0228 - 0x0224)
class UGfxMovie_Respawn : public UGfxMovie_TGBase
{
public:
	int                                                RespawnTime;                                      		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 148355 ];

		return pClassPointer;
	};

	void LoadLocalizeString ( );
	void FlashLog ( struct FString logString );
	void Abort ( );
	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_Respawn::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_Scoreboard
// 0x0048 (0x03F4 - 0x03AC)
class UGfxMovie_Scoreboard : public UGfxMovie_SB_Base
{
public:
	unsigned long                                      AutoSaveLastGameVideo : 1;                        		// 0x03AC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bMovieLoaded : 1;                                 		// 0x03AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      CurrentbIsRegular : 1;                            		// 0x03AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bReturnRoom : 1;                                  		// 0x03AC (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FString >                           PlayerUins;                                       		// 0x03B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ReqCardInfoUin;                                   		// 0x03BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LevelNum;                                         		// 0x03C8 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerNickName;                                   		// 0x03CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentIndex;                                     		// 0x03D8 (0x0004) [0x0000000000000000]              
	TArray< class UTGMatchPlayerStat* >                RegularTeamMembers;                               		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTGMatchPlayerStat* >                RebelTeamMembers;                                 		// 0x03E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 148486 ];

		return pClassPointer;
	};

	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void OnSaveVideoBtnClicked ( );
	void AddTeammate ( int Index, unsigned long bIsRegular );
	bool OnMoveFriendBlack_Confirm ( );
	void MoveFriendToBlackList ( int Index, unsigned long bIsRegular );
	void AddEnemy ( int Index, unsigned long bIsRegular );
	bool OnAddPlayerToBlackList_Confirm ( );
	void ShowPlayerDetail ( int Index, unsigned long bIsRegular );
	bool OnDeleteFriend_Confirm ( );
	void DeleteFriend ( int Index, unsigned long bIsRegular );
	void AddFriend ( int Index, unsigned long bIsRegular );
	void ComplainSomeone ( int Index, unsigned long bIsRegular );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( int Index, unsigned long bIsRegular );
	void OnEnforceOffline ( int Index, unsigned long bIsRegular );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( int Index, unsigned long bIsRegular );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void GetPlayerCardInfo ( int Index, unsigned long bIsRegular );
	void OpenRightClickMenu ( );
	void ReqOpenRightClickMenu ( int Index, unsigned long bIsRegular );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnLevelUp ( );
	int OnGetRate ( float CurRate );
	TArray< struct FGamePlayerInfo > DisplayScore ( int TeamIndex, TArray< class UTGMatchPlayerStat* >* out_Players );
	bool bIsBombMatch ( );
	bool bIsHasScores ( );
	void GetRecentPlaymates ( );
	void EnableOkButton ( );
	bool bIsHideKillInfo ( );
	void InitialTestData ( );
	void OnLoad ( );
	void ClearOwnerPlayerData ( );
	void OnShowJoinMatchLessTime ( );
	void OnNotify_EndGame ( );
	void OnResponse_GetCurrentTaskInfo ( TArray< struct FString > TaskNameArray, TArray< float > TaskCurrentValueArray, TArray< float > TaskTargetValueArray );
	void ShowTaskData ( );
	void ShowAchiveData ( );
	void ShowAwardData ( );
	void ShowOwnerPlayer ( );
	void ShowPlayerDetailed ( TArray< struct FGamePlayerInfo >* REGULAR_Name, TArray< struct FGamePlayerInfo >* REBEL_Name );
	void ShowScores ( );
	void SetDescriptions ( );
	void ShowNewAchieved ( int ErrorCode, struct FString* ErrorDesc );
	void eventOnClose ( );
	void eventOnStart ( );
	void OnOk ( );
};

UClass* UGfxMovie_Scoreboard::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ShopBuySingle
// 0x01AC (0x03D0 - 0x0224)
class UGfxMovie_ShopBuySingle : public UGfxMovie_TGBase
{
public:
	unsigned char                                      BuyCommodityTypes;                                		// 0x0224 (0x0001) [0x0000000000000000]              
	struct FFCommodityDataRaw                          ItemElement;                                      		// 0x0228 (0x00E4) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFCommodityDataRaw >                RecommandCommodityList;                           		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ConsignneUin;                                     		// 0x0318 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ConsignneNickName;                                		// 0x0324 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ConsignneRequestId;                               		// 0x0330 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0334 (0x0004) [0x0000000000000000]              
	int                                                CommodityID;                                      		// 0x0338 (0x0004) [0x0000000000000000]              
	int                                                PriceSelect;                                      		// 0x033C (0x0004) [0x0000000000000000]              
	struct FUniquePropId                               RepairPropId;                                     		// 0x0340 (0x0010) [0x0000000000000000]              
	struct FString                                     DiscountCardSelectionString;                      		// 0x0350 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DiscountTipsString;                               		// 0x035C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PayTypeNZPointString;                             		// 0x0368 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PayTypeRPString;                                  		// 0x0374 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FExchargeCard >                     ItemElementExchargeCardList;                      		// 0x0380 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHadWarnningMinorProtection : 1;                  		// 0x038C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MinorProtectionMount;                             		// 0x0390 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     YouPaySelectionNotCorrectString;                  		// 0x0394 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BuyTitleBuyNewString;                             		// 0x03A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BuyTitleValidPeriodString;                        		// 0x03AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< int >                                      NeedPayPriceArray;                                		// 0x03B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDiscountItemInfo >                 PlayerDiscountItemArray;                          		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 148832 ];

		return pClassPointer;
	};

	bool UseDiscountCard ( struct FFCommodityDataRaw CommodityData, int CommoditySelectedPriceIndex, struct FFCommodityBuyInfo* CommodityBuyInfo, unsigned char* PayType, int* DiscountCardIndex );
	bool GetUsableDiscountCardByCommodity ( struct FFCommodityDataRaw Commodity, int PriceIndex, TArray< struct FExchargeCard >* DiscountCardList, TArray< struct FPlayerPropInfo >* PropInfoArray );
	void CalcPrice ( int CommodityPriceIndex, int DiscountCardIndex, int MPExchargeNZPriceIndex, int RecommandCommodity0PriceIndex, int RecommandCommodity1PriceIndex, int RecommandCommodity2PriceIndex, int* CommodityNum, struct FString* CommodityType, int* OwnMoney, int* TotalPrice, int* RemainMoney );
	void OnCalcPrice ( int CommodityPriceIndex, int DiscountCardIndex, int MPExchargeNZPriceIndex, int RecommandCommodity0PriceIndex, int RecommandCommodity1PriceIndex, int RecommandCommodity2PriceIndex );
	bool GetRecommandCommodityInfo ( class UJsonObject** RecommandCommodityInfo );
	bool UpdateMPExchargeNZInfo ( int SelectedPriceIndex );
	bool UpdateDiscountCardInfo ( int SelectedPriceIndex, int RecommandPriceIndex0, int RecommandPriceIndex1, int RecommandPriceIndex2 );
	bool GetCommodityData ( struct FFCommodityDataRaw Commodity, class UJsonObject** CommodityInfo );
	bool GetCommodityInfo ( class UJsonObject** CommodityProperity );
	bool GetPlayerInfo ( class UJsonObject** PlayerInfoObj );
	void UpdateCommodityData ( );
	void CheckMinorProtect ( int CostNum );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnRechargeButtonClicked ( );
	void BuyCancel ( );
	void DialogClose ( );
	void BuyCommoditySingle ( int CommodityIDs, int PayType, int MPExchargePrice, int DiscountItemID, int PriceSelects, struct FString ConsUin, struct FString ConsNickName, unsigned char BuyTypes );
	void BuyCommodity ( int CommodityPriceIndex, int DiscountCardIndex, int MPExchargeNZPriceIndex, int RecommandCommodity0PriceIndex, int RecommandCommodity1PriceIndex, int RecommandCommodity2PriceIndex );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_ShopBuySingle::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_ShopGiveSingle
// 0x0134 (0x0358 - 0x0224)
class UGfxMovie_ShopGiveSingle : public UGfxMovie_TGBase
{
public:
	struct FString                                     GiveSayDefault;                                   		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RequestSayDefault;                                		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FFCommodityDataRaw                          ItemElement;                                      		// 0x023C (0x00E4) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      BuyTypes;                                         		// 0x0320 (0x0001) [0x0000000000000000]              
	unsigned long                                      bGiveGift : 1;                                    		// 0x0324 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFriendListInit : 1;                              		// 0x0324 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInResultUI : 1;                                  		// 0x0324 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHadGiveOrAskForGift : 1;                         		// 0x0324 (0x0004) [0x0000000000000000] [0x00000008] 
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0328 (0x0004) [0x0000000000000000]              
	TArray< struct FFriendInfo >                       FriendInfos;                                      		// 0x032C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFriendInfo >                       GiveGiftFriendInfos;                              		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      HasSelectedIndexArray;                            		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GiftPriceSelectIndex;                             		// 0x0350 (0x0004) [0x0000000000000000]              
	int                                                FriendIndexByAsk;                                 		// 0x0354 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 149038 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnPleaseSelecteFriend ( );
	void OnBuyComplete ( int ErrorCode, struct FResBuyCommodityInfo BuyedCommodity );
	void ShowGiveResultInfo ( struct FString ConsignneUin, struct FString ResultContent, unsigned long bSuccessfulResult );
	bool OnConfrimAskForGift ( );
	bool OnConfrimGive ( );
	void OnSecondConfirmTip ( int PriceSelect, int HasSelectedPlayerNum, int FriendIndex );
	void ShowCommodity ( );
	void CloseDialog ( );
	void ShowFriendList ( );
	void eventOnClose ( );
	void OnLoad ( );
};

UClass* UGfxMovie_ShopGiveSingle::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_SingleMatchScoreboard
// 0x0048 (0x03F4 - 0x03AC)
class UGfxMovie_SingleMatchScoreboard : public UGfxMovie_SB_Base
{
public:
	class UTGOnlinePersonalGame*                       OnlinePersonalGame;                               		// 0x03AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bMovieLoaded : 1;                                 		// 0x03B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReturnRoom : 1;                                  		// 0x03B0 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                LevelNum;                                         		// 0x03B4 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerNickName;                                   		// 0x03B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerUin;                                        		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentIndex;                                     		// 0x03D0 (0x0004) [0x0000000000000000]              
	TArray< struct FPersonalGameScoreBoardInfo >       MemberList;                                       		// 0x03D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGamePlayerInfo >                   CurPlayers;                                       		// 0x03E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TGPersonalMatch_FirstWinScore;                    		// 0x03EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                TGPersonalMatch_FirstWinExp;                      		// 0x03F0 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 149166 ];

		return pClassPointer;
	};

	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void OnSaveVideoBtnClicked ( );
	void AddTeammate ( int Index );
	bool OnMoveFriendBlack_Confirm ( );
	void MoveFriendToBlackList ( int Index );
	bool OnAddPlayerToBlackList_Confirm ( );
	void AddEnemy ( int Index, unsigned long bIsRegular );
	void PassphraseFriend ( int Index );
	void ShowPlayerDetail ( int Index, unsigned long bIsRegular );
	bool OnDeleteFriend_Confirm ( );
	void DeleteFriend ( int Index );
	void AddFriend ( int Index, unsigned long Camp );
	void ComplainSomeone ( int Index, unsigned long bIsRegular );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( int Index );
	void OnEnforceOffline ( int Index );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( int Index );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void GetPlayerCardInfo ( int Index );
	void OpenRightClickMenu ( );
	void ReqOpenRightClickMenu ( int Index );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnLevelUp ( );
	TArray< struct FGamePlayerInfo > DisplayScore ( TArray< struct FPersonalGameScoreBoardInfo >* out_Players );
	void GetRecentPlaymates ( );
	void EnableOkButton ( );
	void OnLoad ( );
	void OnNotify_EndGame ( );
	void OnResponse_GetCurrentTaskInfo ( TArray< struct FString > TaskNameArray, TArray< float > TaskCurrentValueArray, TArray< float > TaskTargetValueArray );
	void ShowTaskData ( );
	void ShowAchiveData ( );
	void ShowAwardData ( );
	void ShowOwnerPlayer ( );
	void OpenAnalysisMovie ( );
	void ShowPlayerDetailed ( TArray< struct FGamePlayerInfo >* ArrayPlayerInfo );
	void ShowScores ( );
	void SetDescriptions ( );
	void InitialTestData ( );
	bool bIsBombMatch ( );
	bool bIsWinPoint ( );
	void ShowNewAchieved ( int ErrorCode, struct FString* ErrorDesc );
	void eventOnClose ( );
	void eventOnStart ( );
	void OnOk ( );
};

UClass* UGfxMovie_SingleMatchScoreboard::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_SpectatorHUD
// 0x0084 (0x02A8 - 0x0224)
class UGfxMovie_SpectatorHUD : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLoaded : 1;                                      		// 0x0260 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowPlayBar : 1;                                 		// 0x0260 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsSameCampInOneSide : 1;                          		// 0x0260 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bExtendMode : 1;                                  		// 0x0260 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FPlayerInfo >                       LastPlayerInfoArray;                              		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentSide;                                      		// 0x0270 (0x0001) [0x0000000000000000]              
	int                                                CurrentSideIndex;                                 		// 0x0274 (0x0004) [0x0000000000000000]              
	int                                                LeftSideCount;                                    		// 0x0278 (0x0004) [0x0000000000000000]              
	int                                                RightSideCount;                                   		// 0x027C (0x0004) [0x0000000000000000]              
	int                                                MaxPlayerInfoCountEachSide;                       		// 0x0280 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< int >                                      ModeIdsOfNotDisplayCampIcon;                      		// 0x0284 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< int >                                      LeftPlayerIDArrayOfLastDisplay;                   		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RightPlayerIDArrayOfLastDisplay;                  		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 149685 ];

		return pClassPointer;
	};

	void ReCalcPosition ( );
	void F4 ( );
	void F3 ( );
	void F2 ( );
	void F1 ( );
	void Forward ( );
	void Backward ( );
	void Pause ( );
	void Play ( );
	void ReplayPrev ( );
	void ReplaySetPlayState ( unsigned long bPlaying );
	void ReplaySetForwardSpeedText ( struct FString Text );
	void ReplaySetViewModeText ( struct FString Text );
	void ReplaySetCurrentTime ( int TimeInSeconds );
	bool ReplaySetTotalTime ( int TimeInSeconds );
	void ReplaySetSelectedButton ( struct FString Id );
	bool IsReplayMode ( );
	void ShowPlayBar ( unsigned long bShow );
	void SetMoviePathByScreenResolutionScale ( );
	void ArrowChangeViewTarget ( int Dir );
	void OnRightBtnClick ( );
	void OnLeftBtnClick ( );
	void OnChangeRightPlayer ( int SideIndex );
	void OnChangeLeftPlayer ( int SideIndex );
	bool FindValidPlayer2 ( unsigned char DestSide, int StartIdx, unsigned long bSearchUpwards, struct FString* DestPlayerName );
	bool FindValidPlayer ( unsigned char DestSide, int StartIdx, unsigned long bSearchUpwards, int* DestPlayerID );
	void ChangeSelectedPlayer ( unsigned char Side, int SideIndex, unsigned long bSearchUpwards );
	void SetMouseEnabled ( unsigned long bEnabled );
	void QuickPlayerList ( );
	void SetCampPlayerListVisibility ( unsigned long bVisible );
	void SetCampIconVisibility ( unsigned long bVisible );
	void SetTweenEnabled ( unsigned long bEnabled );
	void ClearSelection ( );
	void SetSelectedPlayer ( unsigned char Side, int SideIndex );
	void SetNotTeamGame ( );
	void CleanData ( );
	void UpdateRightSide ( TArray< struct FString > PlayerNameArray, TArray< int > PlayerKillArray, TArray< int > PlayerHPArray, TArray< int > TeamIndexArray );
	void UpdateLeftSide ( TArray< struct FString > PlayerNameArray, TArray< int > PlayerKillArray, TArray< int > PlayerHPArray, TArray< int > TeamIndexArray );
	void UpdateSelectedPlayer ( );
	int GetPlayerHealth ( class ATGPlayerReplicationInfo* PRI );
	void AdjustPositionForOneSide ( TArray< struct FPlayerInfo >* PlayerInfoArrayOfOneSide, TArray< int >* PlayerIdArrayOfOneSide );
	bool GetSideInfo ( TArray< struct FString >* LeftNameArray, TArray< struct FString >* RightNameArray, TArray< int >* LeftKillArray, TArray< int >* RightKillArray, TArray< int >* LeftHPArray, TArray< int >* RightHPArray, TArray< int >* LeftTeamIdArray, TArray< int >* RightTeamIdArray );
	struct FPlayerInfo GetPlayerInfo ( struct FString PlayerName );
	void UpdateBothSides ( unsigned long bTweenEnabled );
	void ShowPlayBarTimerFunc ( );
	void OnLoad ( );
	bool GetWhetherShowCampIcon ( );
};

UClass* UGfxMovie_SpectatorHUD::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_StoryGameMenu
// 0x0044 (0x0268 - 0x0224)
class UGfxMovie_StoryGameMenu : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nStoryStep;                                       		// 0x0260 (0x0004) [0x0000000000000000]              
	int                                                nBtnIdx;                                          		// 0x0264 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 149937 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	void HandlePlayerDied ( unsigned long PlayerDied );
	void SetEnableButton ( struct FString ButtonName, unsigned long bEnabled );
	void SetMoviePathByScreenResolutionScale ( );
	void ShowASLog ( struct FString ASLog );
	void GameUnpause ( );
	bool OnReturnFromTutorial ( );
	void OnRestartMission ( );
	void OpenSystemSettings ( );
	void OnLoadLastCheckPoint ( );
	bool OnCancel ( );
	void ReturnRoom ( );
	void ReturnGame ( );
	void OnLoad ( );
	void OnStart ( );
};

UClass* UGfxMovie_StoryGameMenu::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TaskTip
// 0x0004 (0x0228 - 0x0224)
class UGfxMovie_TaskTip : public UGfxMovie_TGBase
{
public:
	class UTGOnlineTask*                               OnlineTask;                                       		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 150255 ];

		return pClassPointer;
	};

	void OnShowTaskTipChanged ( );
	bool GetNotShowTaskTipSelected ( );
	void OnCloseMovie ( );
	void InitUI ( );
	void CleanData ( );
	void ShowDailyTask ( );
	void OnLoad ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_TaskTip::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TaskComplete
// 0x002C (0x0250 - 0x0224)
class UGfxMovie_TaskComplete : public UGfxMovie_TGBase
{
public:
	class UTGUISceneClient*                            SceneClient;                                      		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineTask*                               OnlineTask;                                       		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGTaskManager*                              TaskManager;                                      		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                ShowTaskCompleteTime;                             		// 0x0234 (0x0004) [0x0000000000000000]              
	struct FString                                     TaskCompleteMessage;                              		// 0x0238 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NewTaskMessage;                                   		// 0x0244 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 150402 ];

		return pClassPointer;
	};

	void CloseThis ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_TaskComplete::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TeamBadgeSystem
// 0x002C (0x0250 - 0x0224)
class UGfxMovie_TeamBadgeSystem : public UGfxMovie_TGBase
{
public:
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           BadgeTypeNames;                                   		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OwnerUin;                                         		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentBadgeBg;                                   		// 0x0244 (0x0004) [0x0000000000000000]              
	int                                                CurrentBadgeBorder;                               		// 0x0248 (0x0004) [0x0000000000000000]              
	int                                                CurrentBadgeIcon;                                 		// 0x024C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 150456 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void ShowTipMessage ( struct FString MessageName, TArray< struct FString > ReplaceNames );
	void ReqCloseBadgePanel ( );
	void ResSetBadgePacked ( TArray< struct FPackedBadgeInfo > PackedArray );
	void ResShowTeamBadges ( TArray< struct FBadgeCommodityInfo > BadgeArray, unsigned char BadgeType, unsigned long bNeedClearData, unsigned long bNeedUpdateData );
	void ReqConfirmBuyBadge ( struct FString BadgeTypeString, int ListSelectedIndex, int PriceSelectedIndex );
	void ReqSetBadge ( );
	bool QueryTeamBadgeInfo ( struct FString TypeNames, int Index, struct FBadgeCommodityInfo* BadgeElement );
	void GetBadgeCommodityPrice ( int CommodityID, TArray< int >* PriceArray, TArray< struct FString >* TimeArray );
	void ReqShowBadgeInfos ( struct FString BadgeTypeName, int ListSelectedIndex );
	void ShowTeamBadgeList ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_TeamBadgeSystem::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TeamDataRecord
// 0x002C (0x0250 - 0x0224)
class UGfxMovie_TeamDataRecord : public UGfxMovie_TGBase
{
public:
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FTeamMember >                       TeamMemberArray;                                  		// 0x0228 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      CurSortType;                                      		// 0x0234 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ReputationListType;                               		// 0x0235 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      DataRecordType;                                   		// 0x0236 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bDescendSort : 1;                                 		// 0x0238 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bHadReqSelfReputation : 1;                        		// 0x0238 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	int                                                PageIndex;                                        		// 0x023C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PageIndex_Max;                                    		// 0x0240 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FTeamPersonalReputationInfo >       MyReputationList;                                 		// 0x0244 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 150564 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void UpdateWareHouseUseRecord ( );
	void UpdateRecordTypeByPageChange ( );
	void OnGoPageBtnClicked ( int _PageIndex );
	void OnNextPageBtnClicked ( );
	void OnPrePageBtnClicked ( );
	void OnQuitMovie ( );
	void OnSortPersonalReputationData ( );
	int ComparePersonalReputationDate ( int IndexA, int IndexB );
	int CompareTwoStringValue ( struct FString Value1, struct FString Value2 );
	int CompareTwoIntValue ( int Value1, int Value2 );
	void OnDescendPersonalReputationData ( );
	void OnSortByTypeBtnClickInPerson ( unsigned long _bDescend );
	void OnSortByChangeBtnClickInPerson ( unsigned long _bDescend );
	void OnSortByDateBtnClickInPerson ( unsigned long _bDescend );
	struct FString GetDateInfo ( int YearMonthDate );
	void GetPersonalReputationData ( TArray< struct FString >* DateArray, TArray< struct FString >* TypeArray, TArray< int >* ChangeArray, TArray< int >* bShowDiffArray );
	void OnResGetSelfReputationList ( int ErrorCode );
	void OnUpdatePersonalReputaionList ( );
	void OnSortByTodayBtnClick ( unsigned long _bDescend );
	void OnSortByYesterDayBtnClick ( unsigned long _bDescend );
	void OnSortByLastWeekBtnClick ( unsigned long _bDescend );
	void OnSortByLastMonthBtnClick ( unsigned long _bDescend );
	void OnSortByNameBtnClick ( unsigned long _bDescend );
	void GetTeamReputationData ( TArray< struct FString >* NameArray, TArray< int >* LastMonthArray, TArray< int >* LastWeekArray, TArray< int >* YesterdayArray, TArray< int >* TodayArray );
	void UpdateReputationList ( unsigned char _CurSortType, unsigned long _bDescendSort );
	void OnDescendReputationData ( );
	void OnDescendTeamReputationData ( );
	void OnSortReputationDataByToday ( );
	void CreateHeapByToday ( int IndexT, int IndexW );
	void OnSortReputationDataByYesterday ( );
	void CreateHeapByYesterday ( int IndexT, int IndexW );
	void OnSortReputationDataByLastWeek ( );
	void CreateHeapByLastWeek ( int IndexT, int IndexW );
	void OnSortReputationDataByLastMonth ( );
	void CreateHeapByLastMonth ( int IndexT, int IndexW );
	void OnSortReputationDataByName ( );
	void CreateHeapByName ( int IndexT, int IndexW );
	void OnSortReputationData ( );
	void OnSortTeamReputationData ( );
	void OnUpdateTeamReputaionList ( );
	void OnLoad ( );
	void TestFunction ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_TeamDataRecord::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TeamMatch
// 0x0028 (0x024C - 0x0224)
class UGfxMovie_TeamMatch : public UGfxMovie_TGBase
{
public:
	unsigned char                                      CurPlayerIdentityType;                            		// 0x0224 (0x0001) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamGame*                           OnlineTeamGame;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGTeamMatchController*                      TeamMatchController;                              		// 0x0234 (0x0004) [0x0000000000000000]              
	struct FString                                     OwnerUin;                                         		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BeginSeconds;                                     		// 0x0244 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLockedUI : 1;                                    		// 0x0248 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 150754 ];

		return pClassPointer;
	};

	void OnReturn ( );
	void ReqQuitTeamMatchUI ( );
	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void GeneralInputLock ( unsigned long bNeedLock );
	void OnQuitTeamMatchUI ( );
	void OnNtfQuitTeamMatchUI ( struct FString PlayerUin, struct FString PlayerNickName, unsigned long bIsSelf );
	void OnNtfBreakTeamGame ( struct FString PlayerUin, struct FString PlayerNickName );
	void OnNtfStartTeamGame ( struct FString PlayerUin, struct FString PlayerNickName );
	void OnNtfEndTeamGame ( );
	void OnNtfDissolveTeamMatch ( );
	void OnScoreReviewBtnClicked ( );
	void OnTMDescriptionBtnClicked ( );
	void ClearGroupInfoShow ( );
	void OnQuitOrAddTeamInTeamMatch ( unsigned long bAddTeam );
	void OnNtfQuitEnterTeamMatch ( );
	void OnResQuitEnterTeamMatch ( int ErrorCode );
	void OnCancelMatchClicked ( );
	void OnReqQuitEnterTeamMatchByTimer ( );
	void OnNtfEnterTeamMatchResult ( int ErrorCode );
	void OnNtfEnterTeamMatch ( int ExpectTime );
	void OnResEnterTeamMatch ( int ErrorCode, int ExpectTime );
	void OnEnterMatchClicked ( );
	void OnNtfSetUnReady ( struct FString PlayerUin, struct FString PlayerNickName );
	void OnResSetUnReady ( int ErrorCode );
	void OnCancelReadyClicked ( );
	void OnNtfSetReady ( struct FString PlayerUin, struct FString PlayerNickName );
	void OnEnterReadyClicked ( );
	void OnResKickTeamMatchMember ( int ErrorCode, struct FString PlayerUin, struct FString PlayerNickName );
	void OnNtfKickTeamMatchMember ( struct FString PlayerUin, struct FString PlayerNickName, unsigned long bIsSelf );
	void OnKickBtnClicked ( int Index );
	void OnNtfJoinTeamMatch ( unsigned long bIsSelf, struct FString PlayerUin, struct FString PlayerNickName );
	void OnResTeamMatchId ( int ErrorCode, int CurMatchId );
	void OnInviteBtnClicked ( );
	void OnManagerTeamBtnClicked ( );
	void UpdateGroupRecordInfo ( struct FTeamMatchGroupRecordInfo GroupRecordInfo );
	void UpdateMatchTimeInfo ( );
	void SetGroupMemberList ( unsigned long bNeedReqRankInfo );
	void ClearGroupMemberList ( );
	void SetGamePlayerUI ( );
	void GotoNoGroupUI ( );
	void ReqShowRankDetailInfo ( int Index );
	void OnGetTeamGroupRankList ( int ErrorCode );
	void UpdateManagerBtn ( unsigned long bCanCreate );
	void OnResGetTeamMatchRecord ( int ErrorCode, unsigned long bSelfGroup, struct FUniquePropId ResTeamId, int ResTeamGroupId, struct FTeamMatchGroupRecordInfo TMRecordInfo );
	void OnGetTeamGroupInfo ( int ErrorCode, unsigned long bTempGroup, unsigned long bSelfGroup, struct FTeamMatchGroupInfo TeamGroup );
	void OnCreateTeamGroup ( int ErrorCode, struct FString GroupName, int GroupID, TArray< struct FString > ErrorPlayerList );
	void UpdateTeamMatchUI ( );
	void SetPlayerStatus ( );
	void SetbShowLoadingScreen ( );
	void OnResCurrentQTRoom ( unsigned long bSuccessful, struct FString strRoomID, struct FString strSubRoomID, struct FString strLastRoomID );
	void GetOrCreateCurrentQTRoom ( );
	void ShowCurrentQTRoomInfo ( TArray< struct FString > RoomID );
	void OnLoad ( );
	void OnResInviteJoinTeamGroup ( int ErrorCode, unsigned long bInvited, unsigned long bIsTempGroup, struct FString OtherUin, struct FString OtherNickName );
	void OnNotifyMemberStateChange ( unsigned char ChangedType, unsigned long bUpdateTeamGroup, unsigned long bIsSelfChange, unsigned char bSelfIsbanSpeech, struct FString MemberUinA, struct FString MemberUinB );
	void OnResQuitTeamGroup ( int ErrorCode, unsigned long bIsTempGroup );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_TeamMatch::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TeamMatchDescription
// 0x0004 (0x0228 - 0x0224)
class UGfxMovie_TeamMatchDescription : public UGfxMovie_TGBase
{
public:
	class UTGTeamMatchController*                      TeamMatchController;                              		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 150809 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCloseMovieBtnClicked ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_TeamMatchDescription::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TeamMatchManager
// 0x000C (0x0230 - 0x0224)
class UGfxMovie_TeamMatchManager : public UGfxMovie_TGBase
{
public:
	class UTGTeamMatchController*                      TeamMatchController;                              		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamGame*                           OnlineTeamGame;                                   		// 0x0228 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHadGroup : 1;                                    		// 0x022C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDissolveGroupBtnDisabled : 1;                    		// 0x022C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 150871 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnCloseMovie ( );
	void OnResQuitTeamGroup ( int ErrorCode, unsigned long bIsTempGroup );
	void OnResDissolveTeamGroup ( int ErrorCode, struct FString GroupName, unsigned long bIsTempGroup );
	void OnCreateTeamGroup ( int ErrorCode, struct FString GroupName, int GroupID, TArray< struct FString > ErrorPlayerList );
	void ResDeleteTeamGroupMember ( int ErrorCode, unsigned long bIsTempGroup, TArray< struct FString > DeletedUins, TArray< struct FString > DeletedNickNames );
	void OnResInviteJoinTeamGroup ( int ErrorCode, unsigned long bInvited, unsigned long bIsTempGroup, struct FString OtherUin, struct FString OtherNickName );
	void OnDeletePlayer ( int Index );
	void OnAddPlayer ( );
	void OnChangeNameBtnClicked ( );
	void OnQuitBtnClicked ( );
	void OnDissolvedBtnClicked ( );
	void OnCreateBtnClicked ( );
	void UpdateGroupScoreInfo ( struct FTeamMatchGroupRecordInfo GroupRecordInfo );
	void OnResGetTeamMatchRecord ( int ErrorCode, unsigned long bSelfGroup, struct FUniquePropId ResTeamId, int ResTeamGroupId, struct FTeamMatchGroupRecordInfo TMRecordInfo );
	void OnGetTeamGroupInfo ( int ErrorCode, unsigned long bTempGroup, unsigned long bSelfGroup, struct FTeamMatchGroupInfo TeamGroup );
	void UpdateMatchGroupMemberList ( );
	void UpdateFlashUI ( );
	void OnLoad ( );
	void UpdateFlashUIByDelay ( );
	void OnNotifyMemberStateChange ( unsigned char ChangedType, unsigned long bUpdateTeamGroup, unsigned long bIsSelfChange, unsigned char bSelfIsbanSpeech, struct FString MemberUinA, struct FString MemberUinB );
	void AddDelegates ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_TeamMatchManager::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TeamRoom
// 0x0094 (0x02B8 - 0x0224)
class UGfxMovie_TeamRoom : public UGfxMovie_TGBase
{
public:
	class UTGUI_TeamLeftInfo*                          LeftTeamInfo;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTGUI_TeamTopRankList*                       TopRankList;                                      		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTGUI_TeamMemberList*                        MemberList;                                       		// 0x022C (0x0004) [0x0000000000000000]              
	class UTGUI_TeamManageList*                        ManageList;                                       		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTGUI_TeamGroup*                             GroupPanel;                                       		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0238 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x023C (0x0004) [0x0000000000000000]              
	class UTGOnlineAchievement*                        OnlineAchievement;                                		// 0x0240 (0x0004) [0x0000000000000000]              
	class UTGTeamRoomController*                       TeamRoomController;                               		// 0x0244 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoadFlash : 1;                                   		// 0x0248 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHadShowTeamInfo : 1;                             		// 0x0248 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoadCompleted : 1;                               		// 0x0248 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHadDismissTeamMemberGroup : 1;                   		// 0x0248 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShowTeamShop : 1;                                		// 0x0248 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FString                                     OwnerUin;                                         		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OwnerNickName;                                    		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      OwnerPost;                                        		// 0x0264 (0x0001) [0x0000000000000000]              
	unsigned char                                      TheCommandType;                                   		// 0x0265 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurTeamRoomTab;                                   		// 0x0266 (0x0001) [0x0000000000000000]              
	float                                              BeginSeconds;                                     		// 0x0268 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerNickName;                                   		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UIName;                                           		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBindTeamQTalk                              stBindMsg;                                        		// 0x0284 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ReqCardInfoUin;                                   		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nRecordIndex;                                     		// 0x02B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151080 ];

		return pClassPointer;
	};

	void FlashLog ( );
	bool EscKeyFunction ( );
	void OnCloseMovie ( );
	void ReqHelpInfo ( );
	void OnResGetTeamRoomName ( struct FString RoomName, struct FString reserved );
	void OnRequestBindRoomName ( struct FString strRoomID, struct FString strSubRoomID, struct FString strLastRoomID );
	void ReqEnterTeamQTalkRoom ( );
	void ReqBindQTalkPanel ( struct FString strUin, int Index );
	bool EnterKeyFunction ( );
	void OnNtfChangeMemberName ( struct FString SingleUin, struct FString SingleNickName, struct FString OldNickName );
	void UpdateNickName ( struct FString NewPlayerName );
	bool DoNothing ( );
	void ChangeChatToTeam ( );
	void ShowTipMessage ( struct FString MessageName, TArray< struct FString > ReplaceNames );
	void ShowCurPage ( struct FString SystemModule, int CurPageIndex, int PageToal );
	void EnableInput ( unsigned long bInPut );
	void ReqChangePage ( struct FString ModuleName, int PageIndex );
	void QuitTeamEnterLobby ( );
	void OpenInputDialog ( struct FString CommandString );
	void OnShiftPropInWareHouse ( int nIndex );
	void OnDrawPropInWareHouse ( int nIndex );
	void OnSetWareHouseUseRight ( int nWareHouseIndex, unsigned char PostValue );
	void OnShowWareHouseDetailByPage ( );
	void OnShowTeamShopUI ( );
	void OnWareHouseDetailBtnClicked ( int nIndex );
	void OnUseRecordBtnClicked ( );
	void OnTeamShopBtnClicked ( );
	void UpdateWareHouseUnLockedInfo ( unsigned long bInitUI );
	void OnWareHouseCheckBtnClicked ( );
	void OnUpdateWarehouseManagementPanel ( );
	void OnViewDataError ( int ErrorId, struct FString ErrorContent );
	void OnViewDataChanged ( unsigned char nViewDataType, class UJsonObject* Extra );
	void OnWarehouseManagementBtnClicked ( );
	bool OnCallBackInputGagPlayer ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnGagPlayer ( );
	void OnEnforceOffline ( );
	bool OnCallBackInputStopAccount ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnStopAccount ( );
	void SetCardData ( struct FPlayerCardInfo CardInfo );
	void OnGetCardInfoComplete ( int Result, struct FString* Uin, struct FPlayerCardInfo* CardInfo, struct FString* ClanName );
	void GetPlayerCardInfo ( int Index, unsigned long bTeamLeader );
	void ReqOpenRightClickMenu ( int Index, unsigned long bTeamLeader );
	void OnChangeTeamMemberGroup ( int MemberIndex, unsigned char MemberGroupId );
	void OnResChangeTeamMemberInOtherGroup ( int ErrorCode, struct FString MemberUin, struct FString MemberName, unsigned char TeamMemberGroupId, unsigned long bResMessage );
	void OnSuccChangeTeamMemberGroup ( struct FString MemberUin, unsigned char TeamMemberGroupId );
	void UpdateMemberGroupList ( );
	void OnResChangeTeamMemberGroupInfo ( int ErrorCode, struct FString TeamMemberGroupName, int TeamMemberGroupIndex );
	void OnModifyMemberGroupName ( int Index );
	void OnResGetTeamMemberGroupList ( int ErrorCode );
	void OnResCreateNewTeamMemberGroup ( int ErrorCode, struct FString TeamMemberGroupName );
	void OnResDismissTeamMemberGroup ( int ErrorCode, struct FString TeamMemberGroupName );
	bool OnConfirmDeleteMemberGroup ( );
	void OnReqDeleteMemberGroup ( int nIndex );
	void OnReqAddNewMemberGroup ( );
	void OnMatchGroupListGoPage ( int Index );
	void OnMatchGroupListNextPage ( );
	void OnMatchGroupListPrePage ( );
	void OnReqGetOtherTeamGroupInfo ( int Index );
	void OnMyTeamGroupBtnClicked ( );
	void OnTeamMatchBtnClicked ( );
	void ResSetBadgePacked ( TArray< struct FPackedBadgeInfo > PackedArray );
	void ReqOpenBadgePanel ( );
	void ReqBanCommons ( unsigned char bCancelBan, int Index );
	void ReqChatP2PTeamLeader ( );
	void ReqTeamLeaveMessage ( );
	void ReqChatP2P ( int Index );
	void ShowRankTeamList ( int CurPage, int MaxPage, TArray< struct FRankTeamInfo > TeamArray, struct FString SearchTeamName );
	void ReqLookMyTeamRank ( );
	void ReqLookTeamInfo ( int TeamSelectedIndex, struct FString ModelName );
	void ReqShowMyTeam ( );
	void ReqShowMemberList ( );
	void ReqUpdateRankCurPage ( );
	void ReqGetRankTeamList ( unsigned char RankScaleType );
	void OnResTeamIntroduction ( int ErrorCode, struct FString IntroductionContent );
	void ReqChangeTeamIntroduction ( );
	void ReqDeleteLeaveMessage ( unsigned char Index );
	void ReqWriteLeaveMessae ( );
	void ReqSetBulletin ( unsigned char Index );
	void OnUpdateBulletin ( TArray< struct FString > BulletinList );
	void OnResGetBulletin ( int ErrorCode, unsigned char BulletinCount, TArray< struct FString > BulletinList );
	void ReqGetTeamNews ( );
	void ReqGetLeaveMessage ( );
	void ReqGetBulletin ( );
	void OnPlayerInfoInApplyList ( int PlayerIndex );
	void OnAddFriendInApplyList ( int PlayerIndex );
	void ReqNotifyBeMergedResult ( struct FString SafeCode, unsigned long bAgreeBeMerged );
	void ReqMergeTeam ( struct FString TeamName );
	void ReqCancelDissolveTeam ( struct FString SafeCode );
	void ReqExtendTeam ( int TotalMemberNum );
	void CannotExtendTheTeam ( );
	void OnShowTeamTalkUI ( );
	void OnShowComplaintList ( );
	void ReqInvitePlayerJoin ( struct FString PlayerNickNames );
	void ReqQuitTeam ( );
	void ReqAddFriendTeamLeader ( );
	void ReqDeleteFriend ( );
	void ReqAddFriend ( );
	void GetTeamLeaderPlayerInfo ( );
	void GetPlayerInfo ( );
	void ReqAppointPost ( int Index, unsigned char ChangePost );
	void CanChangeOtherPlayrPost ( );
	void ReqFireMember ( );
	void OpenReputationInfoList ( );
	void OnReqFireMember ( struct FString SafeCode );
	void ReqNtfApplyResult ( unsigned long bIsAgree );
	void ResShowApproveList ( TArray< struct FApproveInfo > ApproveArray );
	void ReqGetApproveList ( );
	void ApplyToJoinTeamSuccessful ( );
	void OnQTBtnClicked ( int Index );
	void ReqApplyToJoinTeam ( int TeamIndex );
	void UpdateMovieButton ( unsigned char MemberPost );
	void UpdateTeamLeader ( struct FString LeaderName );
	void ReqSetRecruit ( );
	void ReqSearchTeamByName ( );
	void OnMemberListSort ( int SortTypes, unsigned long bDescending );
	void ReqFilterMemberListByGroup ( int nGroupID );
	void ReqFilterMemberList ( unsigned char FilterSelectedIndex );
	void ResShowMembersList ( unsigned long bIsAll );
	void ResTeamRecruitInfoShow ( unsigned char RecruitLevel, unsigned char RecruitTypes );
	void ResShowTeamInfo ( struct FTeamSystemInfo TeamSingle, unsigned long bSelfTeam, TArray< struct FPackedBadgeInfo > PackedArray );
	void SetSearchTeamResult ( int ErrorCode );
	void OnResTeamPray ( int ErrorCode );
	void PrayBtnClicked ( );
	void ReqShowMyTeamUI ( );
	void OnNtfReputationChange ( int ChangeType, int ChangedReputation );
	void OnResGetMembersList ( int ErrorCode, int MemberCount, unsigned char bSelfIsbanSpeech, unsigned long bIsAll );
	void OnResGetDetailTeamInfo ( int ErrorCode, unsigned long bLevelChanged );
	void GetTeamInfoFailBySetTimer ( );
	void ReqShowMyTeamInfo ( unsigned long bNeedGetInfo );
	void UpdateTeamLevel ( unsigned char TeamLevel );
	void OnResCreateTeam ( int ErrorCode, struct FString* TeamName );
	void CreateTeam ( unsigned long bAvailContent );
	void OnCheckTeamName ( int ErrorCode, struct FString* TeamName );
	void OnReqCheckTeamName ( );
	void ConfirTeamName ( );
	void ReqCheckTeamName ( );
	void ReqCanCreateTeam ( );
	void ReqDetailTeamInfoByTimer ( );
	void ClearTimerGetDetailTeamInfo ( );
	void SetTimerGetDetailTeamInfo ( );
	void OnShowFreezeTime ( );
	void OnInitalMyTeamListUI ( );
	void OnInitalization ( );
	void OnNtfUpdatePlayerProperty ( unsigned long bUpdatePlayerInfo, unsigned long bDeleteProp, int UpdateReason, int UpdateFlag, TArray< struct FNtfUpdatePlayerInfo > PlayerInfoChanges, TArray< struct FString > ItemNames, TArray< int > ItemIDs );
	void OnConfigUI ( );
	void OnLoad ( );
	void OnSetTimer ( );
	void OnClearTimer ( );
	void eventOnClose ( );
	void OnClearData ( );
	void eventOnStart ( );
	void AddDelegates ( );
};

UClass* UGfxMovie_TeamRoom::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_TeamGroup
// 0x0040 (0x007C - 0x003C)
class UTGUI_TeamGroup : public UObject
{
public:
	class UTGOnlineTeamGame*                           OnlineTeamGame;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	class UTGTeamMatchController*                      TeamMatchController;                              		// 0x0040 (0x0004) [0x0000000000000000]              
	class UGfxMovie_TeamRoom*                          OwnerMovie;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                SelfGroupId;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                CurPageIndex;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MaxPageIndex;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< struct FTeamMatchGroupSimpleInfo >         CurGroupInfoList;                                 		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniquePropId                               ReqTeamId;                                        		// 0x0060 (0x0010) [0x0000000000000000]              
	int                                                ReqTeamGroupId;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                ReqTeamGroupIndex;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                CurSelfGroupIndex;                                		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151107 ];

		return pClassPointer;
	};

	void OnResGetTeamMatchRecord ( int ErrorCode, unsigned long bSelfGroup, struct FUniquePropId ResTeamId, int ResTeamGroupId, struct FTeamMatchGroupRecordInfo TMRecordInfo );
	void OnResGetTeamGroupInfo ( int ErrorCode, unsigned long bTempGroup, unsigned long bSelfGroup, struct FTeamMatchGroupInfo TeamGroup );
	void OnReqGetOtherTeamGroupInfo ( int Index );
	void OnReqGetSelfTeamGroup ( );
	void OnMatchGroupListGoPage ( int Index );
	void OnMatchGroupListNextPage ( );
	void OnMatchGroupListPrePage ( );
	void UpdateGroupList ( );
	void OnResGetTeamGroupList ( int ErrorCode, TArray< struct FTeamMatchGroupSimpleInfo > GroupInfoList );
	void OnTeamMatchBtnClicked ( );
	void UnInitalization ( );
	void OnInitalization ( );
};

UClass* UTGUI_TeamGroup::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_TeamManageList
// 0x001C (0x0058 - 0x003C)
class UTGUI_TeamManageList : public UObject
{
public:
	int                                                ApprovePageIndex;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                ApprovePageIndex_Max;                             		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	class UGfxMovie_TeamRoom*                          OwnerMovie;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< struct FApproveInfo >                      ApproveList;                                      		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151109 ];

		return pClassPointer;
	};

	void ReqNotifyBeMergedResult ( struct FString SafeCode, unsigned long bAgreeBeMerged );
	void ReqMergeTeam ( struct FString TeamName );
	void ReqCancelDissolveTeam ( struct FString SafeCode );
	void OnAddFriendInApplyList ( int PlayerIndex );
	void OnPlayerInfoInApplyList ( int PlayerIndex );
	void ReqNtfApplyResult ( unsigned long bIsAgree );
	void ShowCurPageApproveData ( );
	TArray< struct FApproveInfo > GetCurPageApproveData ( );
	void ResShowApproveList ( TArray< struct FApproveInfo > ApproveArray );
	void ReqGetApproveList ( );
	void ReqPublishRecruit ( unsigned long bPublish );
	void OnResApproveList ( int ErrorCode, int ListCount, TArray< struct FApproveInfo > ApproveArray );
	void UnInitalization ( );
	void OnInitalization ( );
};

UClass* UTGUI_TeamManageList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_TeamMemberList
// 0x005C (0x0098 - 0x003C)
class UTGUI_TeamMemberList : public UObject
{
public:
	TArray< struct FTeamMember >                       TeamMemberArray;                                  		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTeamMember >                       AllTeamMemberArray;                               		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MemberPageIndex;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                MemberPageIndex_Max;                              		// 0x0058 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGfxMovie_TeamRoom*                          OwnerMovie;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurMemberListSortType;                            		// 0x0068 (0x0001) [0x0000000000000000]              
	unsigned char                                      MemberFilterType;                                 		// 0x0069 (0x0001) [0x0000000000000000]              
	unsigned long                                      bDescending : 1;                                  		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMemberFilterByGroup : 1;                         		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                MemberFilterByGroupId;                            		// 0x0070 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           RankPlayerUins;                                   		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurPlayerUin;                                     		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __UpdateQTalkUserList__Delegate;                  		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151111 ];

		return pClassPointer;
	};

	void OnSortComplaintData ( TArray< struct FComplaintPlayerInfo >* ComplaintArray, TArray< struct FString >* OutUins, TArray< struct FString >* OutNames, TArray< int >* OutTimes );
	void OnShowComplaintList ( );
	void OnChangeDescendingType ( );
	void OnSortMemberListByPost_ByHeap ( TArray< struct FTeamMember >* CurMemberList );
	void CreateHeapByPost ( int IndexT, int IndexW, TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByPost_ByBubble ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByPost ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByPlayerName_ByHeap ( TArray< struct FTeamMember >* CurMemberList );
	void CreateHeapByPlayerName ( int IndexT, int IndexW, TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByPlayerName_ByBubble ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByPlayerName ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByContribution_ByHeap ( TArray< struct FTeamMember >* CurMemberList );
	void CreateHeapByContribution ( int IndexT, int IndexW, TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByContribution_ByBubble ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByContribution ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByTime_OffLine_ByHeap ( TArray< struct FTeamMember >* CurMemberList );
	void CreateHeapByTime_OffLine ( int IndexT, int IndexW, TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByTime_OffLine_ByBubble ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByTime_OffLine ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberListByTime ( TArray< struct FTeamMember >* CurMemberList );
	void OnSortMemberList ( );
	void OnSuccChangeTeamMemberGroup ( struct FString MemberUin, unsigned char TeamMemberGroupId, struct FString TeamMemberGroupName );
	bool GetMemberInfo ( int Index, struct FTeamMember* MemberObjInfo );
	void UpdateSelfReputation ( );
	void ReqBanCommons ( unsigned char bCancelBan, int Index );
	void ReqChatP2P ( int Index );
	void ReqExtendTeam ( int TotalMemberNum );
	bool OnCallBackConfrimQuitTeam ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void ReqQuitTeam ( );
	bool OnDeleteFriend_Confirm ( );
	void ReqDeleteFriend ( );
	void ReqAddFriend ( );
	void GetPlayerInfo ( );
	void ReqAppointPost ( int Index, unsigned char ChangePost );
	void CanChangeOtherPlayrPost ( );
	bool OnCallBackConfrimFireMember ( struct FString NewString, struct FString SecondNewString, unsigned long bFirstRadioBtnSelected );
	void OnResFireMember ( int ErrorCode, struct FString FiringUin, struct FString FiringName, int Count );
	void OnReqFireMember ( struct FString SafeCode );
	void ReqFireMember ( );
	struct FString GetTeamMemberGroupName ( int iMemberGroupId );
	void UpdateTeamScaleInfo ( );
	void ShowCurPageMemberArray ( unsigned long bNeedGetPlayerRankInfo );
	TArray< struct FTeamMember > GetCurPageMemberArray ( int PageIndex );
	void OnFilterMemberList ( );
	void ReqFilterMemberList ( int FilterSelectedIndex );
	void ReqFilterMemberListByGroup ( int nGroupID );
	void OnUpdateAllMemberList ( );
	void ResShowMembersList ( unsigned long bIsAll );
	void OnClearTimer ( );
	void OnCloseLoadingUI ( );
	void OnShowPlayerRanks ( unsigned char SystemTypes, TArray< struct FString > PlayerUins, TArray< int > PlayerExps );
	void OnNtfChangeMemberName ( struct FString PlayerUin, struct FString PlayerNickName );
	void UnInitalization ( );
	void OnInitalization ( );
	void UpdateQTalkUserList ( TArray< struct FGroupData > arrayGroupData );
};

UClass* UTGUI_TeamMemberList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_TeamTopRankList
// 0x0039 (0x0075 - 0x003C)
class UTGUI_TeamTopRankList : public UObject
{
public:
	int                                                TeamRankPageIndex;                                		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                TeamRankPageIndex_Max;                            		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     TeamNameSearch;                                   		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	class UGfxMovie_TeamRoom*                          OwnerMovie;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FTeamRankInfo_UI >                  RankTeamArray_UI;                                 		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUniquePropId >                     HasReqJoinTeamArary;                              		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurTeamRankScaleType;                             		// 0x0074 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151113 ];

		return pClassPointer;
	};

	void OnQTBtnClicked ( int TeamIndex );
	void ReqApplyToJoinTeam ( int TeamIndex );
	void ShowRankTeamList ( int CurPage, int MaxPage, TArray< struct FRankTeamInfo > TeamArray, struct FString SearchTeamName );
	void ReqLookMyTeamRank ( );
	void ReqLookTeamInfo ( int TeamSelectedIndex );
	void ReqUpdateRankCurPage ( );
	void ReqGetRankTeamList ( unsigned char RankScaleType );
	void UnInitalization ( );
	void OnInitalization ( );
};

UClass* UTGUI_TeamTopRankList::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_TeamLeftInfo
// 0x00D0 (0x010C - 0x003C)
class UTGUI_TeamLeftInfo : public UObject
{
public:
	struct FString                                     DefaultTeamIntrodution;                           		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DefaultTeamNotice;                                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTGOnlineTeamRoom*                           OnlineTeamRoom;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FTeamSystemInfo                             SelfTeam;                                         		// 0x0058 (0x0070) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGfxMovie_TeamRoom*                          OwnerMovie;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowSelfTeam : 1;                                		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FLeaveMessage >                     LeaveMessageList;                                 		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTeamNews >                         CurNewsList;                                      		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamLeaderUin;                                    		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TeamLeaderName;                                   		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PrayHelpTip;                                      		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151115 ];

		return pClassPointer;
	};

	void ResSetBadgePacked ( TArray< struct FPackedBadgeInfo > PackedArray );
	void UpdateAllScoreBars ( struct FTeamSystemInfo TeamSingle );
	void UpdateReputationBar ( );
	void ReqSetBulletin ( unsigned char Index );
	void OnUpdateTeamNews ( );
	void OnUpdateBulletin ( TArray< struct FString > BulletinList );
	void OnResGetTeamNews ( int ErrorCode, unsigned char CountCur, TArray< struct FTeamNews > NewsList );
	void ReqGetTeamNews ( );
	void ReqGetBulletin ( );
	void UpdateTeamName ( struct FString TeamName );
	void UpdateTeamLeader ( struct FString LeaderName );
	void ResTeamRecruitInfoShow ( unsigned char RecruitLevel, unsigned char RecruitTypes );
	void ResShowTeamInfo ( struct FTeamSystemInfo TeamSingle, unsigned long bSelfTeam, TArray< struct FPackedBadgeInfo > PackedArray );
	void UpdateTeamLevel ( unsigned char TeamLevel );
	void UpdateTeamLeaderInfo ( );
	void ShowTeamInfoUI ( struct FTeamSystemInfo TeamSingle, unsigned long bSelfTeam, TArray< struct FPackedBadgeInfo > PackedArray );
	void UpdatePrayInfo ( );
	void UnInitalization ( );
	void OnInitalization ( );
};

UClass* UTGUI_TeamLeftInfo::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TMPrizeIntroduce
// 0x0020 (0x0244 - 0x0224)
class UGfxMovie_TMPrizeIntroduce : public UGfxMovie_TGBase
{
public:
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct UGfxMovie_TMPrizeIntroduce_FThingsListData > TGPrize_Tab1_ThingsArray;                         		// 0x0228 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct UGfxMovie_TMPrizeIntroduce_FThingsListData > TGPrize_Tab2_ThingsArray;                         		// 0x0234 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      TGCollectDisplay : 1;                             		// 0x0240 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151735 ];

		return pClassPointer;
	};

	void OnShowIntroduce ( );
	void OnQuit ( );
	TArray< struct FString > GetEncouragementThingsSource ( TArray< struct FThingsInfo > thingsList, TArray< struct FString >* ThingsName );
	void AddThingsList ( TArray< struct FThingsInfo > thingsList, int nScoreValue, TArray< struct UGfxMovie_TMPrizeIntroduce_FThingsItem >* stThingsItem );
	TArray< struct UGfxMovie_TMPrizeIntroduce_FThingsItem > GetThingsSourceByMapId ( int nMapId );
	void OnSelectTab ( int gIndex );
	void OnLoad ( );
	void AS_Log ( struct FString txtLog );
	bool EnterKeyFunction ( );
	bool EscKeyFunction ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* UGfxMovie_TMPrizeIntroduce::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialKeyBoard
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_TutorialKeyBoard : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151912 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_TutorialKeyBoard::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialKeyBoard_A
// 0x003C (0x0260 - 0x0224)
class UGfxMovie_TutorialKeyBoard_A : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151914 ];

		return pClassPointer;
	};

	void SetMoviePathByScreenResolutionScale ( );
};

UClass* UGfxMovie_TutorialKeyBoard_A::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialKeyBoard_D
// 0x003C (0x0260 - 0x0224)
class UGfxMovie_TutorialKeyBoard_D : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151924 ];

		return pClassPointer;
	};

	void SetMoviePathByScreenResolutionScale ( );
};

UClass* UGfxMovie_TutorialKeyBoard_D::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialKeyBoard_LeftShift
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_TutorialKeyBoard_LeftShift : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151934 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_TutorialKeyBoard_LeftShift::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialKeyBoard_S
// 0x003C (0x0260 - 0x0224)
class UGfxMovie_TutorialKeyBoard_S : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151936 ];

		return pClassPointer;
	};

	void SetMoviePathByScreenResolutionScale ( );
};

UClass* UGfxMovie_TutorialKeyBoard_S::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialKeyBoard_SpaceBar
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_TutorialKeyBoard_SpaceBar : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151946 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_TutorialKeyBoard_SpaceBar::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialKeyBoard_W
// 0x003C (0x0260 - 0x0224)
class UGfxMovie_TutorialKeyBoard_W : public UGfxMovie_TGBase
{
public:
	struct FString                                     MoviePath_Standard;                               		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x768;                               		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1280x1024;                              		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1366x768;                               		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MoviePath_1440x900;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151948 ];

		return pClassPointer;
	};

	void SetMoviePathByScreenResolutionScale ( );
	bool eventStart ( unsigned long StartPaused );
};

UClass* UGfxMovie_TutorialKeyBoard_W::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialKeyBoard_WSAD
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_TutorialKeyBoard_WSAD : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151961 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_TutorialKeyBoard_WSAD::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialMouseLeftClick
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_TutorialMouseLeftClick : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151963 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_TutorialMouseLeftClick::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_TutorialMouseRightClick
// 0x0000 (0x0224 - 0x0224)
class UGfxMovie_TutorialMouseRightClick : public UGfxMovie_TGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 151965 ];

		return pClassPointer;
	};

};

UClass* UGfxMovie_TutorialMouseRightClick::pClassPointer = NULL;

// Class TGameGfxUI.GfxMovie_WebWindow
// 0x004C (0x0270 - 0x0224)
class UGfxMovie_WebWindow : public UGfxMovie_TGBase
{
public:
	class UTGWebBrowser*                               WebBrowser;                                       		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URL;                                              		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShowControlBar : 1;                              		// 0x0240 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowBangLoading : 1;                             		// 0x0240 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     TitleIconPath;                                    		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             NotifyWebWindowClosed;                            		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ContentWidth;                                     		// 0x025C (0x0004) [0x0000000000000000]              
	int                                                ContentHeight;                                    		// 0x0260 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnWebWindowClosed__Delegate;                    		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 152086 ];

		return pClassPointer;
	};

	bool EscKeyFunction ( );
	bool EnterKeyFunction ( );
	void OnWebBrowserNotify ( int NotificationType );
	void CloseWindow ( );
	void OnStopBtnClick ( );
	void OnRefreshBtnClick ( );
	void OnForwardBtnClick ( );
	void OnBackBtnClick ( );
	void OnLoad ( );
	void eventOnClose ( );
	void eventOnStart ( );
	void OnWebWindowClosed ( );
};

UClass* UGfxMovie_WebWindow::pClassPointer = NULL;

// Class TGameGfxUI.TGAction_CloseMovie
// 0x0008 (0x00F0 - 0x00E8)
class UTGAction_CloseMovie : public USequenceAction
{
public:
	class UClass*                                      OpenMovieClass;                                   		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUnload : 1;                                      		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 153054 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGAction_CloseMovie::pClassPointer = NULL;

// Class TGameGfxUI.TGAction_LoginLobby
// 0x001C (0x0104 - 0x00E8)
class UTGAction_LoginLobby : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             OnLobbyButtonClicked;                             		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyButtonClicked_AS__Delegate;              		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 153060 ];

		return pClassPointer;
	};

	void eventActivated ( );
	void OnLobbyButtonClicked_AS ( );
};

UClass* UTGAction_LoginLobby::pClassPointer = NULL;

// Class TGameGfxUI.TGAction_OpenMovie
// 0x0028 (0x0110 - 0x00E8)
class UTGAction_OpenMovie : public USequenceAction
{
public:
	class UClass*                                      OpenMovieClass;                                   		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTakeFocus : 1;                                   		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x00EC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bStartPaused : 1;                                 		// 0x00EC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x00EC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x00EC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x00F0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             CaptureKeys;                                      		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             FocusIgnoreKeys;                                  		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 153068 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGAction_OpenMovie::pClassPointer = NULL;

// Class TGameGfxUI.TGAction_PreloadMovie
// 0x0005 (0x00ED - 0x00E8)
class UTGAction_PreloadMovie : public USequenceAction
{
public:
	class UClass*                                      OpenMovieClass;                                   		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x00EC (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 153085 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGAction_PreloadMovie::pClassPointer = NULL;

// Class TGameGfxUI.TGAction_PreloadMovieList
// 0x0011 (0x00F9 - 0x00E8)
class UTGAction_PreloadMovieList : public USequenceAction
{
public:
	TArray< class UClass* >                            OpenMovieList;                                    		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIsOnlyLoadSwfMovie : 1;                          		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x00F8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 153092 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UTGAction_PreloadMovieList::pClassPointer = NULL;

// Class TGameGfxUI.TGameAction_Login
// 0x0060 (0x0148 - 0x00E8)
class UTGameAction_Login : public USequenceAction
{
public:
	struct FString                                     UserName;                                         		// 0x00E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x00F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             LoginSuccess;                                     		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             LoginFailed;                                      		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             LoginNoRole;                                      		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x0124 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginSuccess__Delegate;                       		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginNoRole__Delegate;                        		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 153102 ];

		return pClassPointer;
	};

	void OnCreateRoleReturn ( int ErrorCode, struct FString* ErrorDesc );
	void LoginFailedEx ( struct FString Error );
	void OpenCreateRoleUI ( );
	void LoginNoRoleEx ( int ErrorCode );
	void LoginSuccessEx ( );
	void OnLoginReturn ( int ErrorCode, struct FString* ErrorDesc );
	void eventActivated ( );
	void OnLoginNoRole ( );
	void OnLoginSuccess ( );
	void OnLoginFailed ( struct FString Error );
};

UClass* UTGameAction_Login::pClassPointer = NULL;

// Class TGameGfxUI.TGUI_PlaymateList
// 0x0014 (0x0050 - 0x003C)
class UTGUI_PlaymateList : public UObject
{
public:
	class UGfxMovie_GeneralPlayerList*                 OwnerMovie;                                       		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTGOnlineClient*                             OnlineClient;                                     		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FRecentPlaymateInfo >               PlaymateList;                                     		// 0x0044 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 164356 ];

		return pClassPointer;
	};

	void Cleanup ( );
	void UpdatePlaymateList ( );
	void SortPlaymateList ( );
	void FilterPlaymateList ( );
	void GetPlaymateList ( );
	void OnInitialized ( );
};

UClass* UTGUI_PlaymateList::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif