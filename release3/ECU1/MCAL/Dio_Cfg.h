/**************************
 *
 * File Name: Dio_Cfg.h
 *
 * Description: Header file for Pre Compile Configurations.
 *
 * Author: Youssef Sherif
 *
 ***************************/

#ifndef DIO_CFG_H
#define DIO_CFG_H

/* Pre-compile option for presence of Dio_FlipChannel API */
#define DIO_FLIP_CHANNEL_API                (STD_ON)

/* Number of the configured Dio Channels */
#define DIO_CONFIGURED_CHANNLES              (5U)

/* Channel Index in the array of structures in Dio_PBcfg.c */
#define DioConf_SW1_CHANNEL_ID_INDEX         (uint8)0x00
#define DioConf_SW2_CHANNEL_ID_INDEX         (uint8)0x01
#define DioConf_LED1_CHANNEL_ID_INDEX        (uint8)0x02
#define DioConf_LED2_CHANNEL_ID_INDEX        (uint8)0x03
#define DioConf_LED3_CHANNEL_ID_INDEX        (uint8)0x04

/* DIO Configured Port ID's  */
#define DioConf_SW1_PORT_NUM                 (Dio_PortType)5 /* PORTF */
#define DioConf_SW2_PORT_NUM                 (Dio_PortType)5 /* PORTF */
#define DioConf_LED1_PORT_NUM                (Dio_PortType)5  /* PORTF */
#define DioConf_LED2_PORT_NUM                (Dio_PortType)5  /* PORTF */
#define DioConf_LED3_PORT_NUM                (Dio_PortType)5  /* PORTF */


/* DIO Configured Channel ID's */
#define DioConf_SW1_CHANNEL_NUM              (Dio_ChannelType)4 /* Pin 4 in PORTF */
#define DioConf_SW2_CHANNEL_NUM              (Dio_ChannelType)0 /* Pin 0 in PORTF */
#define DioConf_LED1_CHANNEL_NUM             (Dio_ChannelType)1 /* Pin 1 in PORTF */
#define DioConf_LED2_CHANNEL_NUM             (Dio_ChannelType)2 /* Pin 2 in PORTF */
#define DioConf_LED3_CHANNEL_NUM             (Dio_ChannelType)3 /* Pin 3 in PORTF */

#endif /* DIO_CFG_H */
