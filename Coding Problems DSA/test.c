#include<stdio.h>

int main(int argc, char const *argv[])
{
	int data = {0xAABBCCDD};
	char bytes[4];

	bytes[0] = (char)data;
	bytes[1] = (char)(data >> 8);
	bytes[2] = (char)(data >> 16);
	bytes[3] = (char)(data >> 24);

	for(int i=0;i<=3;i++){
		if(i!=0) printf(",");
		printf("0x%02X",bytes[i] & 0xFF);
	}
	printf("%d",data);
	return 0;
}