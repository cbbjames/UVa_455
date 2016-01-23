#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

int is_p(char*, int);
int main()
{
	char s[80] = {'\0'};
	int n=0;
	scanf("%d", &n);
	while ((n--)&&(fgets(s,80,stdin)!=NULL))
	{
		if(s[0]=='\n')
		{
			n++;
			continue;
		}
		int L = strlen(s)-1;
		if (int a = is_p(s, L) > 0 && n > 0)
			printf("%d\n\n",a);
		else if (a > 0 && n == 0)
			printf("%d", a);
		else if (a == 0)
			printf("No answer\n\n");
			//??
		printf("%d\n", n);
		
	}
	system("PAUSE");
	return 0;
}
int is_p(char*s, int L)
{
	char seg[41] = { '\0' };
	printf("s,L=%s %d\n",s, L);
	for (int i = 1; i <= L/2; i++)
	{
		char seg2[40] = { '\0' };
		char e[2] = { 0 };
		sprintf(e, "%c", s[i - 1]);
		strcat(seg,e);
		printf("seg=%s\n", seg);
		strcpy(seg2, seg);
		printf("seg2-1=%s\n", seg2);
		int Ls = L / strlen(seg);

		for (int j = 1; j < Ls;j++)
			strcat(seg2, seg);
		sprintf(seg2, "%s\n", seg2);
		printf("seg2=%s\n", seg2);

		if (strcmp(seg2, s) >0)
			return strlen(seg);
	}
	
	return 0;
}