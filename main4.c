#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main() {
	int yaricap;
	float hacim;
	
	printf("Kurenin yaricapini giriniz : ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);  /*4.30 la �arpman�n nedeni sonucun float ��kmas� yoksa sonu� 1 ��kard�.*/
	printf("Kurenin hacmi %.3f 'dir." , hacim);
	
	return 0;
}
