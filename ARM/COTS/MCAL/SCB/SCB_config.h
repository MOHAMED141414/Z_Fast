/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:7/3/2025            *****************************/
/************ SWC: SCB_config.h        *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/




#ifndef SCB_CONFIG_H_
#define SCB_CONFIG_H_
/*
OPTIONS:
  - SCB_16GROUP_0SUB:  16 priority levels for group and 0 sub-priority levels.
  - SCB_8GROUP_2SUB :  8 priority levels for group and 2 sub-priority levels.
  - SCB_4GROUP_4SUB :  4 priority levels for group and 4 sub-priority levels.
  - SCB_2GROUP_8SUB :  2 priority levels for group and 8 sub-priority levels.
  - SCB_0GROUP_16SUB:  No priority grouping, 16 priority levels with no sub-prioritization.
*/


#define SCB_PRIORITY_GROUPING  SCB_16GROUP_0SUB



#endif /**< SCB_CONFIG_H_ */