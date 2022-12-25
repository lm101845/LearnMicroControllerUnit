#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
	while(1)
	{
		P2 = 0xFF;  //亮
		Delay500ms();  //因为它亮的很快，所以我们要延时500毫秒
		P2 = 0x00;  //灭
		Delay500ms();
	}
}
