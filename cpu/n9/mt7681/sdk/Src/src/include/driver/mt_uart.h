
#ifndef _MT_UART_H_
#define _MT_UART_H_


void UART_PutChar(uint8 ch);
int32 UART_GetChar(uint8* ch);
int UART_KbdHit(void);
int UART_LSROverErr(void);

#endif /* _MT_UART_H_ */

