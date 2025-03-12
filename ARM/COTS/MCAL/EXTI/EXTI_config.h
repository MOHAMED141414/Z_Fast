/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:3/8/2025            *****************************/
/************ SWC: EXTI_config.h       *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/

#ifndef EXTI_CONFIG_H
#define EXTI_CONFIG_H


EXTI_Configuration_t EXTI_Configurations[EXTI_LINES_COUNT] = {

    /**< Configuration for EXTI Line 0 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },

    /* Configuration for EXTI Line 1 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_FALLING_EDGE,
        .LineEnabled  = EXTI_LINE_DISABLED
    },

    /* Configuration for EXTI Line 2 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 3 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 4 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 5 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 6 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 7 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 8 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 9 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 10 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 11 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 12 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 13 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 14 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    },
    
    /* Configuration for EXTI Line 15 */
    {
        .SetCallback  = NULL,
        .GPIO_PortMap = EXTI_GPIO_NONE,
        .TriggerType  = EXTI_BOTH_EDGES,
        .LineEnabled  = EXTI_LINE_DISABLED
    }

};
#endif/*EXTI_CONFIG_H*/