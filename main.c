/*
 * main.c
 *
 *  Created on: Jul 25, 2021
 *      Author: phucngo6996
 */

#include <stdio.h>
#include <stdint.h>

#include <util/delay.h>
#include <avr/io.h>

#include <avr/Serial2.h>

int main(){
  //Initialize for USART
  USART_init();
  while(1){
    //Send Char one by one with singel quote
    USART_send('H',0);
    USART_send('A',0);
    USART_send('C',0);
    USART_send('K',0);
    USART_send('E',0);
    USART_send('R',0);
    USART_send(' ',0);
    USART_send('P',0);
    USART_send('H',0);
    USART_send('U',0);
    USART_send('C',0);
    USART_send(' ',0);
    USART_send('N',0);
    USART_send('G',0);
    USART_send('O',0);
    USART_send('\n',0);
    //Send String with double quotes
    USART_putstring("DaTroLai",0);
    USART_putstring("\n",0);
    //Delay for 1s
    _delay_ms(1000);
	}
}

