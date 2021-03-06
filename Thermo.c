#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[])
{

	while (1)
	{
		FILE* led0 = NULL;
		FILE* led1 = NULL;
		FILE* led2 = NULL;
		FILE* led3 = NULL;
		FILE* led4 = NULL;
		FILE* led5 = NULL;
		FILE* led7 = NULL;

		FILE* temperature = NULL;

 		//fichier pour le lm75
 		temperature = fopen("/sys/class/hwmon/hwmon0/temp1_input", "r");
 
		//fichier pour les leds ; w+ supprime le texte et le remplace par ce qu'on met dans fputs("0 ou 255",ledx);
		led0 = fopen("/sys/class/leds/d0/brightness", "w+");
		led1 = fopen("/sys/class/leds/d1/brightness", "w+");
		led2 = fopen("/sys/class/leds/d2/brightness", "w+");
		led3 = fopen("/sys/class/leds/d3/brightness", "w+");
		led4 = fopen("/sys/class/leds/d4/brightness", "w+");
		led5 = fopen("/sys/class/leds/d5/brightness", "w+");
		led6 = fopen("/sys/class/leds/d6/brightness", "w+");
		led7 = fopen("/sys/class/leds/d7/brightness", "w+");

		int temp = 0;
		fscanf(temperature, "%d", &temp);
		temp = temp / 1000;
		printf("%d °C \n", temp);
  
 		if (temp == 28){
			fputs("255", led0);
			fputs("0", led1);
			fputs("0", led2);
			fputs("0", led3);
			fputs("0", led4);
			fputs("0", led5);
			fputs("0", led6);
			fputs("0", led7);
		}

		else if (temp == 29){
			fputs("255", led0);
			fputs("255", led1);
			fputs("0", led2);
			fputs("0", led3);
			fputs("0", led4);
			fputs("0", led5);
			fputs("0", led6);
			fputs("0", led7);
		}

		else if (temp == 30){
			fputs("255", led0);
			fputs("255", led1);
			fputs("255", led2);
			fputs("0", led3);
			fputs("0", led4);
			fputs("0", led5);
			fputs("0", led6);
			fputs("0", led7);
		}

		else if (temp == 31){
			fputs("255", led0);
			fputs("255", led1);
			fputs("255", led2);
			fputs("255", led3);
			fputs("0", led4);
			fputs("0", led5);
			fputs("0", led6);
			fputs("0", led7);
		}

		else if (temp == 32){
			fputs("255", led0);
			fputs("255", led1);
			fputs("255", led2);
			fputs("255", led3);
			fputs("255", led4);
			fputs("0", led5);
			fputs("0", led6);
			fputs("0", led7);

		}
		else if (temp == 33){
			fputs("255", led0);
			fputs("255", led1);
			fputs("255", led2);
			fputs("255", led3);
			fputs("255", led4);
			fputs("255", led5);
			fputs("0", led6);
			fputs("0", led7);
		}

		else if (temp == 34){
			fputs("255", led0);
			fputs("255", led1);
			fputs("255", led2);
			fputs("255", led3);
			fputs("255", led4);
			fputs("255", led5);
			fputs("255", led6);
			fputs("0", led7);
		}

		else if (temp == 35){
			fputs("255", led0);
			fputs("255", led1);
			fputs("255", led2);
			fputs("255", led3);
			fputs("255", led4);
			fputs("255", led5);
			fputs("255", led6);
			fputs("255", led7);
 		}

		fclose(led0);
		fclose(led1);
		fclose(led2);
		fclose(led3);
		fclose(led4);
		fclose(led5);
		fclose(led6);
		fclose(led7);
		fclose(temperature);
	}

	return 0;
}
