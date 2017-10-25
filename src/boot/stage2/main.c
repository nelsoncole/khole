/* Arquivo "main.c"
	"Projecto KholeOS. Bootloader!"
	
	Nelson Sapalo da Silva Cole (nelsoncole72@gmail.com)
	
	Lubango, 20 de Julho de 2017
*/

#include <boot.h>
#include <ata.h>


extern unsigned char BootDevice;


void main(){

	set_color(0xe);
	printboot("[ Bem vindo ao \"stage2.bin\"... ]\
		 \n\n[ Nelson Cole ]");

	/*unsigned short *buffer =(unsigned short*)0x00100000;


	read_ata_pio(0x80,1,18,buffer);*/
	

	}