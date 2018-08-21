#pragma once
// MESSAGE PLANCK_TAG_MEAS PACKING

#define MAVLINK_MSG_ID_PLANCK_TAG_MEAS 240

MAVPACKED(
typedef struct __mavlink_planck_tag_meas_t {
 float cxy_x; /*<  origin top/left of screen, positive right*/
 float cxy_y; /*<  origin top/left of screen, positive down*/
 float x; /*<  origin center of screen, positive right*/
 float y; /*<  origin center of screen, positive backward*/
 float z; /*<  origin center of screen, positive down (out of screen, towards tag)*/
 float rot_CF_TF[9]; /*<   */
 float x1; /*<  Pixel x location of the first point*/
 float y1; /*<  Pixel y location of the first point*/
 float x2; /*<  Pixel x location of the second point*/
 float y2; /*<  Pixel y location of the second point*/
 float x3; /*<  Pixel x location of the third point*/
 float y3; /*<  Pixel y location of the third point*/
 float x4; /*<  Pixel x location of the fourth point*/
 float y4; /*<  Pixel y location of the fourth point*/
 float tag_size; /*<  Size of the tag's edge in meters*/
 uint32_t grab_time_ms; /*<  When the tag was grabbed*/
}) mavlink_planck_tag_meas_t;

#define MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN 96
#define MAVLINK_MSG_ID_PLANCK_TAG_MEAS_MIN_LEN 96
#define MAVLINK_MSG_ID_240_LEN 96
#define MAVLINK_MSG_ID_240_MIN_LEN 96

#define MAVLINK_MSG_ID_PLANCK_TAG_MEAS_CRC 195
#define MAVLINK_MSG_ID_240_CRC 195

#define MAVLINK_MSG_PLANCK_TAG_MEAS_FIELD_ROT_CF_TF_LEN 9

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PLANCK_TAG_MEAS { \
    240, \
    "PLANCK_TAG_MEAS", \
    16, \
    {  { "cxy_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_planck_tag_meas_t, cxy_x) }, \
         { "cxy_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_planck_tag_meas_t, cxy_y) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_planck_tag_meas_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_planck_tag_meas_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_planck_tag_meas_t, z) }, \
         { "rot_CF_TF", NULL, MAVLINK_TYPE_FLOAT, 9, 20, offsetof(mavlink_planck_tag_meas_t, rot_CF_TF) }, \
         { "x1", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_planck_tag_meas_t, x1) }, \
         { "y1", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_planck_tag_meas_t, y1) }, \
         { "x2", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_planck_tag_meas_t, x2) }, \
         { "y2", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_planck_tag_meas_t, y2) }, \
         { "x3", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_planck_tag_meas_t, x3) }, \
         { "y3", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_planck_tag_meas_t, y3) }, \
         { "x4", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_planck_tag_meas_t, x4) }, \
         { "y4", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_planck_tag_meas_t, y4) }, \
         { "tag_size", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_planck_tag_meas_t, tag_size) }, \
         { "grab_time_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 92, offsetof(mavlink_planck_tag_meas_t, grab_time_ms) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PLANCK_TAG_MEAS { \
    "PLANCK_TAG_MEAS", \
    16, \
    {  { "cxy_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_planck_tag_meas_t, cxy_x) }, \
         { "cxy_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_planck_tag_meas_t, cxy_y) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_planck_tag_meas_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_planck_tag_meas_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_planck_tag_meas_t, z) }, \
         { "rot_CF_TF", NULL, MAVLINK_TYPE_FLOAT, 9, 20, offsetof(mavlink_planck_tag_meas_t, rot_CF_TF) }, \
         { "x1", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_planck_tag_meas_t, x1) }, \
         { "y1", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_planck_tag_meas_t, y1) }, \
         { "x2", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_planck_tag_meas_t, x2) }, \
         { "y2", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_planck_tag_meas_t, y2) }, \
         { "x3", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_planck_tag_meas_t, x3) }, \
         { "y3", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_planck_tag_meas_t, y3) }, \
         { "x4", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_planck_tag_meas_t, x4) }, \
         { "y4", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_planck_tag_meas_t, y4) }, \
         { "tag_size", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_planck_tag_meas_t, tag_size) }, \
         { "grab_time_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 92, offsetof(mavlink_planck_tag_meas_t, grab_time_ms) }, \
         } \
}
#endif

/**
 * @brief Pack a planck_tag_meas message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cxy_x  origin top/left of screen, positive right
 * @param cxy_y  origin top/left of screen, positive down
 * @param x  origin center of screen, positive right
 * @param y  origin center of screen, positive backward
 * @param z  origin center of screen, positive down (out of screen, towards tag)
 * @param rot_CF_TF   
 * @param x1  Pixel x location of the first point
 * @param y1  Pixel y location of the first point
 * @param x2  Pixel x location of the second point
 * @param y2  Pixel y location of the second point
 * @param x3  Pixel x location of the third point
 * @param y3  Pixel y location of the third point
 * @param x4  Pixel x location of the fourth point
 * @param y4  Pixel y location of the fourth point
 * @param tag_size  Size of the tag's edge in meters
 * @param grab_time_ms  When the tag was grabbed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_planck_tag_meas_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float cxy_x, float cxy_y, float x, float y, float z, const float *rot_CF_TF, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float tag_size, uint32_t grab_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN];
    _mav_put_float(buf, 0, cxy_x);
    _mav_put_float(buf, 4, cxy_y);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 56, x1);
    _mav_put_float(buf, 60, y1);
    _mav_put_float(buf, 64, x2);
    _mav_put_float(buf, 68, y2);
    _mav_put_float(buf, 72, x3);
    _mav_put_float(buf, 76, y3);
    _mav_put_float(buf, 80, x4);
    _mav_put_float(buf, 84, y4);
    _mav_put_float(buf, 88, tag_size);
    _mav_put_uint32_t(buf, 92, grab_time_ms);
    _mav_put_float_array(buf, 20, rot_CF_TF, 9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN);
#else
    mavlink_planck_tag_meas_t packet;
    packet.cxy_x = cxy_x;
    packet.cxy_y = cxy_y;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;
    packet.x3 = x3;
    packet.y3 = y3;
    packet.x4 = x4;
    packet.y4 = y4;
    packet.tag_size = tag_size;
    packet.grab_time_ms = grab_time_ms;
    mav_array_memcpy(packet.rot_CF_TF, rot_CF_TF, sizeof(float)*9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PLANCK_TAG_MEAS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_MIN_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_CRC);
}

/**
 * @brief Pack a planck_tag_meas message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cxy_x  origin top/left of screen, positive right
 * @param cxy_y  origin top/left of screen, positive down
 * @param x  origin center of screen, positive right
 * @param y  origin center of screen, positive backward
 * @param z  origin center of screen, positive down (out of screen, towards tag)
 * @param rot_CF_TF   
 * @param x1  Pixel x location of the first point
 * @param y1  Pixel y location of the first point
 * @param x2  Pixel x location of the second point
 * @param y2  Pixel y location of the second point
 * @param x3  Pixel x location of the third point
 * @param y3  Pixel y location of the third point
 * @param x4  Pixel x location of the fourth point
 * @param y4  Pixel y location of the fourth point
 * @param tag_size  Size of the tag's edge in meters
 * @param grab_time_ms  When the tag was grabbed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_planck_tag_meas_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float cxy_x,float cxy_y,float x,float y,float z,const float *rot_CF_TF,float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,float tag_size,uint32_t grab_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN];
    _mav_put_float(buf, 0, cxy_x);
    _mav_put_float(buf, 4, cxy_y);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 56, x1);
    _mav_put_float(buf, 60, y1);
    _mav_put_float(buf, 64, x2);
    _mav_put_float(buf, 68, y2);
    _mav_put_float(buf, 72, x3);
    _mav_put_float(buf, 76, y3);
    _mav_put_float(buf, 80, x4);
    _mav_put_float(buf, 84, y4);
    _mav_put_float(buf, 88, tag_size);
    _mav_put_uint32_t(buf, 92, grab_time_ms);
    _mav_put_float_array(buf, 20, rot_CF_TF, 9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN);
#else
    mavlink_planck_tag_meas_t packet;
    packet.cxy_x = cxy_x;
    packet.cxy_y = cxy_y;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;
    packet.x3 = x3;
    packet.y3 = y3;
    packet.x4 = x4;
    packet.y4 = y4;
    packet.tag_size = tag_size;
    packet.grab_time_ms = grab_time_ms;
    mav_array_memcpy(packet.rot_CF_TF, rot_CF_TF, sizeof(float)*9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PLANCK_TAG_MEAS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_MIN_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_CRC);
}

/**
 * @brief Encode a planck_tag_meas struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param planck_tag_meas C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_planck_tag_meas_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_planck_tag_meas_t* planck_tag_meas)
{
    return mavlink_msg_planck_tag_meas_pack(system_id, component_id, msg, planck_tag_meas->cxy_x, planck_tag_meas->cxy_y, planck_tag_meas->x, planck_tag_meas->y, planck_tag_meas->z, planck_tag_meas->rot_CF_TF, planck_tag_meas->x1, planck_tag_meas->y1, planck_tag_meas->x2, planck_tag_meas->y2, planck_tag_meas->x3, planck_tag_meas->y3, planck_tag_meas->x4, planck_tag_meas->y4, planck_tag_meas->tag_size, planck_tag_meas->grab_time_ms);
}

/**
 * @brief Encode a planck_tag_meas struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param planck_tag_meas C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_planck_tag_meas_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_planck_tag_meas_t* planck_tag_meas)
{
    return mavlink_msg_planck_tag_meas_pack_chan(system_id, component_id, chan, msg, planck_tag_meas->cxy_x, planck_tag_meas->cxy_y, planck_tag_meas->x, planck_tag_meas->y, planck_tag_meas->z, planck_tag_meas->rot_CF_TF, planck_tag_meas->x1, planck_tag_meas->y1, planck_tag_meas->x2, planck_tag_meas->y2, planck_tag_meas->x3, planck_tag_meas->y3, planck_tag_meas->x4, planck_tag_meas->y4, planck_tag_meas->tag_size, planck_tag_meas->grab_time_ms);
}

/**
 * @brief Send a planck_tag_meas message
 * @param chan MAVLink channel to send the message
 *
 * @param cxy_x  origin top/left of screen, positive right
 * @param cxy_y  origin top/left of screen, positive down
 * @param x  origin center of screen, positive right
 * @param y  origin center of screen, positive backward
 * @param z  origin center of screen, positive down (out of screen, towards tag)
 * @param rot_CF_TF   
 * @param x1  Pixel x location of the first point
 * @param y1  Pixel y location of the first point
 * @param x2  Pixel x location of the second point
 * @param y2  Pixel y location of the second point
 * @param x3  Pixel x location of the third point
 * @param y3  Pixel y location of the third point
 * @param x4  Pixel x location of the fourth point
 * @param y4  Pixel y location of the fourth point
 * @param tag_size  Size of the tag's edge in meters
 * @param grab_time_ms  When the tag was grabbed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_planck_tag_meas_send(mavlink_channel_t chan, float cxy_x, float cxy_y, float x, float y, float z, const float *rot_CF_TF, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float tag_size, uint32_t grab_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN];
    _mav_put_float(buf, 0, cxy_x);
    _mav_put_float(buf, 4, cxy_y);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 56, x1);
    _mav_put_float(buf, 60, y1);
    _mav_put_float(buf, 64, x2);
    _mav_put_float(buf, 68, y2);
    _mav_put_float(buf, 72, x3);
    _mav_put_float(buf, 76, y3);
    _mav_put_float(buf, 80, x4);
    _mav_put_float(buf, 84, y4);
    _mav_put_float(buf, 88, tag_size);
    _mav_put_uint32_t(buf, 92, grab_time_ms);
    _mav_put_float_array(buf, 20, rot_CF_TF, 9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_TAG_MEAS, buf, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_MIN_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_CRC);
#else
    mavlink_planck_tag_meas_t packet;
    packet.cxy_x = cxy_x;
    packet.cxy_y = cxy_y;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;
    packet.x3 = x3;
    packet.y3 = y3;
    packet.x4 = x4;
    packet.y4 = y4;
    packet.tag_size = tag_size;
    packet.grab_time_ms = grab_time_ms;
    mav_array_memcpy(packet.rot_CF_TF, rot_CF_TF, sizeof(float)*9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_TAG_MEAS, (const char *)&packet, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_MIN_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_CRC);
#endif
}

/**
 * @brief Send a planck_tag_meas message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_planck_tag_meas_send_struct(mavlink_channel_t chan, const mavlink_planck_tag_meas_t* planck_tag_meas)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_planck_tag_meas_send(chan, planck_tag_meas->cxy_x, planck_tag_meas->cxy_y, planck_tag_meas->x, planck_tag_meas->y, planck_tag_meas->z, planck_tag_meas->rot_CF_TF, planck_tag_meas->x1, planck_tag_meas->y1, planck_tag_meas->x2, planck_tag_meas->y2, planck_tag_meas->x3, planck_tag_meas->y3, planck_tag_meas->x4, planck_tag_meas->y4, planck_tag_meas->tag_size, planck_tag_meas->grab_time_ms);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_TAG_MEAS, (const char *)planck_tag_meas, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_MIN_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_CRC);
#endif
}

#if MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_planck_tag_meas_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float cxy_x, float cxy_y, float x, float y, float z, const float *rot_CF_TF, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float tag_size, uint32_t grab_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, cxy_x);
    _mav_put_float(buf, 4, cxy_y);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 56, x1);
    _mav_put_float(buf, 60, y1);
    _mav_put_float(buf, 64, x2);
    _mav_put_float(buf, 68, y2);
    _mav_put_float(buf, 72, x3);
    _mav_put_float(buf, 76, y3);
    _mav_put_float(buf, 80, x4);
    _mav_put_float(buf, 84, y4);
    _mav_put_float(buf, 88, tag_size);
    _mav_put_uint32_t(buf, 92, grab_time_ms);
    _mav_put_float_array(buf, 20, rot_CF_TF, 9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_TAG_MEAS, buf, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_MIN_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_CRC);
#else
    mavlink_planck_tag_meas_t *packet = (mavlink_planck_tag_meas_t *)msgbuf;
    packet->cxy_x = cxy_x;
    packet->cxy_y = cxy_y;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->x1 = x1;
    packet->y1 = y1;
    packet->x2 = x2;
    packet->y2 = y2;
    packet->x3 = x3;
    packet->y3 = y3;
    packet->x4 = x4;
    packet->y4 = y4;
    packet->tag_size = tag_size;
    packet->grab_time_ms = grab_time_ms;
    mav_array_memcpy(packet->rot_CF_TF, rot_CF_TF, sizeof(float)*9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_TAG_MEAS, (const char *)packet, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_MIN_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_CRC);
#endif
}
#endif

#endif

// MESSAGE PLANCK_TAG_MEAS UNPACKING


/**
 * @brief Get field cxy_x from planck_tag_meas message
 *
 * @return  origin top/left of screen, positive right
 */
static inline float mavlink_msg_planck_tag_meas_get_cxy_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field cxy_y from planck_tag_meas message
 *
 * @return  origin top/left of screen, positive down
 */
static inline float mavlink_msg_planck_tag_meas_get_cxy_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field x from planck_tag_meas message
 *
 * @return  origin center of screen, positive right
 */
static inline float mavlink_msg_planck_tag_meas_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from planck_tag_meas message
 *
 * @return  origin center of screen, positive backward
 */
static inline float mavlink_msg_planck_tag_meas_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from planck_tag_meas message
 *
 * @return  origin center of screen, positive down (out of screen, towards tag)
 */
static inline float mavlink_msg_planck_tag_meas_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field rot_CF_TF from planck_tag_meas message
 *
 * @return   
 */
static inline uint16_t mavlink_msg_planck_tag_meas_get_rot_CF_TF(const mavlink_message_t* msg, float *rot_CF_TF)
{
    return _MAV_RETURN_float_array(msg, rot_CF_TF, 9,  20);
}

/**
 * @brief Get field x1 from planck_tag_meas message
 *
 * @return  Pixel x location of the first point
 */
static inline float mavlink_msg_planck_tag_meas_get_x1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field y1 from planck_tag_meas message
 *
 * @return  Pixel y location of the first point
 */
static inline float mavlink_msg_planck_tag_meas_get_y1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field x2 from planck_tag_meas message
 *
 * @return  Pixel x location of the second point
 */
static inline float mavlink_msg_planck_tag_meas_get_x2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field y2 from planck_tag_meas message
 *
 * @return  Pixel y location of the second point
 */
static inline float mavlink_msg_planck_tag_meas_get_y2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field x3 from planck_tag_meas message
 *
 * @return  Pixel x location of the third point
 */
static inline float mavlink_msg_planck_tag_meas_get_x3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field y3 from planck_tag_meas message
 *
 * @return  Pixel y location of the third point
 */
static inline float mavlink_msg_planck_tag_meas_get_y3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field x4 from planck_tag_meas message
 *
 * @return  Pixel x location of the fourth point
 */
static inline float mavlink_msg_planck_tag_meas_get_x4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field y4 from planck_tag_meas message
 *
 * @return  Pixel y location of the fourth point
 */
static inline float mavlink_msg_planck_tag_meas_get_y4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field tag_size from planck_tag_meas message
 *
 * @return  Size of the tag's edge in meters
 */
static inline float mavlink_msg_planck_tag_meas_get_tag_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field grab_time_ms from planck_tag_meas message
 *
 * @return  When the tag was grabbed
 */
static inline uint32_t mavlink_msg_planck_tag_meas_get_grab_time_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  92);
}

/**
 * @brief Decode a planck_tag_meas message into a struct
 *
 * @param msg The message to decode
 * @param planck_tag_meas C-struct to decode the message contents into
 */
static inline void mavlink_msg_planck_tag_meas_decode(const mavlink_message_t* msg, mavlink_planck_tag_meas_t* planck_tag_meas)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    planck_tag_meas->cxy_x = mavlink_msg_planck_tag_meas_get_cxy_x(msg);
    planck_tag_meas->cxy_y = mavlink_msg_planck_tag_meas_get_cxy_y(msg);
    planck_tag_meas->x = mavlink_msg_planck_tag_meas_get_x(msg);
    planck_tag_meas->y = mavlink_msg_planck_tag_meas_get_y(msg);
    planck_tag_meas->z = mavlink_msg_planck_tag_meas_get_z(msg);
    mavlink_msg_planck_tag_meas_get_rot_CF_TF(msg, planck_tag_meas->rot_CF_TF);
    planck_tag_meas->x1 = mavlink_msg_planck_tag_meas_get_x1(msg);
    planck_tag_meas->y1 = mavlink_msg_planck_tag_meas_get_y1(msg);
    planck_tag_meas->x2 = mavlink_msg_planck_tag_meas_get_x2(msg);
    planck_tag_meas->y2 = mavlink_msg_planck_tag_meas_get_y2(msg);
    planck_tag_meas->x3 = mavlink_msg_planck_tag_meas_get_x3(msg);
    planck_tag_meas->y3 = mavlink_msg_planck_tag_meas_get_y3(msg);
    planck_tag_meas->x4 = mavlink_msg_planck_tag_meas_get_x4(msg);
    planck_tag_meas->y4 = mavlink_msg_planck_tag_meas_get_y4(msg);
    planck_tag_meas->tag_size = mavlink_msg_planck_tag_meas_get_tag_size(msg);
    planck_tag_meas->grab_time_ms = mavlink_msg_planck_tag_meas_get_grab_time_ms(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN? msg->len : MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN;
        memset(planck_tag_meas, 0, MAVLINK_MSG_ID_PLANCK_TAG_MEAS_LEN);
    memcpy(planck_tag_meas, _MAV_PAYLOAD(msg), len);
#endif
}
