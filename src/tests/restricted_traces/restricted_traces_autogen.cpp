// GENERATED FILE - DO NOT EDIT.
// Generated by gen_restricted_traces.py using data from restricted_traces.json
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// restricted_traces_autogen: Types and enumerations for trace tests.

#include "restricted_traces_autogen.h"

#include "common/PackedEnums.h"

#include "angry_birds_2_1500/angry_birds_2_1500_capture_context1.h"
#include "arena_of_valor/arena_of_valor_capture_context1.h"
#include "asphalt_8/asphalt_8_capture_context2.h"
#include "brawl_stars/brawl_stars_capture_context1.h"
#include "candy_crush_500/candy_crush_500_capture_context1.h"
#include "clash_of_clans/clash_of_clans_capture_context1.h"
#include "cod_mobile/cod_mobile_capture_context1.h"
#include "dragon_ball_legends/dragon_ball_legends_capture_context1.h"
#include "efootball_pes_2021/efootball_pes_2021_capture_context7.h"
#include "egypt_1500/egypt_1500_capture_context1.h"
#include "eight_ball_pool/eight_ball_pool_capture_context2.h"
#include "fate_grand_order/fate_grand_order_capture_context1.h"
#include "fifa_mobile/fifa_mobile_capture_context2.h"
#include "free_fire/free_fire_capture_context1.h"
#include "google_maps/google_maps_capture_context3.h"
#include "hearthstone/hearthstone_capture_context2.h"
#include "kartrider_rush/kartrider_rush_capture_context1.h"
#include "klondike_adventures/klondike_adventures_capture_context2.h"
#include "lego_legacy/lego_legacy_capture_context2.h"
#include "magic_tiles_3/magic_tiles_3_capture_context2.h"
#include "manhattan_10/manhattan_10_capture_context1.h"
#include "manhattan_31/manhattan_31_capture_context6.h"
#include "marvel_contest_of_champions/marvel_contest_of_champions_capture_context1.h"
#include "minecraft/minecraft_capture_context2.h"
#include "mobile_legends/mobile_legends_capture_context1.h"
#include "nba2k20_800/nba2k20_800_capture_context1.h"
#include "one_punch_man/one_punch_man_capture_context3.h"
#include "pubg_mobile_lite/pubg_mobile_lite_capture_context1.h"
#include "raid_shadow_legends/raid_shadow_legends_capture_context2.h"
#include "real_commando_secret_mission/real_commando_secret_mission_capture_context1.h"
#include "real_gangster_crime/real_gangster_crime_capture_context3.h"
#include "saint_seiya_awakening/saint_seiya_awakening_capture_context2.h"
#include "subway_surfers/subway_surfers_capture_context2.h"
#include "temple_run_2/temple_run_2_capture_context1.h"
#include "temple_run_300/temple_run_300_capture_context1.h"
#include "trex_200/trex_200_capture_context1.h"
#include "whatsapp/whatsapp_capture_context1.h"
#include "world_of_tanks_blitz/world_of_tanks_blitz_capture_context1.h"
#include "world_war_doh/world_war_doh_capture_context2.h"

namespace angle
{
namespace
{
constexpr angle::PackedEnumMap<RestrictedTraceID, TraceInfo> kTraceInfos = {
    {RestrictedTraceID::angry_birds_2_1500,
     {angry_birds_2_1500::kReplayFrameStart, angry_birds_2_1500::kReplayFrameEnd,
      angry_birds_2_1500::kReplayDrawSurfaceWidth, angry_birds_2_1500::kReplayDrawSurfaceHeight,
      "angry_birds_2_1500"}},
    {RestrictedTraceID::arena_of_valor,
     {arena_of_valor::kReplayFrameStart, arena_of_valor::kReplayFrameEnd,
      arena_of_valor::kReplayDrawSurfaceWidth, arena_of_valor::kReplayDrawSurfaceHeight,
      "arena_of_valor"}},
    {RestrictedTraceID::asphalt_8,
     {asphalt_8::kReplayFrameStart, asphalt_8::kReplayFrameEnd, asphalt_8::kReplayDrawSurfaceWidth,
      asphalt_8::kReplayDrawSurfaceHeight, "asphalt_8"}},
    {RestrictedTraceID::brawl_stars,
     {brawl_stars::kReplayFrameStart, brawl_stars::kReplayFrameEnd,
      brawl_stars::kReplayDrawSurfaceWidth, brawl_stars::kReplayDrawSurfaceHeight, "brawl_stars"}},
    {RestrictedTraceID::candy_crush_500,
     {candy_crush_500::kReplayFrameStart, candy_crush_500::kReplayFrameEnd,
      candy_crush_500::kReplayDrawSurfaceWidth, candy_crush_500::kReplayDrawSurfaceHeight,
      "candy_crush_500"}},
    {RestrictedTraceID::clash_of_clans,
     {clash_of_clans::kReplayFrameStart, clash_of_clans::kReplayFrameEnd,
      clash_of_clans::kReplayDrawSurfaceWidth, clash_of_clans::kReplayDrawSurfaceHeight,
      "clash_of_clans"}},
    {RestrictedTraceID::cod_mobile,
     {cod_mobile::kReplayFrameStart, cod_mobile::kReplayFrameEnd,
      cod_mobile::kReplayDrawSurfaceWidth, cod_mobile::kReplayDrawSurfaceHeight, "cod_mobile"}},
    {RestrictedTraceID::dragon_ball_legends,
     {dragon_ball_legends::kReplayFrameStart, dragon_ball_legends::kReplayFrameEnd,
      dragon_ball_legends::kReplayDrawSurfaceWidth, dragon_ball_legends::kReplayDrawSurfaceHeight,
      "dragon_ball_legends"}},
    {RestrictedTraceID::efootball_pes_2021,
     {efootball_pes_2021::kReplayFrameStart, efootball_pes_2021::kReplayFrameEnd,
      efootball_pes_2021::kReplayDrawSurfaceWidth, efootball_pes_2021::kReplayDrawSurfaceHeight,
      "efootball_pes_2021"}},
    {RestrictedTraceID::egypt_1500,
     {egypt_1500::kReplayFrameStart, egypt_1500::kReplayFrameEnd,
      egypt_1500::kReplayDrawSurfaceWidth, egypt_1500::kReplayDrawSurfaceHeight, "egypt_1500"}},
    {RestrictedTraceID::eight_ball_pool,
     {eight_ball_pool::kReplayFrameStart, eight_ball_pool::kReplayFrameEnd,
      eight_ball_pool::kReplayDrawSurfaceWidth, eight_ball_pool::kReplayDrawSurfaceHeight,
      "eight_ball_pool"}},
    {RestrictedTraceID::fate_grand_order,
     {fate_grand_order::kReplayFrameStart, fate_grand_order::kReplayFrameEnd,
      fate_grand_order::kReplayDrawSurfaceWidth, fate_grand_order::kReplayDrawSurfaceHeight,
      "fate_grand_order"}},
    {RestrictedTraceID::fifa_mobile,
     {fifa_mobile::kReplayFrameStart, fifa_mobile::kReplayFrameEnd,
      fifa_mobile::kReplayDrawSurfaceWidth, fifa_mobile::kReplayDrawSurfaceHeight, "fifa_mobile"}},
    {RestrictedTraceID::free_fire,
     {free_fire::kReplayFrameStart, free_fire::kReplayFrameEnd, free_fire::kReplayDrawSurfaceWidth,
      free_fire::kReplayDrawSurfaceHeight, "free_fire"}},
    {RestrictedTraceID::google_maps,
     {google_maps::kReplayFrameStart, google_maps::kReplayFrameEnd,
      google_maps::kReplayDrawSurfaceWidth, google_maps::kReplayDrawSurfaceHeight, "google_maps"}},
    {RestrictedTraceID::hearthstone,
     {hearthstone::kReplayFrameStart, hearthstone::kReplayFrameEnd,
      hearthstone::kReplayDrawSurfaceWidth, hearthstone::kReplayDrawSurfaceHeight, "hearthstone"}},
    {RestrictedTraceID::kartrider_rush,
     {kartrider_rush::kReplayFrameStart, kartrider_rush::kReplayFrameEnd,
      kartrider_rush::kReplayDrawSurfaceWidth, kartrider_rush::kReplayDrawSurfaceHeight,
      "kartrider_rush"}},
    {RestrictedTraceID::klondike_adventures,
     {klondike_adventures::kReplayFrameStart, klondike_adventures::kReplayFrameEnd,
      klondike_adventures::kReplayDrawSurfaceWidth, klondike_adventures::kReplayDrawSurfaceHeight,
      "klondike_adventures"}},
    {RestrictedTraceID::lego_legacy,
     {lego_legacy::kReplayFrameStart, lego_legacy::kReplayFrameEnd,
      lego_legacy::kReplayDrawSurfaceWidth, lego_legacy::kReplayDrawSurfaceHeight, "lego_legacy"}},
    {RestrictedTraceID::magic_tiles_3,
     {magic_tiles_3::kReplayFrameStart, magic_tiles_3::kReplayFrameEnd,
      magic_tiles_3::kReplayDrawSurfaceWidth, magic_tiles_3::kReplayDrawSurfaceHeight,
      "magic_tiles_3"}},
    {RestrictedTraceID::manhattan_10,
     {manhattan_10::kReplayFrameStart, manhattan_10::kReplayFrameEnd,
      manhattan_10::kReplayDrawSurfaceWidth, manhattan_10::kReplayDrawSurfaceHeight,
      "manhattan_10"}},
    {RestrictedTraceID::manhattan_31,
     {manhattan_31::kReplayFrameStart, manhattan_31::kReplayFrameEnd,
      manhattan_31::kReplayDrawSurfaceWidth, manhattan_31::kReplayDrawSurfaceHeight,
      "manhattan_31"}},
    {RestrictedTraceID::marvel_contest_of_champions,
     {marvel_contest_of_champions::kReplayFrameStart, marvel_contest_of_champions::kReplayFrameEnd,
      marvel_contest_of_champions::kReplayDrawSurfaceWidth,
      marvel_contest_of_champions::kReplayDrawSurfaceHeight, "marvel_contest_of_champions"}},
    {RestrictedTraceID::minecraft,
     {minecraft::kReplayFrameStart, minecraft::kReplayFrameEnd, minecraft::kReplayDrawSurfaceWidth,
      minecraft::kReplayDrawSurfaceHeight, "minecraft"}},
    {RestrictedTraceID::mobile_legends,
     {mobile_legends::kReplayFrameStart, mobile_legends::kReplayFrameEnd,
      mobile_legends::kReplayDrawSurfaceWidth, mobile_legends::kReplayDrawSurfaceHeight,
      "mobile_legends"}},
    {RestrictedTraceID::nba2k20_800,
     {nba2k20_800::kReplayFrameStart, nba2k20_800::kReplayFrameEnd,
      nba2k20_800::kReplayDrawSurfaceWidth, nba2k20_800::kReplayDrawSurfaceHeight, "nba2k20_800"}},
    {RestrictedTraceID::one_punch_man,
     {one_punch_man::kReplayFrameStart, one_punch_man::kReplayFrameEnd,
      one_punch_man::kReplayDrawSurfaceWidth, one_punch_man::kReplayDrawSurfaceHeight,
      "one_punch_man"}},
    {RestrictedTraceID::pubg_mobile_lite,
     {pubg_mobile_lite::kReplayFrameStart, pubg_mobile_lite::kReplayFrameEnd,
      pubg_mobile_lite::kReplayDrawSurfaceWidth, pubg_mobile_lite::kReplayDrawSurfaceHeight,
      "pubg_mobile_lite"}},
    {RestrictedTraceID::raid_shadow_legends,
     {raid_shadow_legends::kReplayFrameStart, raid_shadow_legends::kReplayFrameEnd,
      raid_shadow_legends::kReplayDrawSurfaceWidth, raid_shadow_legends::kReplayDrawSurfaceHeight,
      "raid_shadow_legends"}},
    {RestrictedTraceID::real_commando_secret_mission,
     {real_commando_secret_mission::kReplayFrameStart,
      real_commando_secret_mission::kReplayFrameEnd,
      real_commando_secret_mission::kReplayDrawSurfaceWidth,
      real_commando_secret_mission::kReplayDrawSurfaceHeight, "real_commando_secret_mission"}},
    {RestrictedTraceID::real_gangster_crime,
     {real_gangster_crime::kReplayFrameStart, real_gangster_crime::kReplayFrameEnd,
      real_gangster_crime::kReplayDrawSurfaceWidth, real_gangster_crime::kReplayDrawSurfaceHeight,
      "real_gangster_crime"}},
    {RestrictedTraceID::saint_seiya_awakening,
     {saint_seiya_awakening::kReplayFrameStart, saint_seiya_awakening::kReplayFrameEnd,
      saint_seiya_awakening::kReplayDrawSurfaceWidth,
      saint_seiya_awakening::kReplayDrawSurfaceHeight, "saint_seiya_awakening"}},
    {RestrictedTraceID::subway_surfers,
     {subway_surfers::kReplayFrameStart, subway_surfers::kReplayFrameEnd,
      subway_surfers::kReplayDrawSurfaceWidth, subway_surfers::kReplayDrawSurfaceHeight,
      "subway_surfers"}},
    {RestrictedTraceID::temple_run_2,
     {temple_run_2::kReplayFrameStart, temple_run_2::kReplayFrameEnd,
      temple_run_2::kReplayDrawSurfaceWidth, temple_run_2::kReplayDrawSurfaceHeight,
      "temple_run_2"}},
    {RestrictedTraceID::temple_run_300,
     {temple_run_300::kReplayFrameStart, temple_run_300::kReplayFrameEnd,
      temple_run_300::kReplayDrawSurfaceWidth, temple_run_300::kReplayDrawSurfaceHeight,
      "temple_run_300"}},
    {RestrictedTraceID::trex_200,
     {trex_200::kReplayFrameStart, trex_200::kReplayFrameEnd, trex_200::kReplayDrawSurfaceWidth,
      trex_200::kReplayDrawSurfaceHeight, "trex_200"}},
    {RestrictedTraceID::whatsapp,
     {whatsapp::kReplayFrameStart, whatsapp::kReplayFrameEnd, whatsapp::kReplayDrawSurfaceWidth,
      whatsapp::kReplayDrawSurfaceHeight, "whatsapp"}},
    {RestrictedTraceID::world_of_tanks_blitz,
     {world_of_tanks_blitz::kReplayFrameStart, world_of_tanks_blitz::kReplayFrameEnd,
      world_of_tanks_blitz::kReplayDrawSurfaceWidth, world_of_tanks_blitz::kReplayDrawSurfaceHeight,
      "world_of_tanks_blitz"}},
    {RestrictedTraceID::world_war_doh,
     {world_war_doh::kReplayFrameStart, world_war_doh::kReplayFrameEnd,
      world_war_doh::kReplayDrawSurfaceWidth, world_war_doh::kReplayDrawSurfaceHeight,
      "world_war_doh"}}};
}

const TraceInfo &GetTraceInfo(RestrictedTraceID traceID)
{
    return kTraceInfos[traceID];
}

void ReplayFrame(RestrictedTraceID traceID, uint32_t frameIndex)
{
    switch (traceID)
    {
        case RestrictedTraceID::angry_birds_2_1500:
            angry_birds_2_1500::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::arena_of_valor:
            arena_of_valor::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::asphalt_8:
            asphalt_8::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::brawl_stars:
            brawl_stars::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::candy_crush_500:
            candy_crush_500::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::clash_of_clans:
            clash_of_clans::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::cod_mobile:
            cod_mobile::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::dragon_ball_legends:
            dragon_ball_legends::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::efootball_pes_2021:
            efootball_pes_2021::ReplayContext7Frame(frameIndex);
            break;
        case RestrictedTraceID::egypt_1500:
            egypt_1500::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::eight_ball_pool:
            eight_ball_pool::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::fate_grand_order:
            fate_grand_order::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::fifa_mobile:
            fifa_mobile::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::free_fire:
            free_fire::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::google_maps:
            google_maps::ReplayContext3Frame(frameIndex);
            break;
        case RestrictedTraceID::hearthstone:
            hearthstone::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::kartrider_rush:
            kartrider_rush::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::klondike_adventures:
            klondike_adventures::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::lego_legacy:
            lego_legacy::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::magic_tiles_3:
            magic_tiles_3::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::manhattan_10:
            manhattan_10::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::manhattan_31:
            manhattan_31::ReplayContext6Frame(frameIndex);
            break;
        case RestrictedTraceID::marvel_contest_of_champions:
            marvel_contest_of_champions::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::minecraft:
            minecraft::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::mobile_legends:
            mobile_legends::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::nba2k20_800:
            nba2k20_800::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::one_punch_man:
            one_punch_man::ReplayContext3Frame(frameIndex);
            break;
        case RestrictedTraceID::pubg_mobile_lite:
            pubg_mobile_lite::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::raid_shadow_legends:
            raid_shadow_legends::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::real_commando_secret_mission:
            real_commando_secret_mission::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::real_gangster_crime:
            real_gangster_crime::ReplayContext3Frame(frameIndex);
            break;
        case RestrictedTraceID::saint_seiya_awakening:
            saint_seiya_awakening::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::subway_surfers:
            subway_surfers::ReplayContext2Frame(frameIndex);
            break;
        case RestrictedTraceID::temple_run_2:
            temple_run_2::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::temple_run_300:
            temple_run_300::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::trex_200:
            trex_200::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::whatsapp:
            whatsapp::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::world_of_tanks_blitz:
            world_of_tanks_blitz::ReplayContext1Frame(frameIndex);
            break;
        case RestrictedTraceID::world_war_doh:
            world_war_doh::ReplayContext2Frame(frameIndex);
            break;
        default:
            fprintf(stderr, "Error in switch.\n");
            assert(0);
            break;
    }
}

void ResetReplay(RestrictedTraceID traceID)
{
    switch (traceID)
    {
        case RestrictedTraceID::angry_birds_2_1500:
            angry_birds_2_1500::ResetContext1Replay();
            break;
        case RestrictedTraceID::arena_of_valor:
            arena_of_valor::ResetContext1Replay();
            break;
        case RestrictedTraceID::asphalt_8:
            asphalt_8::ResetContext2Replay();
            break;
        case RestrictedTraceID::brawl_stars:
            brawl_stars::ResetContext1Replay();
            break;
        case RestrictedTraceID::candy_crush_500:
            candy_crush_500::ResetContext1Replay();
            break;
        case RestrictedTraceID::clash_of_clans:
            clash_of_clans::ResetContext1Replay();
            break;
        case RestrictedTraceID::cod_mobile:
            cod_mobile::ResetContext1Replay();
            break;
        case RestrictedTraceID::dragon_ball_legends:
            dragon_ball_legends::ResetContext1Replay();
            break;
        case RestrictedTraceID::efootball_pes_2021:
            efootball_pes_2021::ResetContext7Replay();
            break;
        case RestrictedTraceID::egypt_1500:
            egypt_1500::ResetContext1Replay();
            break;
        case RestrictedTraceID::eight_ball_pool:
            eight_ball_pool::ResetContext2Replay();
            break;
        case RestrictedTraceID::fate_grand_order:
            fate_grand_order::ResetContext1Replay();
            break;
        case RestrictedTraceID::fifa_mobile:
            fifa_mobile::ResetContext2Replay();
            break;
        case RestrictedTraceID::free_fire:
            free_fire::ResetContext1Replay();
            break;
        case RestrictedTraceID::google_maps:
            google_maps::ResetContext3Replay();
            break;
        case RestrictedTraceID::hearthstone:
            hearthstone::ResetContext2Replay();
            break;
        case RestrictedTraceID::kartrider_rush:
            kartrider_rush::ResetContext1Replay();
            break;
        case RestrictedTraceID::klondike_adventures:
            klondike_adventures::ResetContext2Replay();
            break;
        case RestrictedTraceID::lego_legacy:
            lego_legacy::ResetContext2Replay();
            break;
        case RestrictedTraceID::magic_tiles_3:
            magic_tiles_3::ResetContext2Replay();
            break;
        case RestrictedTraceID::manhattan_10:
            manhattan_10::ResetContext1Replay();
            break;
        case RestrictedTraceID::manhattan_31:
            manhattan_31::ResetContext6Replay();
            break;
        case RestrictedTraceID::marvel_contest_of_champions:
            marvel_contest_of_champions::ResetContext1Replay();
            break;
        case RestrictedTraceID::minecraft:
            minecraft::ResetContext2Replay();
            break;
        case RestrictedTraceID::mobile_legends:
            mobile_legends::ResetContext1Replay();
            break;
        case RestrictedTraceID::nba2k20_800:
            nba2k20_800::ResetContext1Replay();
            break;
        case RestrictedTraceID::one_punch_man:
            one_punch_man::ResetContext3Replay();
            break;
        case RestrictedTraceID::pubg_mobile_lite:
            pubg_mobile_lite::ResetContext1Replay();
            break;
        case RestrictedTraceID::raid_shadow_legends:
            raid_shadow_legends::ResetContext2Replay();
            break;
        case RestrictedTraceID::real_commando_secret_mission:
            real_commando_secret_mission::ResetContext1Replay();
            break;
        case RestrictedTraceID::real_gangster_crime:
            real_gangster_crime::ResetContext3Replay();
            break;
        case RestrictedTraceID::saint_seiya_awakening:
            saint_seiya_awakening::ResetContext2Replay();
            break;
        case RestrictedTraceID::subway_surfers:
            subway_surfers::ResetContext2Replay();
            break;
        case RestrictedTraceID::temple_run_2:
            temple_run_2::ResetContext1Replay();
            break;
        case RestrictedTraceID::temple_run_300:
            temple_run_300::ResetContext1Replay();
            break;
        case RestrictedTraceID::trex_200:
            trex_200::ResetContext1Replay();
            break;
        case RestrictedTraceID::whatsapp:
            whatsapp::ResetContext1Replay();
            break;
        case RestrictedTraceID::world_of_tanks_blitz:
            world_of_tanks_blitz::ResetContext1Replay();
            break;
        case RestrictedTraceID::world_war_doh:
            world_war_doh::ResetContext2Replay();
            break;
        default:
            fprintf(stderr, "Error in switch.\n");
            assert(0);
            break;
    }
}

void SetupReplay(RestrictedTraceID traceID)
{
    switch (traceID)
    {
        case RestrictedTraceID::angry_birds_2_1500:
            angry_birds_2_1500::SetupContext1Replay();
            break;
        case RestrictedTraceID::arena_of_valor:
            arena_of_valor::SetupContext1Replay();
            break;
        case RestrictedTraceID::asphalt_8:
            asphalt_8::SetupContext2Replay();
            break;
        case RestrictedTraceID::brawl_stars:
            brawl_stars::SetupContext1Replay();
            break;
        case RestrictedTraceID::candy_crush_500:
            candy_crush_500::SetupContext1Replay();
            break;
        case RestrictedTraceID::clash_of_clans:
            clash_of_clans::SetupContext1Replay();
            break;
        case RestrictedTraceID::cod_mobile:
            cod_mobile::SetupContext1Replay();
            break;
        case RestrictedTraceID::dragon_ball_legends:
            dragon_ball_legends::SetupContext1Replay();
            break;
        case RestrictedTraceID::efootball_pes_2021:
            efootball_pes_2021::SetupContext7Replay();
            break;
        case RestrictedTraceID::egypt_1500:
            egypt_1500::SetupContext1Replay();
            break;
        case RestrictedTraceID::eight_ball_pool:
            eight_ball_pool::SetupContext2Replay();
            break;
        case RestrictedTraceID::fate_grand_order:
            fate_grand_order::SetupContext1Replay();
            break;
        case RestrictedTraceID::fifa_mobile:
            fifa_mobile::SetupContext2Replay();
            break;
        case RestrictedTraceID::free_fire:
            free_fire::SetupContext1Replay();
            break;
        case RestrictedTraceID::google_maps:
            google_maps::SetupContext3Replay();
            break;
        case RestrictedTraceID::hearthstone:
            hearthstone::SetupContext2Replay();
            break;
        case RestrictedTraceID::kartrider_rush:
            kartrider_rush::SetupContext1Replay();
            break;
        case RestrictedTraceID::klondike_adventures:
            klondike_adventures::SetupContext2Replay();
            break;
        case RestrictedTraceID::lego_legacy:
            lego_legacy::SetupContext2Replay();
            break;
        case RestrictedTraceID::magic_tiles_3:
            magic_tiles_3::SetupContext2Replay();
            break;
        case RestrictedTraceID::manhattan_10:
            manhattan_10::SetupContext1Replay();
            break;
        case RestrictedTraceID::manhattan_31:
            manhattan_31::SetupContext6Replay();
            break;
        case RestrictedTraceID::marvel_contest_of_champions:
            marvel_contest_of_champions::SetupContext1Replay();
            break;
        case RestrictedTraceID::minecraft:
            minecraft::SetupContext2Replay();
            break;
        case RestrictedTraceID::mobile_legends:
            mobile_legends::SetupContext1Replay();
            break;
        case RestrictedTraceID::nba2k20_800:
            nba2k20_800::SetupContext1Replay();
            break;
        case RestrictedTraceID::one_punch_man:
            one_punch_man::SetupContext3Replay();
            break;
        case RestrictedTraceID::pubg_mobile_lite:
            pubg_mobile_lite::SetupContext1Replay();
            break;
        case RestrictedTraceID::raid_shadow_legends:
            raid_shadow_legends::SetupContext2Replay();
            break;
        case RestrictedTraceID::real_commando_secret_mission:
            real_commando_secret_mission::SetupContext1Replay();
            break;
        case RestrictedTraceID::real_gangster_crime:
            real_gangster_crime::SetupContext3Replay();
            break;
        case RestrictedTraceID::saint_seiya_awakening:
            saint_seiya_awakening::SetupContext2Replay();
            break;
        case RestrictedTraceID::subway_surfers:
            subway_surfers::SetupContext2Replay();
            break;
        case RestrictedTraceID::temple_run_2:
            temple_run_2::SetupContext1Replay();
            break;
        case RestrictedTraceID::temple_run_300:
            temple_run_300::SetupContext1Replay();
            break;
        case RestrictedTraceID::trex_200:
            trex_200::SetupContext1Replay();
            break;
        case RestrictedTraceID::whatsapp:
            whatsapp::SetupContext1Replay();
            break;
        case RestrictedTraceID::world_of_tanks_blitz:
            world_of_tanks_blitz::SetupContext1Replay();
            break;
        case RestrictedTraceID::world_war_doh:
            world_war_doh::SetupContext2Replay();
            break;
        default:
            fprintf(stderr, "Error in switch.\n");
            assert(0);
            break;
    }
}

void SetBinaryDataDir(RestrictedTraceID traceID, const char *dataDir)
{
    switch (traceID)
    {
        case RestrictedTraceID::angry_birds_2_1500:
            angry_birds_2_1500::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::arena_of_valor:
            arena_of_valor::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::asphalt_8:
            asphalt_8::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::brawl_stars:
            brawl_stars::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::candy_crush_500:
            candy_crush_500::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::clash_of_clans:
            clash_of_clans::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::cod_mobile:
            cod_mobile::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::dragon_ball_legends:
            dragon_ball_legends::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::efootball_pes_2021:
            efootball_pes_2021::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::egypt_1500:
            egypt_1500::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::eight_ball_pool:
            eight_ball_pool::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::fate_grand_order:
            fate_grand_order::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::fifa_mobile:
            fifa_mobile::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::free_fire:
            free_fire::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::google_maps:
            google_maps::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::hearthstone:
            hearthstone::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::kartrider_rush:
            kartrider_rush::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::klondike_adventures:
            klondike_adventures::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::lego_legacy:
            lego_legacy::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::magic_tiles_3:
            magic_tiles_3::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::manhattan_10:
            manhattan_10::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::manhattan_31:
            manhattan_31::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::marvel_contest_of_champions:
            marvel_contest_of_champions::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::minecraft:
            minecraft::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::mobile_legends:
            mobile_legends::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::nba2k20_800:
            nba2k20_800::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::one_punch_man:
            one_punch_man::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::pubg_mobile_lite:
            pubg_mobile_lite::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::raid_shadow_legends:
            raid_shadow_legends::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::real_commando_secret_mission:
            real_commando_secret_mission::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::real_gangster_crime:
            real_gangster_crime::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::saint_seiya_awakening:
            saint_seiya_awakening::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::subway_surfers:
            subway_surfers::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::temple_run_2:
            temple_run_2::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::temple_run_300:
            temple_run_300::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::trex_200:
            trex_200::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::whatsapp:
            whatsapp::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::world_of_tanks_blitz:
            world_of_tanks_blitz::SetBinaryDataDir(dataDir);
            break;
        case RestrictedTraceID::world_war_doh:
            world_war_doh::SetBinaryDataDir(dataDir);
            break;
        default:
            fprintf(stderr, "Error in switch.\n");
            assert(0);
            break;
    }
}

void SetBinaryDataDecompressCallback(RestrictedTraceID traceID, DecompressCallback callback)
{
    switch (traceID)
    {
        case RestrictedTraceID::angry_birds_2_1500:
            angry_birds_2_1500::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::arena_of_valor:
            arena_of_valor::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::asphalt_8:
            asphalt_8::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::brawl_stars:
            brawl_stars::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::candy_crush_500:
            candy_crush_500::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::clash_of_clans:
            clash_of_clans::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::cod_mobile:
            cod_mobile::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::dragon_ball_legends:
            dragon_ball_legends::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::efootball_pes_2021:
            efootball_pes_2021::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::egypt_1500:
            egypt_1500::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::eight_ball_pool:
            eight_ball_pool::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::fate_grand_order:
            fate_grand_order::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::fifa_mobile:
            fifa_mobile::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::free_fire:
            free_fire::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::google_maps:
            google_maps::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::hearthstone:
            hearthstone::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::kartrider_rush:
            kartrider_rush::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::klondike_adventures:
            klondike_adventures::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::lego_legacy:
            lego_legacy::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::magic_tiles_3:
            magic_tiles_3::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::manhattan_10:
            manhattan_10::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::manhattan_31:
            manhattan_31::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::marvel_contest_of_champions:
            marvel_contest_of_champions::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::minecraft:
            minecraft::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::mobile_legends:
            mobile_legends::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::nba2k20_800:
            nba2k20_800::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::one_punch_man:
            one_punch_man::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::pubg_mobile_lite:
            pubg_mobile_lite::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::raid_shadow_legends:
            raid_shadow_legends::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::real_commando_secret_mission:
            real_commando_secret_mission::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::real_gangster_crime:
            real_gangster_crime::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::saint_seiya_awakening:
            saint_seiya_awakening::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::subway_surfers:
            subway_surfers::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::temple_run_2:
            temple_run_2::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::temple_run_300:
            temple_run_300::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::trex_200:
            trex_200::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::whatsapp:
            whatsapp::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::world_of_tanks_blitz:
            world_of_tanks_blitz::SetBinaryDataDecompressCallback(callback);
            break;
        case RestrictedTraceID::world_war_doh:
            world_war_doh::SetBinaryDataDecompressCallback(callback);
            break;
        default:
            fprintf(stderr, "Error in switch.\n");
            assert(0);
            break;
    }
}
}  // namespace angle
