#pragma once
// MESSAGE PLANCK_LANDING_TAG_MEASUREMENT PACKING

#define MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT 9009

MAVPACKED(
typedef struct __mavlink_planck_landing_tag_measurement_t {
 uint64_t ap_timestamp_us; /*< [microseconds] Timestamp of this measurement in AP clock in microseconds (NaN if unknown)*/
 uint32_t age; /*< [microseconds] Age of the measurement in microseconds (NaN if unknown)*/
 float x; /*< [meters] X position of the tag in PLANCK_FRAME (NaN if unknown)*/
 float y; /*< [meters] Y position of the tag in PLANCK_FRAME (NaN if unknown)*/
 float z; /*< [meters] Z position of the tag in PLANCK_FRAME (NaN if unknown)*/
 float pos_covariance[6]; /*<  Row-major representation of position 3x3 cross-covariance matrix upper right triangle (states: x, y, z so entries are R_xx, R_xy, R_xz, R_yy, R_yz, Rzz).If unknown, assign NaN value to first element in the array.*/
 float quaternion[4]; /*<  Attitude quaternion of the tag in PLANCK_FRAME (w, x, y, z order, zero-rotation is 1, 0, 0, 0).If unknown, assign NaN value to first element in the array.*/
 float quat_covariance[10]; /*<  Row-major representation of attitude quaternion 4x4 cross-covariance matrix upper right triangle (states: w, x, y, z so entries are R_ww, R_wx, R_wy, R_wz, R_xx, R_xy, R_xz, R_yy, Ry_zx, R_zz).If unknown, assign NaN value to first element in the array.*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t camera; /*<  Camera input for this measurement*/
 uint8_t frame; /*<  Coordinate frame used for following fields.*/
}) mavlink_planck_landing_tag_measurement_t;

#define MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN 108
#define MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_MIN_LEN 108
#define MAVLINK_MSG_ID_9009_LEN 108
#define MAVLINK_MSG_ID_9009_MIN_LEN 108

#define MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_CRC 72
#define MAVLINK_MSG_ID_9009_CRC 72

#define MAVLINK_MSG_PLANCK_LANDING_TAG_MEASUREMENT_FIELD_POS_COVARIANCE_LEN 6
#define MAVLINK_MSG_PLANCK_LANDING_TAG_MEASUREMENT_FIELD_QUATERNION_LEN 4
#define MAVLINK_MSG_PLANCK_LANDING_TAG_MEASUREMENT_FIELD_QUAT_COVARIANCE_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PLANCK_LANDING_TAG_MEASUREMENT { \
    9009, \
    "PLANCK_LANDING_TAG_MEASUREMENT", \
    12, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_planck_landing_tag_measurement_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_planck_landing_tag_measurement_t, target_component) }, \
         { "ap_timestamp_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_planck_landing_tag_measurement_t, ap_timestamp_us) }, \
         { "age", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_planck_landing_tag_measurement_t, age) }, \
         { "camera", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_planck_landing_tag_measurement_t, camera) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 107, offsetof(mavlink_planck_landing_tag_measurement_t, frame) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_planck_landing_tag_measurement_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_planck_landing_tag_measurement_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_planck_landing_tag_measurement_t, z) }, \
         { "pos_covariance", NULL, MAVLINK_TYPE_FLOAT, 6, 24, offsetof(mavlink_planck_landing_tag_measurement_t, pos_covariance) }, \
         { "quaternion", NULL, MAVLINK_TYPE_FLOAT, 4, 48, offsetof(mavlink_planck_landing_tag_measurement_t, quaternion) }, \
         { "quat_covariance", NULL, MAVLINK_TYPE_FLOAT, 10, 64, offsetof(mavlink_planck_landing_tag_measurement_t, quat_covariance) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PLANCK_LANDING_TAG_MEASUREMENT { \
    "PLANCK_LANDING_TAG_MEASUREMENT", \
    12, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_planck_landing_tag_measurement_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_planck_landing_tag_measurement_t, target_component) }, \
         { "ap_timestamp_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_planck_landing_tag_measurement_t, ap_timestamp_us) }, \
         { "age", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_planck_landing_tag_measurement_t, age) }, \
         { "camera", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_planck_landing_tag_measurement_t, camera) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 107, offsetof(mavlink_planck_landing_tag_measurement_t, frame) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_planck_landing_tag_measurement_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_planck_landing_tag_measurement_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_planck_landing_tag_measurement_t, z) }, \
         { "pos_covariance", NULL, MAVLINK_TYPE_FLOAT, 6, 24, offsetof(mavlink_planck_landing_tag_measurement_t, pos_covariance) }, \
         { "quaternion", NULL, MAVLINK_TYPE_FLOAT, 4, 48, offsetof(mavlink_planck_landing_tag_measurement_t, quaternion) }, \
         { "quat_covariance", NULL, MAVLINK_TYPE_FLOAT, 10, 64, offsetof(mavlink_planck_landing_tag_measurement_t, quat_covariance) }, \
         } \
}
#endif

/**
 * @brief Pack a planck_landing_tag_measurement message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param ap_timestamp_us [microseconds] Timestamp of this measurement in AP clock in microseconds (NaN if unknown)
 * @param age [microseconds] Age of the measurement in microseconds (NaN if unknown)
 * @param camera  Camera input for this measurement
 * @param frame  Coordinate frame used for following fields.
 * @param x [meters] X position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param y [meters] Y position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param z [meters] Z position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param pos_covariance  Row-major representation of position 3x3 cross-covariance matrix upper right triangle (states: x, y, z so entries are R_xx, R_xy, R_xz, R_yy, R_yz, Rzz).If unknown, assign NaN value to first element in the array.
 * @param quaternion  Attitude quaternion of the tag in PLANCK_FRAME (w, x, y, z order, zero-rotation is 1, 0, 0, 0).If unknown, assign NaN value to first element in the array.
 * @param quat_covariance  Row-major representation of attitude quaternion 4x4 cross-covariance matrix upper right triangle (states: w, x, y, z so entries are R_ww, R_wx, R_wy, R_wz, R_xx, R_xy, R_xz, R_yy, Ry_zx, R_zz).If unknown, assign NaN value to first element in the array.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_planck_landing_tag_measurement_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint64_t ap_timestamp_us, uint32_t age, uint8_t camera, uint8_t frame, float x, float y, float z, const float *pos_covariance, const float *quaternion, const float *quat_covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN];
    _mav_put_uint64_t(buf, 0, ap_timestamp_us);
    _mav_put_uint32_t(buf, 8, age);
    _mav_put_float(buf, 12, x);
    _mav_put_float(buf, 16, y);
    _mav_put_float(buf, 20, z);
    _mav_put_uint8_t(buf, 104, target_system);
    _mav_put_uint8_t(buf, 105, target_component);
    _mav_put_uint8_t(buf, 106, camera);
    _mav_put_uint8_t(buf, 107, frame);
    _mav_put_float_array(buf, 24, pos_covariance, 6);
    _mav_put_float_array(buf, 48, quaternion, 4);
    _mav_put_float_array(buf, 64, quat_covariance, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN);
#else
    mavlink_planck_landing_tag_measurement_t packet;
    packet.ap_timestamp_us = ap_timestamp_us;
    packet.age = age;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.camera = camera;
    packet.frame = frame;
    mav_array_memcpy(packet.pos_covariance, pos_covariance, sizeof(float)*6);
    mav_array_memcpy(packet.quaternion, quaternion, sizeof(float)*4);
    mav_array_memcpy(packet.quat_covariance, quat_covariance, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_CRC);
}

/**
 * @brief Pack a planck_landing_tag_measurement message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param ap_timestamp_us [microseconds] Timestamp of this measurement in AP clock in microseconds (NaN if unknown)
 * @param age [microseconds] Age of the measurement in microseconds (NaN if unknown)
 * @param camera  Camera input for this measurement
 * @param frame  Coordinate frame used for following fields.
 * @param x [meters] X position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param y [meters] Y position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param z [meters] Z position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param pos_covariance  Row-major representation of position 3x3 cross-covariance matrix upper right triangle (states: x, y, z so entries are R_xx, R_xy, R_xz, R_yy, R_yz, Rzz).If unknown, assign NaN value to first element in the array.
 * @param quaternion  Attitude quaternion of the tag in PLANCK_FRAME (w, x, y, z order, zero-rotation is 1, 0, 0, 0).If unknown, assign NaN value to first element in the array.
 * @param quat_covariance  Row-major representation of attitude quaternion 4x4 cross-covariance matrix upper right triangle (states: w, x, y, z so entries are R_ww, R_wx, R_wy, R_wz, R_xx, R_xy, R_xz, R_yy, Ry_zx, R_zz).If unknown, assign NaN value to first element in the array.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_planck_landing_tag_measurement_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint64_t ap_timestamp_us,uint32_t age,uint8_t camera,uint8_t frame,float x,float y,float z,const float *pos_covariance,const float *quaternion,const float *quat_covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN];
    _mav_put_uint64_t(buf, 0, ap_timestamp_us);
    _mav_put_uint32_t(buf, 8, age);
    _mav_put_float(buf, 12, x);
    _mav_put_float(buf, 16, y);
    _mav_put_float(buf, 20, z);
    _mav_put_uint8_t(buf, 104, target_system);
    _mav_put_uint8_t(buf, 105, target_component);
    _mav_put_uint8_t(buf, 106, camera);
    _mav_put_uint8_t(buf, 107, frame);
    _mav_put_float_array(buf, 24, pos_covariance, 6);
    _mav_put_float_array(buf, 48, quaternion, 4);
    _mav_put_float_array(buf, 64, quat_covariance, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN);
#else
    mavlink_planck_landing_tag_measurement_t packet;
    packet.ap_timestamp_us = ap_timestamp_us;
    packet.age = age;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.camera = camera;
    packet.frame = frame;
    mav_array_memcpy(packet.pos_covariance, pos_covariance, sizeof(float)*6);
    mav_array_memcpy(packet.quaternion, quaternion, sizeof(float)*4);
    mav_array_memcpy(packet.quat_covariance, quat_covariance, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_CRC);
}

/**
 * @brief Encode a planck_landing_tag_measurement struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param planck_landing_tag_measurement C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_planck_landing_tag_measurement_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_planck_landing_tag_measurement_t* planck_landing_tag_measurement)
{
    return mavlink_msg_planck_landing_tag_measurement_pack(system_id, component_id, msg, planck_landing_tag_measurement->target_system, planck_landing_tag_measurement->target_component, planck_landing_tag_measurement->ap_timestamp_us, planck_landing_tag_measurement->age, planck_landing_tag_measurement->camera, planck_landing_tag_measurement->frame, planck_landing_tag_measurement->x, planck_landing_tag_measurement->y, planck_landing_tag_measurement->z, planck_landing_tag_measurement->pos_covariance, planck_landing_tag_measurement->quaternion, planck_landing_tag_measurement->quat_covariance);
}

/**
 * @brief Encode a planck_landing_tag_measurement struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param planck_landing_tag_measurement C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_planck_landing_tag_measurement_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_planck_landing_tag_measurement_t* planck_landing_tag_measurement)
{
    return mavlink_msg_planck_landing_tag_measurement_pack_chan(system_id, component_id, chan, msg, planck_landing_tag_measurement->target_system, planck_landing_tag_measurement->target_component, planck_landing_tag_measurement->ap_timestamp_us, planck_landing_tag_measurement->age, planck_landing_tag_measurement->camera, planck_landing_tag_measurement->frame, planck_landing_tag_measurement->x, planck_landing_tag_measurement->y, planck_landing_tag_measurement->z, planck_landing_tag_measurement->pos_covariance, planck_landing_tag_measurement->quaternion, planck_landing_tag_measurement->quat_covariance);
}

/**
 * @brief Send a planck_landing_tag_measurement message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param ap_timestamp_us [microseconds] Timestamp of this measurement in AP clock in microseconds (NaN if unknown)
 * @param age [microseconds] Age of the measurement in microseconds (NaN if unknown)
 * @param camera  Camera input for this measurement
 * @param frame  Coordinate frame used for following fields.
 * @param x [meters] X position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param y [meters] Y position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param z [meters] Z position of the tag in PLANCK_FRAME (NaN if unknown)
 * @param pos_covariance  Row-major representation of position 3x3 cross-covariance matrix upper right triangle (states: x, y, z so entries are R_xx, R_xy, R_xz, R_yy, R_yz, Rzz).If unknown, assign NaN value to first element in the array.
 * @param quaternion  Attitude quaternion of the tag in PLANCK_FRAME (w, x, y, z order, zero-rotation is 1, 0, 0, 0).If unknown, assign NaN value to first element in the array.
 * @param quat_covariance  Row-major representation of attitude quaternion 4x4 cross-covariance matrix upper right triangle (states: w, x, y, z so entries are R_ww, R_wx, R_wy, R_wz, R_xx, R_xy, R_xz, R_yy, Ry_zx, R_zz).If unknown, assign NaN value to first element in the array.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_planck_landing_tag_measurement_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint64_t ap_timestamp_us, uint32_t age, uint8_t camera, uint8_t frame, float x, float y, float z, const float *pos_covariance, const float *quaternion, const float *quat_covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN];
    _mav_put_uint64_t(buf, 0, ap_timestamp_us);
    _mav_put_uint32_t(buf, 8, age);
    _mav_put_float(buf, 12, x);
    _mav_put_float(buf, 16, y);
    _mav_put_float(buf, 20, z);
    _mav_put_uint8_t(buf, 104, target_system);
    _mav_put_uint8_t(buf, 105, target_component);
    _mav_put_uint8_t(buf, 106, camera);
    _mav_put_uint8_t(buf, 107, frame);
    _mav_put_float_array(buf, 24, pos_covariance, 6);
    _mav_put_float_array(buf, 48, quaternion, 4);
    _mav_put_float_array(buf, 64, quat_covariance, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT, buf, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_CRC);
#else
    mavlink_planck_landing_tag_measurement_t packet;
    packet.ap_timestamp_us = ap_timestamp_us;
    packet.age = age;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.camera = camera;
    packet.frame = frame;
    mav_array_memcpy(packet.pos_covariance, pos_covariance, sizeof(float)*6);
    mav_array_memcpy(packet.quaternion, quaternion, sizeof(float)*4);
    mav_array_memcpy(packet.quat_covariance, quat_covariance, sizeof(float)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT, (const char *)&packet, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_CRC);
#endif
}

/**
 * @brief Send a planck_landing_tag_measurement message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_planck_landing_tag_measurement_send_struct(mavlink_channel_t chan, const mavlink_planck_landing_tag_measurement_t* planck_landing_tag_measurement)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_planck_landing_tag_measurement_send(chan, planck_landing_tag_measurement->target_system, planck_landing_tag_measurement->target_component, planck_landing_tag_measurement->ap_timestamp_us, planck_landing_tag_measurement->age, planck_landing_tag_measurement->camera, planck_landing_tag_measurement->frame, planck_landing_tag_measurement->x, planck_landing_tag_measurement->y, planck_landing_tag_measurement->z, planck_landing_tag_measurement->pos_covariance, planck_landing_tag_measurement->quaternion, planck_landing_tag_measurement->quat_covariance);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT, (const char *)planck_landing_tag_measurement, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_CRC);
#endif
}

#if MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_planck_landing_tag_measurement_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint64_t ap_timestamp_us, uint32_t age, uint8_t camera, uint8_t frame, float x, float y, float z, const float *pos_covariance, const float *quaternion, const float *quat_covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, ap_timestamp_us);
    _mav_put_uint32_t(buf, 8, age);
    _mav_put_float(buf, 12, x);
    _mav_put_float(buf, 16, y);
    _mav_put_float(buf, 20, z);
    _mav_put_uint8_t(buf, 104, target_system);
    _mav_put_uint8_t(buf, 105, target_component);
    _mav_put_uint8_t(buf, 106, camera);
    _mav_put_uint8_t(buf, 107, frame);
    _mav_put_float_array(buf, 24, pos_covariance, 6);
    _mav_put_float_array(buf, 48, quaternion, 4);
    _mav_put_float_array(buf, 64, quat_covariance, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT, buf, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_CRC);
#else
    mavlink_planck_landing_tag_measurement_t *packet = (mavlink_planck_landing_tag_measurement_t *)msgbuf;
    packet->ap_timestamp_us = ap_timestamp_us;
    packet->age = age;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->camera = camera;
    packet->frame = frame;
    mav_array_memcpy(packet->pos_covariance, pos_covariance, sizeof(float)*6);
    mav_array_memcpy(packet->quaternion, quaternion, sizeof(float)*4);
    mav_array_memcpy(packet->quat_covariance, quat_covariance, sizeof(float)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT, (const char *)packet, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_CRC);
#endif
}
#endif

#endif

// MESSAGE PLANCK_LANDING_TAG_MEASUREMENT UNPACKING


/**
 * @brief Get field target_system from planck_landing_tag_measurement message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_planck_landing_tag_measurement_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  104);
}

/**
 * @brief Get field target_component from planck_landing_tag_measurement message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_planck_landing_tag_measurement_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  105);
}

/**
 * @brief Get field ap_timestamp_us from planck_landing_tag_measurement message
 *
 * @return [microseconds] Timestamp of this measurement in AP clock in microseconds (NaN if unknown)
 */
static inline uint64_t mavlink_msg_planck_landing_tag_measurement_get_ap_timestamp_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field age from planck_landing_tag_measurement message
 *
 * @return [microseconds] Age of the measurement in microseconds (NaN if unknown)
 */
static inline uint32_t mavlink_msg_planck_landing_tag_measurement_get_age(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field camera from planck_landing_tag_measurement message
 *
 * @return  Camera input for this measurement
 */
static inline uint8_t mavlink_msg_planck_landing_tag_measurement_get_camera(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  106);
}

/**
 * @brief Get field frame from planck_landing_tag_measurement message
 *
 * @return  Coordinate frame used for following fields.
 */
static inline uint8_t mavlink_msg_planck_landing_tag_measurement_get_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  107);
}

/**
 * @brief Get field x from planck_landing_tag_measurement message
 *
 * @return [meters] X position of the tag in PLANCK_FRAME (NaN if unknown)
 */
static inline float mavlink_msg_planck_landing_tag_measurement_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field y from planck_landing_tag_measurement message
 *
 * @return [meters] Y position of the tag in PLANCK_FRAME (NaN if unknown)
 */
static inline float mavlink_msg_planck_landing_tag_measurement_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field z from planck_landing_tag_measurement message
 *
 * @return [meters] Z position of the tag in PLANCK_FRAME (NaN if unknown)
 */
static inline float mavlink_msg_planck_landing_tag_measurement_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pos_covariance from planck_landing_tag_measurement message
 *
 * @return  Row-major representation of position 3x3 cross-covariance matrix upper right triangle (states: x, y, z so entries are R_xx, R_xy, R_xz, R_yy, R_yz, Rzz).If unknown, assign NaN value to first element in the array.
 */
static inline uint16_t mavlink_msg_planck_landing_tag_measurement_get_pos_covariance(const mavlink_message_t* msg, float *pos_covariance)
{
    return _MAV_RETURN_float_array(msg, pos_covariance, 6,  24);
}

/**
 * @brief Get field quaternion from planck_landing_tag_measurement message
 *
 * @return  Attitude quaternion of the tag in PLANCK_FRAME (w, x, y, z order, zero-rotation is 1, 0, 0, 0).If unknown, assign NaN value to first element in the array.
 */
static inline uint16_t mavlink_msg_planck_landing_tag_measurement_get_quaternion(const mavlink_message_t* msg, float *quaternion)
{
    return _MAV_RETURN_float_array(msg, quaternion, 4,  48);
}

/**
 * @brief Get field quat_covariance from planck_landing_tag_measurement message
 *
 * @return  Row-major representation of attitude quaternion 4x4 cross-covariance matrix upper right triangle (states: w, x, y, z so entries are R_ww, R_wx, R_wy, R_wz, R_xx, R_xy, R_xz, R_yy, Ry_zx, R_zz).If unknown, assign NaN value to first element in the array.
 */
static inline uint16_t mavlink_msg_planck_landing_tag_measurement_get_quat_covariance(const mavlink_message_t* msg, float *quat_covariance)
{
    return _MAV_RETURN_float_array(msg, quat_covariance, 10,  64);
}

/**
 * @brief Decode a planck_landing_tag_measurement message into a struct
 *
 * @param msg The message to decode
 * @param planck_landing_tag_measurement C-struct to decode the message contents into
 */
static inline void mavlink_msg_planck_landing_tag_measurement_decode(const mavlink_message_t* msg, mavlink_planck_landing_tag_measurement_t* planck_landing_tag_measurement)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    planck_landing_tag_measurement->ap_timestamp_us = mavlink_msg_planck_landing_tag_measurement_get_ap_timestamp_us(msg);
    planck_landing_tag_measurement->age = mavlink_msg_planck_landing_tag_measurement_get_age(msg);
    planck_landing_tag_measurement->x = mavlink_msg_planck_landing_tag_measurement_get_x(msg);
    planck_landing_tag_measurement->y = mavlink_msg_planck_landing_tag_measurement_get_y(msg);
    planck_landing_tag_measurement->z = mavlink_msg_planck_landing_tag_measurement_get_z(msg);
    mavlink_msg_planck_landing_tag_measurement_get_pos_covariance(msg, planck_landing_tag_measurement->pos_covariance);
    mavlink_msg_planck_landing_tag_measurement_get_quaternion(msg, planck_landing_tag_measurement->quaternion);
    mavlink_msg_planck_landing_tag_measurement_get_quat_covariance(msg, planck_landing_tag_measurement->quat_covariance);
    planck_landing_tag_measurement->target_system = mavlink_msg_planck_landing_tag_measurement_get_target_system(msg);
    planck_landing_tag_measurement->target_component = mavlink_msg_planck_landing_tag_measurement_get_target_component(msg);
    planck_landing_tag_measurement->camera = mavlink_msg_planck_landing_tag_measurement_get_camera(msg);
    planck_landing_tag_measurement->frame = mavlink_msg_planck_landing_tag_measurement_get_frame(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN? msg->len : MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN;
        memset(planck_landing_tag_measurement, 0, MAVLINK_MSG_ID_PLANCK_LANDING_TAG_MEASUREMENT_LEN);
    memcpy(planck_landing_tag_measurement, _MAV_PAYLOAD(msg), len);
#endif
}
