#include <stdio.h>
#include <string.h>

int vs1[] = {0x456E7465, 0x7220796F, 0x7572206E, 0x616D653A, 0x20000000, 0};
int vs2[] = {0x496E7661, 0x6C696420, 0x6E616D65, 0xA000000, 0};
int vs3[] = {0x456E7465, 0x72207061, 0x7373776F, 0x72643A20, 0};
int vs4[] = {0x596F7520, 0x68617665, 0x20737563, 0x63657373, 0x66756C6C, 0x7920666F, 0x756E6420, 0x74686520, 0x636F7272, 0x65637420, 0x70617373, 0x776F7264, 0x210A0000, 0};
int vs5[] = {0x496E7661, 0x6C696420, 0x70617373, 0x776F7264, 0x2E0A0000, 0};

void out(int *p)
{
	unsigned int *pp = p;
	while (*pp)
	{
		*pp = ((*pp & 0xff) << 24) | ((*pp & 0xff00) << 8) | ((*pp & 0xff0000) >> 8) | (*pp >> 24);
		++pp;
	}
	printf(p);
}

int main()
{
	char name[128];
	char validSerial[128];
	char serial[128];
	int equal = -1;
	int encoder = 0;
	int ni = 0;
	int len = 0;
	int offset = 0;
name:
	out(vs1);
	gets(name);
	len = strlen(name);
	if (len < 5)
	{
		out(vs2);
		goto end;
	}
	goto s;
c:
	encoder = encoder + name[ni++];
	encoder = encoder + 0xBADC0DE;
	goto l;
p:
	sprintf(validSerial, "%X", encoder);
	goto l;
s:	
	out(vs3);
	gets(serial);

        for (char *p = serial ; *p ; ++p)
	{
		switch (*p)
		{
		case 'e': return 0;
		case 'n': goto name;
		case 'c': goto c;
		case 'p': goto p;
		case 'i': goto ii;
		case 'v': goto v;
		case 'o': goto o;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			offset += *p - '0'; break;
		}
l:;
	}
	goto ii;
v:
	if (ni != len) goto ii;
	equal = strncmp(validSerial, serial + offset, sizeof(serial) - offset);
	goto l;
o:
	if (equal == 0)
	{
		out(vs4);
	}
	else
	{
ii:
		out(vs5);
	}
end:
	return 0;
}
