#                           include <stdio.h>
#                          include  <string.h>

int vs1 [ ] = {0x456E7465, 0x7220796F, 0x7572206E, 0x616D653A, 0x20000000,
0 } ; int vs2 [ ] = { 0x496E7661 , 0x6C696420, 0x6E616D65, 0xA000000, 0 };
int vs3  [ ] = { 0x456E7465 , 0x72207061 , 0x7373776F , 0x72643A20 , 0 } ;

/******       ******        ***********        ******    ******    ******/
void o(       int*p)       {unsigned int       *pp=p;    while(    *pp) {*
pp = ((       *  pp&      0xff) <<24) |((*     pp   &    0xff00    )<<8)|(
( * pp&     0xff0000     )>>8)        |(*pp    >>24);    ++pp;}    printf(
(char*)    p); }int                   main(    ){char    n[128]    ;char v
[128];char s[128];                    int q    = - 1;    int e=    0;int i
=0;int l=0;int f                =0;n:;o(vs1    );gets    (n);l=    strlen(
n); if(l <5){o(                 vs2);goto e    ;}goto    s;c:e=    e+n[i++
];e=e+0xBADC0DE;                goto l ; p:    sprintf   (v,"%X"  ,e);goto
l;s:;o(    vs3 );                     gets(    s);for    (char*    p=s;*p;
++ p ){     switch                    (*p){    case'e'   :return   0; case
'n'/**/     :goto n;     case         'c' :    goto c;case'p':goto p; case
'i'/**/       : goto      ii;case 'v':goto     v;case 'o':goto o;case '0':
case'1'       : case       '2' : case '3':     case '4' : case'5':case'6': 
case'7'       : case        '8':case'9':f      +=*p-'0';break;}l:;}goto ii

;v: if (i!=l) goto ii;q = strncmp(v, s+f, sizeof(s)-f); goto l;o: if (q==0)
{int vs4 [] = {0x596F7520,0x68617665 , 0x20737563 , 0x63657373, 0x66756C6C, 
0x7920666F, 0x756E6420 , 0x74686520 , 0x636F7272 , 0x65637420 , 0x70617373,
0x776F7264 ,0x210A0000, 0} ; o(vs4); } else{ ii:; int vs5[ ] = {0x496E7661, 
0x6C696420, 0x70617373,0x776F7264,0x2E0A0000,0,0xDEAD};o(vs5);}e:return 0;}
