#pragma once
#include <cstdint>

namespace Utilities
{
	////https://www.vergiliusproject.com/kernels/x64/Windows%2010%20%7C%202016/2009%2020H2%20(October%202020%20Update)/_EPROCESS
	uintptr_t pSystemBaseOffset = 0x0;
	uintptr_t pImageFileNameOffset = 0x5A8; // EPROCESS->
	uintptr_t pUniqueProcessIdOffset = 0x440; // EPROCESS->
	uintptr_t pSectionBaseOffset = 0x520; // EPROCESS->
	uintptr_t pActiveProcessLinkOffset = 0x448; // EPROCESS->
	uintptr_t pPEBOffset = 0x550; // EPROCESS ->
}

namespace offsets
{
	uintptr_t client_render_targets = 0x1fdeea0;
	uintptr_t ibase_client_dll = 0x19e1770;
	uintptr_t iclient_entity_list = 0x1fde6b0;
	uintptr_t cprediction = 0x1fde6b8;
	uintptr_t iv_model_render = 0x128b080;
	uintptr_t vgui_system = 0x1f98620;
	uintptr_t iv_render_view = 0x7519718;
	uintptr_t iv_debug_overlay = 0x75b48a0;
	uintptr_t iv_model_info_client = 0x7519728;
	uintptr_t iv_engine_client = 0x12799d8;
	uintptr_t iv_engine_trace = 0x7519730;
	uintptr_t inetwork_string_table = 0x7519740;
	uintptr_t cnetwork_u64_table = 0x7519748;
	uintptr_t cinput = 0x1d94ea0;
	uintptr_t cengine = 0x1292410;
	uintptr_t iswapchain = 0xb911e88;
	uintptr_t cl_entitylist = 0x19fbc18;
	uintptr_t local_entity_handle = 0x127d8bc;
	uintptr_t local_player = 0x1dac9c8;
	uintptr_t global_vars = 0x135c850;
	uintptr_t name_list = 0xb9f7e40;
	uintptr_t view_render = 0x1fdffb0;
	uintptr_t view_matrix = 0x602381;
	uintptr_t client_state = 0x135cbd0;
	uintptr_t sign_on_state = 0x135cc68;
	uintptr_t level_name = 0x135cd80;
	uintptr_t glow_enable = 0x9a1;
	uintptr_t glow_type = 0x2c0;
	uintptr_t glow_color = 0x1d0;

	namespace Classes
	{
		// Inheritance: 
		namespace CPlayer
		{
			constexpr auto m_passives = 0x0; // Array
			constexpr auto m_vecAbsOrigin = 0x4; // Vector
			constexpr auto m_fFlags = 0x98; // Integer
			constexpr auto m_hGroundEntity = 0x434; // Integer
			constexpr auto m_iHealth = 0x438; // Integer
			constexpr auto m_flMaxspeed = 0x43c; // Float
			constexpr auto m_iMaxHealth = 0x578; // Integer
			constexpr auto m_lifeState = 0x798; // Integer
			constexpr auto m_decalIndex = 0xeb8; // Integer
			constexpr auto m_titanSoul = 0x1b48; // Integer
			constexpr auto m_bZooming = 0x1c51; // Integer
			constexpr auto m_zoomBaseFrac = 0x1c58; // Float
			constexpr auto m_flHullHeight = 0x210c; // Float
			constexpr auto m_angEyeAnglesx = 0x2110; // Float
			constexpr auto m_angEyeAnglesy = 0x2114; // Float
			constexpr auto m_traversalAnimProgress = 0x211c; // Float
			constexpr auto m_sprintTiltFrac = 0x2120; // Float
			constexpr auto m_ammoPoolCapacity = 0x259c; // Integer
			constexpr auto m_hasBadReputation = 0x25a0; // Integer
			constexpr auto m_hardware = 0x25a8; // Integer
			constexpr auto m_unspoofedHardware = 0x25a9; // Integer
			constexpr auto m_platformUserId = 0x25b0; // Integer64
			constexpr auto m_unSpoofedPlatformUserId = 0x25b8; // Integer64
			constexpr auto m_EadpUserId = 0x25c0; // Integer64
			constexpr auto m_crossPlayChat = 0x25c8; // Integer
			constexpr auto m_crossPlayChatFriends = 0x25c9; // Integer
			constexpr auto m_classModsActive = 0x25d0; // Integer64
			constexpr auto m_passives0 = 0x2708; // Integer64
			constexpr auto m_bleedoutState = 0x2728; // Integer
			constexpr auto m_bleedoutStartTime = 0x272c; // Float
			constexpr auto m_damageComboStartHealth = 0x28d8; // Integer
			constexpr auto m_gestureAutoKillBitfield = 0x299c; // Integer
			constexpr auto m_autoSprintForced = 0x29e0; // Integer
			constexpr auto m_fIsSprinting = 0x29e4; // Integer
			constexpr auto m_playerSettingForStickySprintForward = 0x29f2; // Integer
			constexpr auto m_playerVehicleCount = 0x2a28; // Integer
			constexpr auto m_playerVehicleDriven = 0x2a2c; // Integer
			constexpr auto m_duckState = 0x2a34; // Integer
			constexpr auto m_leanState = 0x2a38; // Integer
			constexpr auto m_canStand = 0x2a3d; // Integer
			constexpr auto m_StandHullMin = 0x2a40; // Vector
			constexpr auto m_StandHullMax = 0x2a4c; // Vector
			constexpr auto m_DuckHullMin = 0x2a58; // Vector
			constexpr auto m_DuckHullMax = 0x2a64; // Vector
			constexpr auto m_entitySyncingWithMe = 0x2a70; // Integer
			constexpr auto m_upDir = 0x2a74; // Vector
			constexpr auto m_traversalState = 0x2afc; // Integer
			constexpr auto m_traversalType = 0x2b00; // Integer
			constexpr auto m_traversalForwardDir = 0x2b2c; // Vector
			constexpr auto m_traversalRefPos = 0x2b38; // Vector
			constexpr auto m_traversalYawDelta = 0x2b64; // Float
			constexpr auto m_traversalYawPoseParameter = 0x2b68; // Integer
			constexpr auto m_wallClimbSetUp = 0x2b80; // Integer
			constexpr auto m_wallHanging = 0x2b81; // Integer
			constexpr auto m_grapplePoints = 0x2c70; // Array
			constexpr auto m_grappleVel = 0x2c78; // Vector
			constexpr auto m_grapplePoints0 = 0x2c84; // Vector
			constexpr auto m_grapplePointCount = 0x2cb4; // Integer
			constexpr auto m_grappleAttached = 0x2cb8; // Integer
			constexpr auto m_grapplePulling = 0x2cb9; // Integer
			constexpr auto m_grappleSwinging = 0x2cba; // Integer
			constexpr auto m_grappleRetracting = 0x2cbb; // Integer
			constexpr auto m_grappleForcedRetracting = 0x2cbc; // Integer
			constexpr auto m_grappleGracePeriodFinished = 0x2cbd; // Integer
			constexpr auto m_grappleUsedPower = 0x2cc0; // Float
			constexpr auto m_grappleMeleeTarget = 0x2cd4; // Integer
			constexpr auto m_grappleAutoAimTarget = 0x2cd8; // Integer
			constexpr auto m_grappleHasGoodVelocity = 0x2cdc; // Integer
			constexpr auto m_grappleSwingDetachLowSpeed = 0x2ce4; // Float
			constexpr auto m_grappleActive = 0x2d00; // Integer
			constexpr auto m_turret = 0x2d48; // Integer
			constexpr auto m_activeZipline = 0x2eac; // Integer
			constexpr auto m_ziplineValid3pWeaponLayerAnim = 0x2eb8; // Integer
			constexpr auto m_ziplineState = 0x2ebc; // Integer
			constexpr auto m_ziplineGrenadeBeginStationEntity = 0x2f54; // Integer
			constexpr auto m_ziplineGrenadeBeginStationAttachmentIndex = 0x2f58; // Integer
			constexpr auto m_isPerformingBoostAction = 0x2f99; // Integer
			constexpr auto m_lastJumpPadTouched = 0x3090; // Integer
			constexpr auto m_launchCount = 0x3098; // Integer
			constexpr auto m_useCredit = 0x3200; // Integer
			constexpr auto m_playerFlags = 0x3210; // Integer
			constexpr auto m_hasMic = 0x3218; // Integer
			constexpr auto m_inPartyChat = 0x3219; // Integer
			constexpr auto m_communicationsAutoBlocked = 0x321a; // Integer
			constexpr auto m_playerMoveSpeedScale = 0x321c; // Float
			constexpr auto m_bShouldDrawPlayerWhileUsingViewEntity = 0x3458; // Integer
			constexpr auto m_iSpawnParity = 0x34c4; // Integer
			constexpr auto m_grappleHook = 0x3668; // Integer
			constexpr auto m_petTitan = 0x366c; // Integer
			constexpr auto m_xp = 0x3694; // Integer
			constexpr auto m_skill_mu = 0x369c; // Float
			constexpr auto m_bHasMatchAdminRole = 0x36a0; // Integer
			constexpr auto m_ubEFNoInterpParity = 0x3fc8; // Integer
			constexpr auto m_hColorCorrectionCtrl = 0x3fcc; // Integer
			constexpr auto m_title = 0x3ff0; // String
			constexpr auto m_nPlayerCond = 0x4328; // Integer
			constexpr auto m_pilotClassIndex = 0x4374; // Integer
			constexpr auto m_pilotClassActivityModifier = 0x4378; // Integer
			constexpr auto m_playerScriptNetDataGlobal = 0x4600; // Integer
			constexpr auto m_helmetType = 0x4608; // Integer
			constexpr auto m_armorType = 0x460c; // Integer
			constexpr auto m_controllerModeActive = 0x4614; // Integer
			constexpr auto m_skydiveForwardPoseValueTarget = 0x4630; // Float
			constexpr auto m_skydiveSidePoseValueTarget = 0x463c; // Float
			constexpr auto m_skydiveState = 0x4664; // Integer
			constexpr auto m_skydiveDiveAngle = 0x467c; // Float
			constexpr auto m_skydiveIsDiving = 0x4680; // Integer
			constexpr auto m_skydiveSpeed = 0x4684; // Float
			constexpr auto m_skydiveStrafeAngle = 0x4688; // Float
			constexpr auto m_skydivePlayerPitch = 0x469c; // Float
			constexpr auto m_skydivePlayerYaw = 0x46a0; // Float
			constexpr auto m_skydiveFromSkywardLaunch = 0x46dd; // Integer
			constexpr auto m_skywardLaunchState = 0x46e0; // Integer
			constexpr auto m_skywardLaunchSlowStartTime = 0x46f4; // Float
			constexpr auto m_skywardLaunchSlowEndTime = 0x46f8; // Float
			constexpr auto m_skywardLaunchFastEndTime = 0x46fc; // Float
			constexpr auto m_skywardLaunchEndTime = 0x4704; // Float
			constexpr auto m_skywardLaunchSlowSpeed = 0x470c; // Float
			constexpr auto m_skywardLaunchFastSpeed = 0x4710; // Float
			constexpr auto m_skywardOffset = 0x4714; // Vector
			constexpr auto m_skywardLaunchInterrupted = 0x4724; // Integer
			constexpr auto m_skywardLaunchFollowing = 0x4725; // Integer
			constexpr auto m_armoredLeapAirPos = 0x472c; // Vector
			constexpr auto m_armoredLeapEndPos = 0x4738; // Vector
			constexpr auto m_armoredLeapType = 0x4744; // Integer
			constexpr auto m_armoredLeapPhase = 0x4748; // Integer
			constexpr auto m_dragReviveState = 0x47b8; // Integer
			constexpr auto m_dragReviveOutroStartTime = 0x47bc; // Float
			constexpr auto m_reviveTarget = 0x47c0; // Integer
		}
	}
}

//namespace hazedumper
//{
//	DWORD32 timestamp = 1652709489;
//
//		namespace netvars
//		{
//		DWORD32 cs_gamerules_data = 0x0;
//		DWORD32 m_ArmorValue = 0x117CC;
//		DWORD32 m_Collision = 0x320;
//		DWORD32 m_CollisionGroup = 0x474;
//		DWORD32 m_Local = 0x2FCC;
//		DWORD32 m_MoveType = 0x25C;
//		DWORD32 m_OriginalOwnerXuidHigh = 0x31D4;
//		DWORD32 m_OriginalOwnerXuidLow = 0x31D0;
//		DWORD32 m_SurvivalGameRuleDecisionTypes = 0x1328;
//		DWORD32 m_SurvivalRules = 0xD00;
//		DWORD32 m_aimPunchAngle = 0x303C;
//		DWORD32 m_aimPunchAngleVel = 0x3048;
//		DWORD32 m_angEyeAnglesX = 0x117D0;
//		DWORD32 m_angEyeAnglesY = 0x117D4;
//		DWORD32 m_bBombDefused = 0x29C0;
//		DWORD32 m_bBombPlanted = 0x9A5;
//		DWORD32 m_bBombTicking = 0x2990;
//		DWORD32 m_bFreezePeriod = 0x20;
//		DWORD32 m_bGunGameImmunity = 0x9990;
//		DWORD32 m_bHasDefuser = 0x117DC;
//		DWORD32 m_bHasHelmet = 0x117C0;
//		DWORD32 m_bInReload = 0x32B5;
//		DWORD32 m_bIsDefusing = 0x997C;
//		DWORD32 m_bIsQueuedMatchmaking = 0x74;
//		DWORD32 m_bIsScoped = 0x9974;
//		DWORD32 m_bIsValveDS = 0x7C;
//		DWORD32 m_bSpotted = 0x93D;
//		DWORD32 m_bSpottedByMask = 0x980;
//		DWORD32 m_bStartedArming = 0x3400;
//		DWORD32 m_bUseCustomAutoExposureMax = 0x9D9;
//		DWORD32 m_bUseCustomAutoExposureMin = 0x9D8;
//		DWORD32 m_bUseCustomBloomScale = 0x9DA;
//		DWORD32 m_clrRender = 0x70;
//		DWORD32 m_dwBoneMatrix = 0x26A8;
//		DWORD32 m_fAccuracyPenalty = 0x3340;
//		DWORD32 m_fFlags = 0x104;
//		DWORD32 m_flC4Blow = 0x29A0;
//		DWORD32 m_flCustomAutoExposureMax = 0x9E0;
//		DWORD32 m_flCustomAutoExposureMin = 0x9DC;
//		DWORD32 m_flCustomBloomScale = 0x9E4;
//		DWORD32 m_flDefuseCountDown = 0x29BC;
//		DWORD32 m_flDefuseLength = 0x29B8;
//		DWORD32 m_flFallbackWear = 0x31E0;
//		DWORD32 m_flFlashDuration = 0x10470;
//		DWORD32 m_flFlashMaxAlpha = 0x1046C;
//		DWORD32 m_flLastBoneSetupTime = 0x2928;
//		DWORD32 m_flLowerBodyYawTarget = 0x9ADC;
//		DWORD32 m_flNextAttack = 0x2D80;
//		DWORD32 m_flNextPrimaryAttack = 0x3248;
//		DWORD32 m_flSimulationTime = 0x268;
//		DWORD32 m_flTimerLength = 0x29A4;
//		DWORD32 m_hActiveWeapon = 0x2F08;
//		DWORD32 m_hBombDefuser = 0x29C4;
//		DWORD32 m_hMyWeapons = 0x2E08;
//		DWORD32 m_hObserverTarget = 0x339C;
//		DWORD32 m_hOwner = 0x29DC;
//		DWORD32 m_hOwnerEntity = 0x14C;
//		DWORD32 m_hViewModel = 0x3308;
//		DWORD32 m_iAccountID = 0x2FD8;
//		DWORD32 m_iClip1 = 0x3274;
//		DWORD32 m_iCompetitiveRanking = 0x1A84;
//		DWORD32 m_iCompetitiveWins = 0x1B88;
//		DWORD32 m_iCrosshairId = 0x11838;
//		DWORD32 m_iDefaultFOV = 0x333C;
//		DWORD32 m_iEntityQuality = 0x2FBC;
//		DWORD32 m_iFOV = 0x31F4;
//		DWORD32 m_iFOVStart = 0x31F8;
//		DWORD32 m_iGlowIndex = 0x10488;
//		DWORD32 m_iHealth = 0x100;
//		DWORD32 m_iItemDefinitionIndex = 0x2FBA;
//		DWORD32 m_iItemIDHigh = 0x2FD0;
//		DWORD32 m_iMostRecentModelBoneCounter = 0x2690;
//		DWORD32 m_iObserverMode = 0x3388;
//		DWORD32 m_iShotsFired = 0x103E0;
//		DWORD32 m_iState = 0x3268;
//		DWORD32 m_iTeamNum = 0xF4;
//		DWORD32 m_lifeState = 0x25F;
//		DWORD32 m_nBombSite = 0x2994;
//		DWORD32 m_nFallbackPaintKit = 0x31D8;
//		DWORD32 m_nFallbackSeed = 0x31DC;
//		DWORD32 m_nFallbackStatTrak = 0x31E4;
//		DWORD32 m_nForceBone = 0x268C;
//		DWORD32 m_nTickBase = 0x3440;
//		DWORD32 m_nViewModelIndex = 0x29D0;
//		DWORD32 m_rgflCoordinateFrame = 0x444;
//		DWORD32 m_szCustomName = 0x304C;
//		DWORD32 m_szLastPlaceName = 0x35C4;
//		DWORD32 m_thirdPersonViewAngles = 0x31E8;
//		DWORD32 m_vecOrigin = 0x138;
//		DWORD32 m_vecVelocity = 0x114;
//		DWORD32 m_vecViewOffset = 0x108;
//		DWORD32 m_viewPunchAngle = 0x3030;
//		DWORD32 m_zoomLevel = 0x33E0;
//	}
//
//		namespace signatures
//		{
//		DWORD32 anim_overlays = 0x2990;
//		DWORD32 clientstate_choked_commands = 0x4D30;
//		DWORD32 clientstate_delta_ticks = 0x174;
//		DWORD32 clientstate_last_outgoing_command = 0x4D2C;
//		DWORD32 clientstate_net_channel = 0x9C;
//		DWORD32 convar_name_hash_table = 0x2F0F8;
//		DWORD32 dwClientState = 0x58CFBC;
//		DWORD32 dwClientState_GetLocalPlayer = 0x180;
//		DWORD32 dwClientState_IsHLTV = 0x4D48;
//		DWORD32 dwClientState_Map = 0x28C;
//		DWORD32 dwClientState_MapDirectory = 0x188;
//		DWORD32 dwClientState_MaxPlayer = 0x388;
//		DWORD32 dwClientState_PlayerInfo = 0x52C0;
//		DWORD32 dwClientState_State = 0x108;
//		DWORD32 dwClientState_ViewAngles = 0x4D90;
//		DWORD32 dwEntityList = 0x4DD344C;
//		DWORD32 dwForceAttack = 0x32038F4;
//		DWORD32 dwForceAttack2 = 0x3203900;
//		DWORD32 dwForceBackward = 0x3203924;
//		DWORD32 dwForceForward = 0x3203918;
//		DWORD32 dwForceJump = 0x527D360;
//		DWORD32 dwForceLeft = 0x3203930;
//		DWORD32 dwForceRight = 0x320393C;
//		DWORD32 dwGameDir = 0x62B900;
//		DWORD32 dwGameRulesProxy = 0x52F0B8C;
//		DWORD32 dwGetAllClasses = 0xDE177C;
//		DWORD32 dwGlobalVars = 0x58CCC0;
//		DWORD32 dwGlowObjectManager = 0x531C058;
//		DWORD32 dwInput = 0x5224A20;
//		DWORD32 dwInterfaceLinkList = 0x9698B4;
//		DWORD32 dwLocalPlayer = 0xDB75DC;
//		DWORD32 dwMouseEnable = 0xDBD2E8;
//		DWORD32 dwMouseEnablePtr = 0xDBD2B8;
//		DWORD32 dwPlayerResource = 0x3201CB0;
//		DWORD32 dwRadarBase = 0x52081C4;
//		DWORD32 dwSensitivity = 0xDBD184;
//		DWORD32 dwSensitivityPtr = 0xDBD158;
//		DWORD32 dwSetClanTag = 0x8A3A0;
//		DWORD32 dwViewMatrix = 0x4DC4D64;
//		DWORD32 dwWeaponTable = 0x52254E4;
//		DWORD32 dwWeaponTableIndex = 0x326C;
//		DWORD32 dwYawPtr = 0xDBCF48;
//		DWORD32 dwZoomSensitivityRatioPtr = 0xDC31B0;
//		DWORD32 dwbSendPackets = 0xD96A2;
//		DWORD32 dwppDirect3DDevice9 = 0xA5050;
//		DWORD32 find_hud_element = 0x2D655200;
//		DWORD32 force_update_spectator_glow = 0x3BB99A;
//		DWORD32 interface_engine_cvar = 0x3E9EC;
//		DWORD32 is_c4_owner = 0x3C8A10;
//		DWORD32 m_bDormant = 0xED;
//		DWORD32 m_flSpawnTime = 0x103C0;
//		DWORD32 m_pStudioHdr = 0x2950;
//		DWORD32 m_pitchClassPtr = 0x5208460;
//		DWORD32 m_yawClassPtr = 0xDBCF48;
//		DWORD32 model_ambient_min = 0x590034;
//		DWORD32 set_abs_angles = 0x1E5570;
//		DWORD32 set_abs_origin = 0x1E53B0;
//	}
//} // namespace hazedumper

// dayz
//void UpdateList(IKernel Driver)
//{
//	while (true)
//	{
//		// stores all data
//		std::vector<player_t> tmp{};
//
//		uint64_t NearTableSize = 0;
//		Driver.Read(globals.World + 0xEA8 + 0x08, &NearTableSize); //<uint32_t>
//
//		uint64_t FarTableSize = 0;
//		Driver.Read(globals.World + 0xFF0 + 0x08, &FarTableSize);
//
//		for (int i = 0; i < NearTableSize; i++)
//		{
//			uint64_t EntityTable = 0;
//			Driver.Read(globals.World + 0xEA8, &EntityTable);
//			if (!EntityTable) continue;
//
//			uint64_t Entity = 0;
//			Driver.Read(EntityTable + (i * 0x8), &Entity);
//			if (!Entity) continue;
//
//			// checking if player even networked
//			uintptr_t networkId = 0;
//			Driver.Read(Entity + 0x634, &networkId);
//			if (networkId == 0) continue;
//
//			player_t Player{};
//			Player.NetworkID = networkId;
//			Player.TableEntry = EntityTable;
//			Player.EntityPtr = Entity;
//
//			std::cout << " networkId: " << networkId << std::endl;
//
//			// adds info to the vector
//			tmp.push_back(Player);
//		}
//
//		for (int i = 0; i < FarTableSize; i++)
//		{
//			uint64_t EntityTable = 0;
//			Driver.Read(globals.World + 0xFF0, &EntityTable);
//			if (!EntityTable) continue;
//
//			uint64_t Entity = 0;
//			Driver.Read(EntityTable + (i * 0x8), &Entity);
//			if (!Entity) continue;
//
//			uintptr_t networkId = 0;
//			Driver.Read(Entity + 0x634, &networkId);
//			if (networkId == 0) continue;
//
//			player_t Player{};
//			Player.NetworkID = networkId;
//			Player.TableEntry = EntityTable;
//			Player.EntityPtr = Entity;
//			tmp.push_back(Player);
//		}
//		entities = tmp;
//		//std::this_thread::sleep_for(std::chrono::milliseconds(100));
//		Sleep(100);
//	}
//}
