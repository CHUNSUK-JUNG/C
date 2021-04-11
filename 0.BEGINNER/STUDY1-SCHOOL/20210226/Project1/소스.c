#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef enum {
    GPIO_PIN_RESET = 0,
    GPIO_PIN_SET
} GPIO_PinState;

typedef struct {
    volatile uint32_t CRL;
    volatile uint32_t CRH;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t BRR;
    volatile uint32_t LCKR;
} GPIO_TypeDef;

#define GPIO_PIN_0      ((uint16_t)0x0001)  /* Pin 0 selected   1 */
#define GPIO_PIN_1      ((uint16_t)0x0002)  /* Pin 1 selected   2 */
#define GPIO_PIN_2      ((uint16_t)0x0004)  /* Pin 2 selected   4 */
#define GPIO_PIN_3      ((uint16_t)0x0008)  /* Pin 3 selected   8 */
#define GPIO_PIN_4      ((uint16_t)0x0010)  /* Pin 4 selected   16 */
#define GPIO_PIN_5      ((uint16_t)0x0020)  /* Pin 5 selected   32 */
#define GPIO_PIN_6      ((uint16_t)0x0040)  /* Pin 6 selected   64 */
#define GPIO_PIN_7      ((uint16_t)0x0080)  /* Pin 7 selected   128 */
#define GPIO_PIN_8      ((uint16_t)0x0100)  /* Pin 8 selected   256 */
#define GPIO_PIN_9      ((uint16_t)0x0200)  /* Pin 9 selected   512 */
#define GPIO_PIN_10     ((uint16_t)0x0400)  /* Pin 10 selected  1024 */
#define GPIO_PIN_11     ((uint16_t)0x0800)  /* Pin 11 selected  2048 */
#define GPIO_PIN_12     ((uint16_t)0x1000)  /* Pin 12 selected  4096 */
#define GPIO_PIN_13     ((uint16_t)0x2000)  /* Pin 13 selected   */
#define GPIO_PIN_14     ((uint16_t)0x4000)  /* Pin 14 selected   */
#define GPIO_PIN_15     ((uint16_t)0x8000)  /* Pin 15 selected   */
#define GPIO_PIN_All    ((uint16_t)0xFFFF)  /* All pins selected */

void HAL_GPIO_WritePin(GPIO_TypeDef* PIOB_BASE, uint16_t GPIO_PIN, GPIO_PinState GPIO_PIN_SET) {
    printf("%08x \n", PIOB_BASE->CRL);
    printf("%08x \n", PIOB_BASE->CRH);
    printf("%08x \n", PIOB_BASE->IDR);
    printf("%08x \n", PIOB_BASE->ODR);
    printf("%08x \n", PIOB_BASE->BSRR);
    printf("%08x \n", PIOB_BASE->BRR);
    printf("%08x \n\n", PIOB_BASE->LCKR);

    if (GPIO_PIN_SET != GPIO_PIN_RESET) {
        PIOB_BASE->BSRR = (uint32_t)GPIO_PIN;
        printf("%08x \n\n", PIOB_BASE->BSRR);
    }
    else {
        PIOB_BASE->BSRR = (uint32_t)GPIO_PIN << 16;
        printf("%08x \n", PIOB_BASE->BSRR);
    }
}

int main(int argc, char* argv[]) {
    unsigned char a;
    GPIO_TypeDef* GPIOB_BASE;
    uint32_t  baseValue[7] = { 0x1111,0xAAAA,0xBBBB,0xCCCC,0x0000,0xEEEE,0xFFFF };
    GPIOB_BASE = (GPIO_TypeDef*)baseValue;
    HAL_GPIO_WritePin(GPIOB_BASE, GPIO_PIN_15, GPIO_PIN_SET);
    system("PAUSE");
    return 0;
}