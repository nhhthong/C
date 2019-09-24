
#include <stdio.h>
#include <math.h>
#include <string.h>
//input method
void Inp(char *c)
{
	scanf("%s", c);
	while(strcmpi(c,"") == 0)
		scanf("%s",c);
}
//divide method
void div()
{
	int a, b;
	float kq;
	scanf("%d%d", &a, &b);
	if(b != 0)
	{
		kq = (float)a/(float)b;
		printf("%.2f",kq);
	}else
	{
		printf("Result: error");
	}
}
//square root method
void sqrt()
{
	int n;
	float kq;
	scanf("%d", &n);
	if(n >= 0)
	{
		kq = sqrt(n);
		printf("Result: %.2f", kq);
	}else{
		printf("Result: error");
	}
}
//sum of odd numbers method
void sln()
{
	int n, i;
	int sum = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; ++i)
	{
		if(i % 2 == 1)
			sum = sum + i;
	}
	printf("Result: %d", sum);
}
//combination method
void cnk()
{
	int n, k;
	scanf("%d%d", &n, &k);
	if(k > n)
	{
		int kq = 0;
		printf("Result: %d", kq);
	}
	else{
		
		int i;
		int nf = 1; //factorial(n)
		for(i = 1; i <= n; ++i){
			nf = nf*i;
		}
		int kf = 1; //factorial(k) 
		for(i = 1; i <= k; ++i){
			kf = kf*i;
		}
		int nsk = n - k; 
		int nsf = 1; //n - factorial(k)
		for(i = 1; i <= nsk; ++i)
		{
			nsf = nsf*i;
		}
		float kq;
		kq = (float)nf/((float)kf*(float)nsf);
		printf("Result: %.2f", kq);
	}
}
//sum of numbers entered method
void tk()
{
	int n, sum = 0;
	do{
		scanf("%d", &n);
		sum = sum + n;
	}while(n != 0);
	printf("Result: %d", sum);
}
//average method
void tbc()
{
	int n, sum = 0, count = -1;
	do{
		count = count + 1;
		scanf("%d", &n);
		sum = sum + n;
	}while(n != 0);
	if(count == 0)
	{
		int temp = 0;
		printf("Result: %d", temp);
	}
	else
	{	
		printf("Result: %.2f", (float)sum/(float)count);
	}
}
//Find the largest number method
void max()
{
	int n, max = 0;
	do{
		
		scanf("%d", &n);
		if(max < n)
			max = n;
		
	}while(n != 0);
	printf("Result: %d", max);
}

int main()
{
	char c[10];
	printf("Enter your ope: ");
	Inp(c);
	int a, b;	
	if     (strcmpi(c, "+")   == 0){scanf("%d%d",&a,&b); printf("Result: %d",a + b);}
	else if(strcmpi(c, "-")   == 0){scanf("%d%d",&a,&b); printf("Result: %d",a - b);}
	else if(strcmpi(c, "*")   == 0){scanf("%d%d",&a,&b); printf("Result: %d",a * b);}
	else if(strcmpi(c, "/")   == 0){div();}
	else if(strcmpi(c, "sqrt")== 0){sqrt();}
	else if(strcmpi(c, "sln") == 0){sln();}
	else if(strcmpi(c, "cnk") == 0){cnk();}
	else if(strcmpi(c, "tk")  == 0){tk() ;}
	else if(strcmpi(c, "tbc") == 0){tbc();}
	else if(strcmpi(c, "max") == 0){max();}
}
