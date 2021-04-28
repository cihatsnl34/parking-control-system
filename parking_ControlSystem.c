#include <stdio.h>
#include <stdlib.h>
int y=0;
struct AracBilgileri
{
 char model[50];
 char renk[50];
 char plaka[50];
 char zaman[50];
}arac[1000];

int main()
{
    int i;
    a:
    printf("ARAC BILGI SISTEMI\n1)Arac Ekleme\t\t2)Araclari Listeleme\n");
    scanf("%d",&i);
    if(i==1)
    {
    aracEkle();
    goto a;
    }
    if(i==2)
    {
    aracListele();
    goto a;
    }
    else
    goto a;
    return 0;
}
void aracEkle ()
{
  printf("%d. Arac modelini giriniz: ",y+1);
  scanf("%s",&arac[y].model);
  printf("%d. Arac plakasini giriniz: ",y+1);
  scanf("%s",&arac[y].plaka);
  printf("%d. Arac rengini giriniz: ",y+1);
  scanf("%s",&arac[y].renk);
  printf("%d. Arac giris saatini giriniz: ",y+1);
  scanf("%s",&arac[y].zaman);
  y++;
}
void aracListele()
{
 for (int j=0;j<y;j++)
  {
  printf("%d. arac bilgileri:\n",j+1);
  printf("%s\t%s\t%s\t%s\n",arac[j].model,arac[j].plaka,arac[j].renk,arac[j].zaman);
  }
}
