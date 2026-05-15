#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>

int El[8] = {
0b00011000,0b00111100,0b01100110,0b01100110,0b01100110,0b01100110,0b01100110,0b01100110,
	};	
int A[8] = {
0b00011000,0b00111100,0b01100110,0b01100110,0b01111110,0b01111110,0b01100110,0b01100110,
	};		
int One[8] = {
0b00001000,0b00011000,0b00101000,0b01001000,0b00001000,0b00001000,0b00001000,0b00111110
	};	
int I[8] = {
0b00111100,0b00011000,0b00011000,0b00011000,0b00011000,0b00011000,0b00011000,0b00111100
	};		
int Kh[8] = {
0b10000001,0b01000010,0b00100100,0b00011000,0b00011000,0b00100100,0b01000010,0b10000001
	};		
int F[8] = {
0b00011000,0b01111110,0b10011001,0b10011001,0b01111110,0b00011000,0b00011000,0b00111100
	};		
int O[8] = {
0b00000000,0b00000000,0b00000000,0b00011000,0b00011000,0b00000000,0b00000000,0b00000000,
	};	
int Oo[8] = {
0b00000000,0b00000000,0b00111100,0b00100100,0b00100100,0b00111100,0b00000000,0b00000000,
	};
int Ooo[8] = {
0b00000000,0b01111110,0b01000010,0b01011010,0b01011010,0b01000010,0b01111110,0b00000000,
	};
int Oooo[8] = {
0b11111111,0b10000001,0b10111101,0b10100101,0b10100101,0b10111101,0b10000001,
0b11111111,
	};


int main() {
	DDRB = 0xFF;
	PORTB = 0x00;
	DDRC = 0x00;
	PORTC = 0xFF;
	DDRD = 0xFF;
	PORTD = 0x00;
	
	
	while(1) {
		if (PINC & (1 << PC2)){	
		if (PINC & (1 << PC1)){
		if (PINC & (1 << PC0)){ 
			for (int j = 0; j <= 50; j++){
				for (int i = 0; i <= 7; i++) {
					PORTB = 1 << i;
					PORTD = ~El[i]; // Л
					_delay_ms(0.1);
					}		
					}			
			_delay_ms(10);	
			for (int j = 0; j <= 50; j++){
				for (int i = 0; i <= 7; i++){
					PORTB = 1 << i;
					PORTD = ~A[i]; // А
					_delay_ms(0.1);
					}
				}
			_delay_ms(10);	
			for (int o = 0; o <= 1; o++){
				_delay_ms(10);	
				for (int j = 0; j <= 50; j++){
						for (int i = 0; i <= 7; i++){
							PORTB = 1 << i;
							PORTD = ~One[i]; // 11
							_delay_ms(0.1);
							}
							}
					}
					_delay_ms(10);	
// PS0
			} else { 
				for (int j = 0; j <= 50; j++){
				for (int i = 0; i <= 7; i++) {
					PORTB = 1 << i;
					PORTD = ~I[i]; // І
					_delay_ms(0.1);
					}		
				}			
			_delay_ms(10);	
			for (int j = 0; j <= 50; j++){
				for (int i = 0; i <= 7; i++){
					PORTB = 1 << i;
					PORTD = ~Kh[i]; // Х
					_delay_ms(0.1);
					}
			}
			_delay_ms(10);	
			for (int j = 0; j <= 50; j++){
				for (int i = 0; i <= 7; i++){
					PORTB = 1 << i;
					PORTD = ~F[i]; // ф 
					_delay_ms(0.1);
				}
			}
		}
}
// PS1
else{
	PORTB =  (1<<0); for (int i=7; i>=1; i--) {PORTD = ~(1<<i); _delay_ms(15);}// Raw right
	PORTD = ~(1<<0); for (int i=0; i<=1; i++) {PORTB =  (1<<i); _delay_ms(15);}// Col down
	PORTB =  (1<<1); for (int i=0; i<=7; i++) {PORTD = ~(1<<i); _delay_ms(15);}// Raw left
	PORTD = ~(1<<7); for (int i=1; i<=1; i++) {PORTB =  (1<<i); _delay_ms(15);}// Col down
	PORTB =  (1<<2); for (int i=7; i>=1; i--) {PORTD = ~(1<<i); _delay_ms(15);}// Raw right
	PORTD = ~(1<<0); for (int i=2; i<=3; i++) {PORTB =  (1<<i); _delay_ms(15);}// Col down
	PORTB =  (1<<3); for (int i=0; i<=7; i++) {PORTD = ~(1<<i); _delay_ms(15);}// Raw left
	PORTD = ~(1<<7); for (int i=3; i<=4; i++) {PORTB =  (1<<i); _delay_ms(15);}// Col down
	PORTB =  (1<<4); for (int i=7; i>=1; i--) {PORTD = ~(1<<i); _delay_ms(15);}// Raw right
	PORTD = ~(1<<0); for (int i=4; i<=5; i++) {PORTB =  (1<<i); _delay_ms(15);}// Col down
	PORTB =  (1<<5); for (int i=0; i<=7; i++) {PORTD = ~(1<<i); _delay_ms(15);}// Raw left
	PORTD = ~(1<<7); for (int i=5; i<=6; i++) {PORTB =  (1<<i); _delay_ms(15);}// Col down
	PORTB =  (1<<6); for (int i=7; i>=1; i--) {PORTD = ~(1<<i); _delay_ms(15);}// Raw right
	PORTD = ~(1<<0); for (int i=6; i<=7; i++) {PORTB =  (1<<i); _delay_ms(15);}// Col down
	PORTB =  (1<<7); for (int i=0; i<=7; i++) {PORTD = ~(1<<i); _delay_ms(15);}// Raw left			
		}	
}
// PS2
			else{
				for (int j = 0; j <= 50; j++){
					for (int i = 0; i <= 7; i++) {
						PORTB = 1 << i;
						PORTD = ~O[i]; // Л
						_delay_ms(0.1);
						}		
						}			
				for (int j = 0; j <= 20; j++){
					for (int i = 0; i <= 7; i++){
						PORTB = 1 << i;
						PORTD = ~Oo[i]; 
						_delay_ms(0.1);
						}
					}
					while(1){
						for (int j = 0; j <= 20; j++){
							for (int i = 0; i <= 7; i++) {
								PORTB = 1 << i;
								PORTD = ~Ooo[i];
								_delay_ms(0.1);
								}		
								}			
						for (int j = 0; j <= 20; j++){
							for (int i = 0; i <= 7; i++){
								PORTB = 1 << i;
								PORTD = ~Oooo[i]; 
								_delay_ms(0.1);
								}
							}	
						for (int j = 0; j <= 20; j++){
							for (int i = 0; i <= 7; i++) {
								PORTB = 1 << i;
								PORTD = ~Ooo[i]; 
								_delay_ms(0.1);
								}		
							}		
						}
					}
				}
			}

