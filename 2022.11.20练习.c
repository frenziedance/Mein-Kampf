/*
#include<stdio.h>
void Swap2(int *pa, int*pb)//*pa为指针变量，存储地址
{
	int tmp = 0;
	tmp = *pa;//把*pa的值赋给tmp其实是把a的值赋给tmp
	*pa = *pb;
	*pb = tmp;

}



int main()
{
	int a = 10;
    int b = 20;
	printf("a=%d\n b=%d\n", a,b);
	Swap2(&a, &b);//swap2其实是进行传参，把a的地址传给*pa  芜湖，爷懂指针了
	printf("a=%d\n b=%d\n", a,b);
	
	return 0;
}*/
/*
//爱心代码
#include<stdio.h>
#include<Windows.h>
int main()
{
	float x, y, a;
	system("color 04");
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += .05f)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? 'x' : ' ');
		}
		Sleep(100);
		putchar('\n');
	}
	getchar();
	return 0;
}
*/

