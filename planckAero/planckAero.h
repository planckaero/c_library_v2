/** @file
 *  @brief MAVLink comm protocol generated from planckAero.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_PLANCKAERO_H
#define MAVLINK_PLANCKAERO_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_PLANCKAERO.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{9001, 203, 88, 88, 3, 84, 85}, {9002, 228, 36, 36, 0, 0, 0}, {9003, 252, 8, 8, 3, 0, 1}, {9004, 72, 53, 53, 3, 50, 51}, {9005, 211, 27, 27, 3, 24, 25}, {9006, 214, 50, 50, 3, 48, 49}, {9007, 162, 38, 38, 3, 36, 37}, {9008, 88, 26, 26, 3, 24, 25}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_PLANCKAERO

// ENUM DEFINITIONS


/** @brief Planck system and component IDs */
#ifndef HAVE_ENUM_PLANCK_COMP_IDS
#define HAVE_ENUM_PLANCK_COMP_IDS
typedef enum PLANCK_COMP_IDS
{
   PLANCK_BLACKBOX_COMP_ID=32, /*  | */
   PLANCK_GPS_COMP_ID=34, /*  | */
   PLANCK_ANAFI_SUP_COMP_ID=41, /*  | */
   PLANCK_COT_COMP_ID=69, /*  | */
   PLANCK_CTRL_COMP_ID=90, /*  | */
   PLANCK_COMP_IDS_ENUM_END=91, /*  | */
} PLANCK_COMP_IDS;
#endif

/** @brief Additional data stream for planck data. */
#ifndef HAVE_ENUM_MAV_DATA_STREAM_PLANCK
#define HAVE_ENUM_MAV_DATA_STREAM_PLANCK
typedef enum MAV_DATA_STREAM_PLANCK
{
   MAV_DATA_STREAM_PLANCK_STATEINFO=99, /* Enable Planck stateinfo data | */
   MAV_DATA_STREAM_PLANCK_ENUM_END=100, /*  | */
} MAV_DATA_STREAM_PLANCK;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_CMD
#define HAVE_ENUM_MAV_CMD
typedef enum MAV_CMD
{
   MAV_CMD_NAV_PLANCK_TAKEOFF=9001, /*  |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_NAV_PLANCK_RTB=9002, /*  |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_NAV_PLANCK_WINGMAN=9003, /*  |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_NAV_PLANCK_LAND=9004, /*  |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_NAV_PLANCK_TRACK=9005, /*  |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_ENUM_END=9006, /*  | */
} MAV_CMD;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PLANCK_CMD_REQ_TYPE
#define HAVE_ENUM_PLANCK_CMD_REQ_TYPE
typedef enum PLANCK_CMD_REQ_TYPE
{
   PLANCK_CMD_REQ_TAKEOFF=0, /*  | */
   PLANCK_CMD_REQ_RTB=1, /*  | */
   PLANCK_CMD_REQ_LAND=2, /*  | */
   PLANCK_CMD_REQ_MOVE_TARGET=3, /*  | */
   PLANCK_CMD_REQ_STOP=4, /*  | */
   PLANCK_CMD_REQ_TYPE_ENUM_END=5, /*  | */
} PLANCK_CMD_REQ_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PLANCK_CTRL_FLIGHTMODE
#define HAVE_ENUM_PLANCK_CTRL_FLIGHTMODE
typedef enum PLANCK_CTRL_FLIGHTMODE
{
   PLANCK_CTRL_FLIGHTMODE_IDLE=0, /*  | */
   PLANCK_CTRL_FLIGHTMODE_TAKEOFF=1, /*  | */
   PLANCK_CTRL_FLIGHTMODE_RETURN_TO_BOAT=2, /*  | */
   PLANCK_CTRL_FLIGHTMODE_LAND=3, /*  | */
   PLANCK_CTRL_FLIGHTMODE_TRACKING=4, /*  | */
   PLANCK_CTRL_FLIGHTMODE_ENUM_END=5, /*  | */
} PLANCK_CTRL_FLIGHTMODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PLANCK_ANAFI_SUBMODE
#define HAVE_ENUM_PLANCK_ANAFI_SUBMODE
typedef enum PLANCK_ANAFI_SUBMODE
{
   PLANCK_ANAFI_SUBMODE_PLANCKIDLE=0, /*  | */
   PLANCK_ANAFI_SUBMODE_PLANCKTAKEOFF=1, /*  | */
   PLANCK_ANAFI_SUBMODE_PLANCKTRACK=2, /*  | */
   PLANCK_ANAFI_SUBMODE_PLANCKRTB=3, /*  | */
   PLANCK_ANAFI_SUBMODE_PLANCKLAND=4, /*  | */
   PLANCK_ANAFI_SUBMODE_PLANCKWINGMAN=5, /*  | */
   PLANCK_ANAFI_SUBMODE_PLANCKTAKEOFFDRIFT=6, /*  | */
   PLANCK_ANAFI_SUBMODE_ENUM_END=7, /*  | */
} PLANCK_ANAFI_SUBMODE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_planck_stateinfo.h"
#include "./mavlink_msg_planck_landing_platform_state.h"
#include "./mavlink_msg_planck_status.h"
#include "./mavlink_msg_planck_cmd_msg.h"
#include "./mavlink_msg_planck_cmd_request.h"
#include "./mavlink_msg_planck_landing_tag_estimate_ned.h"
#include "./mavlink_msg_planck_landing_tag_measurement_body.h"
#include "./mavlink_msg_planck_landing_tag_estimate_gps.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_PLANCK_STATEINFO, MAVLINK_MESSAGE_INFO_PLANCK_LANDING_PLATFORM_STATE, MAVLINK_MESSAGE_INFO_PLANCK_STATUS, MAVLINK_MESSAGE_INFO_PLANCK_CMD_MSG, MAVLINK_MESSAGE_INFO_PLANCK_CMD_REQUEST, MAVLINK_MESSAGE_INFO_PLANCK_LANDING_TAG_ESTIMATE_NED, MAVLINK_MESSAGE_INFO_PLANCK_LANDING_TAG_MEASUREMENT_BODY, MAVLINK_MESSAGE_INFO_PLANCK_LANDING_TAG_ESTIMATE_GPS}
# define MAVLINK_MESSAGE_NAMES {{ "PLANCK_CMD_MSG", 9004 }, { "PLANCK_CMD_REQUEST", 9005 }, { "PLANCK_LANDING_PLATFORM_STATE", 9002 }, { "PLANCK_LANDING_TAG_ESTIMATE_GPS", 9008 }, { "PLANCK_LANDING_TAG_ESTIMATE_NED", 9006 }, { "PLANCK_LANDING_TAG_MEASUREMENT_BODY", 9007 }, { "PLANCK_STATEINFO", 9001 }, { "PLANCK_STATUS", 9003 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_PLANCKAERO_H
