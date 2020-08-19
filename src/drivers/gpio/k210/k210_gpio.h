/**
 * @file k210_gpio.h
 * @brief
 * @author sksat <sksat@sksat.net>
 * @version 0.1
 * @date 2020-08-15
 */

#ifndef SRC_DRIVERS_GPIO_K210_GPIO_H_
#define SRC_DRIVERS_GPIO_K210_GPIO_H_

#include <drivers/gpio/k210/fpioa.h>

#define GPIO_BASE_ADDR	(0x50200000U)
#define GPIO_NUM_PIN	8

typedef union {
	uint32_t reg32[1];
	uint16_t reg16[2];
	uint8_t  reg8[4];
} __attribute__((packed, aligned(4))) k210_gpio_reg_t;

typedef struct {
	k210_gpio_reg_t enable;
	k210_gpio_reg_t mask;
	k210_gpio_reg_t level;
	k210_gpio_reg_t porality;
	k210_gpio_reg_t status;
	k210_gpio_reg_t status_raw;
	k210_gpio_reg_t debounce;
	k210_gpio_reg_t clear;
} __attribute__((packed, aligned(4))) k210_gpio_interrupt_t;

typedef struct {
	k210_gpio_reg_t data_out;
	k210_gpio_reg_t dir;
	k210_gpio_reg_t src;
	uint32_t unused[9];
	k210_gpio_interrupt_t interrupt;
	k210_gpio_reg_t data_in;
	uint32_t unused1[3];
	k210_gpio_reg_t sync_level;
	k210_gpio_reg_t id_code;
	k210_gpio_reg_t interrupt_bothedge;
} __attribute__((packed, aligned(4))) k210_gpio_t;

static int k210_gpio_init(void);
void k210_gpio_set_dir(uint8_t pin, uint8_t dir);

#endif
