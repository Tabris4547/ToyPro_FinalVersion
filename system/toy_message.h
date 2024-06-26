#ifndef _TOY_MESSAGE_H_
#define _TOY_MESSAGE_H_

#include <unistd.h>

typedef struct {
    unsigned int msg_type;
    unsigned int param1;
    unsigned int param2;
    void *param3;
} toy_msg_t;

#define MESSAGE_DATA_MAX_LEN 50
#define MESSAGE_HOSTNAME_MAX_LEN 32

enum ROBOT_MESSAGE_ID {
    MESSAGE_ID_EXIT = 0,
    MESSAGE_ID_INFO,
    MESSAGE_ID_ENGINE,
    MESSAGE_ID_MAX
};

typedef struct rotbot_info {
	unsigned int	id;
	char			hostname[MESSAGE_HOSTNAME_MAX_LEN];
	unsigned int	temperature;
} rotbot_info_t; //40 byte

typedef struct motor_control {
	unsigned int	id;     // 0: Left, 1: Right
	unsigned int	speed;  // 0: halt, 1~100: speed 
} motor_control_t; //8 byte

union robot_message_data {
    rotbot_info_t info;
    motor_control_t motor;
	char data[MESSAGE_DATA_MAX_LEN];
};

typedef struct robot_message {
    unsigned int id;
    union robot_message_data data;
} robot_message_t;

#define CMD_ROBOT_INFO 0x0011

#endif /* _TOY_MESSAGE_H_ */