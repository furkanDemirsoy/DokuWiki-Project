#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <dirent.h>
#include <string.h>

void istenen_etiket(char outputstring[])
{


    DIR *folder=opendir("C://Users//izemd//OneDrive//Masa�st�//�niversite");
int summer=0;
int summer2=0;
char dosya[20000];
char yetim[20000];
char newfile[20000];
    struct dirent *insidefolder;
    int sayac=0;
    char temp[100];
    char temp2[100];
int cagri=0;

    if(folder==NULL)
    {
        printf("bulunamad�");
    }

    while(insidefolder=readdir(folder))
    {
cagri++;

    if((strcmp(insidefolder->d_name,"."))==0 || (strcmp(insidefolder->d_name,".."))==0)//strcmp stringler e�it mi de�il mi diye kontrol eder e�er e�itse 0 d�nd�r�r
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
  //  puts(insidefolder->d_name);
    strcpy(temp,"C://Users//izemd//OneDrive//Masa�st�//�niversite//");
    strcat(temp,insidefolder->d_name);//"C://Users//HUAWEI//Desktop//�niversite//BOLUMLER"

    int cagri2;
    DIR *hangouttext;
    struct dirent *enter;
   
    char temporary[100];
    char finishstring[100];
    

    hangouttext=opendir(temp);//zaten dizilerin kendisinde otomatik olarak t�rnaklar vard�r bu y�zden bizim koymam�za gerek yok ve hatta koymamal�y�z
     while(enter=readdir(hangouttext))
    {

if((strcmp(enter->d_name,"."))==0 || (strcmp(enter->d_name,".."))==0)//strcmp stringler e�it mi de�il mi diye kontrol eder e�er e�itse 0 d�nd�r�r
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
   // puts(enter->d_name);
   cagri2++;
    int l=0;
    int satirsayac=0;
strcpy(finishstring,temp);//C://Users//HUAWEI//Desktop//�niversite
strcat(finishstring,"//");//C://Users//HUAWEI//Desktop//�niversite//
strcat(finishstring,enter->d_name);//C://Users//HUAWEI//Desktop//�niversite//Bilgisayarmuhendisligi.txt

char*cvb=strtok(enter->d_name,".txt");
int yu=strcspn(cvb,"_");
cvb[yu]=' ';

if(strcmp(cvb,outputstring)!=0)
{

   // printf("%s istenen etikettir---\n",cvb);

}
if(strcmp(cvb,outputstring)==0)
{
    //printf("%s istenen etiket de�ildir  ******\n",cvb);

}




  }


  }
}

int yetimfonksiyon(char outputstringi[])
{
    
    DIR *folder=opendir("C://Users//izemd//OneDrive//Masa�st�//�niversite");
int summer=0;
int summer2=0;
char dosya[20000];
char yetim[20000];
char newfile[20000];
    struct dirent *insidefolder;
    int sayac=0;
    char temp[100];
    char temp2[100];
int cagri=0;

    if(folder==NULL)
    {
        printf("bulunamad�");
    }

    while(insidefolder=readdir(folder))
    {
cagri++;

    if((strcmp(insidefolder->d_name,"."))==0 || (strcmp(insidefolder->d_name,".."))==0)//strcmp stringler e�it mi de�il mi diye kontrol eder e�er e�itse 0 d�nd�r�r
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
  //  puts(insidefolder->d_name);
    strcpy(temp,"C://Users//izemd//OneDrive//Masa�st�//�niversite//");
    strcat(temp,insidefolder->d_name);//"C://Users//HUAWEI//Desktop//�niversite//BOLUMLER"

    int cagri2;
    DIR *hangouttext;
    struct dirent *enter;
   
    char temporary[100];
    char finishstring[100];
    

    hangouttext=opendir(temp);
     while(enter=readdir(hangouttext))
    {

if((strcmp(enter->d_name,"."))==0 || (strcmp(enter->d_name,".."))==0)//strcmp stringler e�it mi de�il mi diye kontrol eder e�er e�itse 0 d�nd�r�r
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
   
   
   cagri2++;
    int l=0;
    int satirsayac=0;
strcpy(finishstring,temp);//C://Users//HUAWEI//Desktop//�niversite
strcat(finishstring,"//");//C://Users//HUAWEI//Desktop//�niversite//
strcat(finishstring,enter->d_name);//C://Users//HUAWEI//Desktop//�niversite//Bilgisayarmuhendisligi.txt


int gh=strlen(yetim);

strcpy(yetim,outputstringi);
strcat(yetim,".txt");
if(strcmp(yetim,enter->d_name)==0)
{
    return 26;
}





  }


  }



}
int fonksiyon(char string[])
{
   
    DIR *folder=opendir("C://Users//izemd//OneDrive//Masa�st�//�niversite");
int sum=0;
int sum2=0;
char dosya[20000];
char newfile[20000];
    struct dirent *insidefolder;
    int sayac=0;
    char temp[100];
    char temp2[100];
int cagri=0;

    if(folder==NULL)
    {
        printf("bulunamad�");
    }

    while(insidefolder=readdir(folder))
    {
cagri++;

    if((strcmp(insidefolder->d_name,"."))==0 || (strcmp(insidefolder->d_name,".."))==0)
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
  //  puts(insidefolder->d_name);
    strcpy(temp,"C://Users//izemd//OneDrive//Masa�st�//�niversite//");
    strcat(temp,insidefolder->d_name);//"C://Users//HUAWEI//Desktop//�niversite//BOLUMLER"

    int cagri2;
    DIR *hangouttext;
    struct dirent *enter;
   
    char temporary[100];
    char finishstring[100];
    

    hangouttext=opendir(temp);
     while(enter=readdir(hangouttext))
    {

if((strcmp(enter->d_name,"."))==0 || (strcmp(enter->d_name,".."))==0)
    {
    continue;
    }
   
   cagri2++;
    int l=0;
    int satirsayac=0;
strcpy(finishstring,temp);//C://Users//HUAWEI//Desktop//�niversite
strcat(finishstring,"//");//C://Users//HUAWEI//Desktop//�niversite//
strcat(finishstring,enter->d_name);//C://Users//HUAWEI//Desktop//�niversite//Bilgisayarmuhendisligi.txt
//output(finishstring);

FILE *sign;
char dizi[20000];
int b=0;
char character;
char dizi2[100];
int a=strlen(finishstring);
int say=0;
char satir[20000];
int sayac=0;
char *parca;
char *parca2;

char ayrac[20000]="[[";
char ayrac2[20000]="]]";
if((finishstring[a-1]=='t') && (finishstring[a-2]=='x')&&(finishstring[a-3]=='t')&&(finishstring[a-4]=='.'))
{
    sign=fopen(finishstring,"r");
int null=0;
while(!feof(sign))
{


    fgets(satir,20000,sign);


char *p;
    int j=0;
    char dizi[20000];
    j=strlen(string);//aramak istedi�imiz kelimenin uzunlu�u
   // printf("%d",j);

int m;
    if(strstr(satir,string)==NULL)
    {
        null++;

    }
    if(strstr(satir,string)!=NULL)
    {

//Etiket format�na uygun olup olmad���n�n kontrol edildi�i yer
null++;
    p=strstr(satir,string);
        if(p[-1]=='['&& p[-2]=='[')
        {
            if(p[j]==']'&& p[j+1]==']')
            {
               // printf("%s %d.satirda var dosya t�r�: \n",string,null);
                satirsayac++;



                if(strcmp(p,enter->d_name)!=0)
                {
               // printf("yetim de�ildir ge�ti�i dosya ad�::\n ");
                }
                else
                {
                  //  printf("yetimdir ge�ti�i dosya ad�::\n ");

                }
                sum++;
            for(m=0;m<j;m++)
            {
           //     printf("%c",p[m]);
            }
          
            }
            else
            {//printf("%s %d.satirda var ",string,null);
                satirsayac++;
                sum2++;
            //    printf(" kelimedir--\n");
            }

        }
        else
        {//printf("%s %d.satirda var ",string,null);
        satirsayac++;
        sum2++;
         //   printf(" kelimedir--\n");
        }
       
}




}


}



  }


  }

return sum;
}



void outputfile(char string[])
{
        FILE *output=fopen("C://Users//izemd//OneDrive//Masa�st�//�niversite//output.txt","w+");

        if(output==NULL)
        {
            printf("output bulunamad�");
        }
        DIR *folder=opendir("C://Users//izemd//OneDrive//Masa�st�//�niversite");
int sum=0;
char output2[200][2000];
int sum2=0;
int rgf=0;
char dizibak[2000];
char dosya[20000];
char newfile[20000];
    struct dirent *insidefolder;
    int sayac=0;
    char temp[100];
    char temp2[100];
int cagri=0;

    if(folder==NULL)
    {
        printf("bulunamad�");
    }

    while(insidefolder=readdir(folder))
    {
cagri++;

    if((strcmp(insidefolder->d_name,"."))==0 || (strcmp(insidefolder->d_name,".."))==0)//strcmp stringler e�it mi de�il mi diye kontrol eder e�er e�itse 0 d�nd�r�r
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
  //  puts(insidefolder->d_name);
    strcpy(temp,"C://Users//izemd//OneDrive//Masa�st�//�niversite//");
    strcat(temp,insidefolder->d_name);//"C://Users//HUAWEI//Desktop//�niversite//BOLUMLER"

    int cagri2;
    DIR *hangouttext;
    struct dirent *enter;

    char temporary[100];
    char finishstring[100];
    

    hangouttext=opendir(temp);
     while(enter=readdir(hangouttext))
    {

if((strcmp(enter->d_name,"."))==0 || (strcmp(enter->d_name,".."))==0)
    {
    continue;
    }
   // puts(enter->d_name);
   cagri2++;
    int l=0;
    int satirsayac=0;
strcpy(finishstring,temp);//C://Users//HUAWEI//Desktop//�niversite
strcat(finishstring,"//");//C://Users//HUAWEI//Desktop//�niversite//
strcat(finishstring,enter->d_name);//C://Users//HUAWEI//Desktop//�niversite//Bilgisayarmuhendisligi.txt
//output(finishstring);

FILE *sign;
char dizi[20000];
int b=0;
char character;
char dizi2[100];
int a=strlen(finishstring);
int say=0;
char satir[20000];
int sayac=0;
char *parca;
char *parca2;

char ayrac[20000]="[[";
char ayrac2[20000]="]]";
if((finishstring[a-1]=='t') && (finishstring[a-2]=='x')&&(finishstring[a-3]=='t')&&(finishstring[a-4]=='.'))
{
    sign=fopen(finishstring,"r");
int null=0;
int y=0;
int w=0;

while(!feof(sign))
{

char outputstringi[2000];
char character4;
fgets(satir,20000,sign);

    char *d=strstr(satir,"[[");
    char *df=strstr(satir,"]]");

while(d!=NULL&&df!=NULL)
{
int as=0;
int s=df-d;
int u;
for( u=2;u<s;u++)
{
  //  printf("%c",d[u]);

    outputstringi[as]=d[u];

        as++;

}
//fputs(outputstringi,output);
//fclose(output);
int ytr=fonksiyon(outputstringi);
int mnb=yetimfonksiyon(outputstringi);
if(mnb==26)
{
    printf("%s  %d kez ge�iyor Yetim de�ildir\n",outputstringi,ytr);
}
if(mnb!=26)
{
    printf("%s  %d kez ge�iyor yetimdir\n",outputstringi,ytr);
}


istenen_etiket(outputstringi);

fprintf(output,"%s den %d tane ge�iyor",outputstringi,ytr);
memset(outputstringi, 0, sizeof(outputstringi));


rgf++;

character4='\n';
fputc(character4,output);



d=strstr(d+1,"[[");//pointara 1 artt�r�nca bir sonraki dizieleman�na ge�er
df=strstr(df+1,"]]");


}


//printf("%d",yt);



}
//repeatnumber();

}
    }
    }
//puts(dizibak);

}

void writetofile(char *result,char finishstring[])
{
    FILE *filepath=fopen(finishstring,"w+");



    fputs(result,filepath);


}
char *updatestring(char *tutucudosya,char *string,char *widget)
{


    char* result;
    int i, counter = 0;//i�inde ka� kere ge�ti�ini sayar
    int widgetlen = strlen(widget);
    int stringlen = strlen(string);

    
    for (i = 0; tutucudosya[i] != '\0'; i++) {
        if (strstr(&tutucudosya[i], string) == &tutucudosya[i]) {
            counter++;

            
            i += stringlen - 1;//eski kelimenin bulundu�u yeri 1 index atlar
        }
    }


    result = (char*)malloc(i + counter * (widgetlen - stringlen) + 1);//Etiket G�ncellemesinde yeni etiket ve eskisi aras�ndaki uzunluk fark�n� dinamik olarak ayarlar
    

    i = 0;
    while (*tutucudosya) {
        //aradaki uzunluk fark�n� k�yaslar
        if (strstr(tutucudosya,string) ==tutucudosya) {
            strcpy(&result[i],widget);
            i += widgetlen;
            tutucudosya += stringlen;
        }
        else
            result[i++] = *tutucudosya++;
    }

    result[i] = '\0';
    return result;

}
void filereading(char string[],char widget[])
{
    DIR *folder=opendir("C://Users//izemd//OneDrive//Masa�st�//�niversite");

char tutucudosya[20000];
    char character;

    int b=0;
int summer=0;
int summer2=0;
char dosya[20000];
char newfile[20000];
    struct dirent *insidefolder;
    int sayac=0;
    char temp[100];
    char temp2[100];
int cagri=0;

    if(folder==NULL)
    {
        printf("bulunamad�");
    }

    while(insidefolder=readdir(folder))
    {
cagri++;

    if((strcmp(insidefolder->d_name,"."))==0 || (strcmp(insidefolder->d_name,".."))==0)
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
  //  puts(insidefolder->d_name);
    strcpy(temp,"C://Users//izemd//OneDrive//Masa�st�//�niversite//");
    strcat(temp,insidefolder->d_name);//"C://Users//HUAWEI//Desktop//�niversite//BOLUMLER"

    int cagri2;
    DIR *hangouttext;
    struct dirent *enter;
   // temp[0]='"';
    char temporary[100];
    char finishstring[100];
    

    hangouttext=opendir(temp);
     while(enter=readdir(hangouttext))
    {

    char onemlidizi[20000];
if((strcmp(enter->d_name,"."))==0 || (strcmp(enter->d_name,".."))==0)
    {
    continue;
    }

 //  puts(enter->d_name);
   cagri2++;
    int l=0;
    int satirsayac=0;
strcpy(finishstring,temp);//C://Users//HUAWEI//Desktop//�niversite
strcat(finishstring,"//");//C://Users//HUAWEI//Desktop//�niversite//
strcat(finishstring,enter->d_name);//C://Users//HUAWEI//Desktop//�niversite//Bilgisayarmuhendisligi.txt
//output(finishstring);

FILE *sign;
char dizi[20000];
int b=0;
char character;
char dizi2[100];
int a=strlen(finishstring);
int say=0;
char satir[20000];
int sayac=0;
char *parca;
char *parca2;

char ayrac[20000]="[[";
char ayrac2[20000]="]]";
if((finishstring[a-1]=='t') && (finishstring[a-2]=='x')&&(finishstring[a-3]=='t')&&(finishstring[a-4]=='.'))
{
    sign=fopen(finishstring,"r+");
   // filepath=fopen(finishstring,"w+");
int null=0;
char *result;
//fputs(result,filepath);

while(!feof(sign))
{




    fgets(tutucudosya,20000,sign);
    result=updatestring(tutucudosya,string,widget);
    strcat(onemlidizi,result);
  
}
FILE *filepath=fopen(finishstring,"w+");
fputs(onemlidizi,filepath);
memset(onemlidizi, 0, sizeof(onemlidizi));


}
    }
    }

   // puts(tutucudosya);
}



void search(char string[])
{

  
    DIR *folder=opendir("C://Users//izemd//OneDrive//Masa�st�//�niversite");
int sum=0;
int sum2=0;
char dosya[20000];
char newfile[20000];
    struct dirent *insidefolder;
    int sayac=0;
    char temp[100];
    char temp2[100];
int cagri=0;

    if(folder==NULL)
    {
        printf("bulunamad�");
    }

    while(insidefolder=readdir(folder))
    {
cagri++;

    if((strcmp(insidefolder->d_name,"."))==0 || (strcmp(insidefolder->d_name,".."))==0)//strcmp stringler e�it mi de�il mi diye kontrol eder e�er e�itse 0 d�nd�r�r
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
  //  puts(insidefolder->d_name);
    strcpy(temp,"C://Users//izemd//OneDrive//Masa�st�//�niversite//");
    strcat(temp,insidefolder->d_name);//"C://Users//HUAWEI//Desktop//�niversite//BOLUMLER"

    int cagri2;
    DIR *hangouttext;
    struct dirent *enter;
   // temp[0]='"';
    char temporary[100];
    char finishstring[100];
    

    hangouttext=opendir(temp);
     while(enter=readdir(hangouttext))
    {

if((strcmp(enter->d_name,"."))==0 || (strcmp(enter->d_name,".."))==0)//strcmp stringler e�it mi de�il mi diye kontrol eder e�er e�itse 0 d�nd�r�r
    {
    continue;// g�rd��� anda direkt d�g�y� yeni klas�r ad�na ge�irir
    }
   // puts(enter->d_name);
   cagri2++;
    int l=0;
    int satirsayac=0;
strcpy(finishstring,temp);//C://Users//HUAWEI//Desktop//�niversite
strcat(finishstring,"//");//C://Users//HUAWEI//Desktop//�niversite//
strcat(finishstring,enter->d_name);//C://Users//HUAWEI//Desktop//�niversite//Bilgisayarmuhendisligi.txt
//output(finishstring);

FILE *sign;
char dizi[20000];
int b=0;
char character;
char dizi2[100];
int a=strlen(finishstring);
int say=0;
char satir[20000];
int sayac=0;
char *parca;
char *parca2;

char ayrac[20000]="[[";
char ayrac2[20000]="]]";
if((finishstring[a-1]=='t') && (finishstring[a-2]=='x')&&(finishstring[a-3]=='t')&&(finishstring[a-4]=='.'))
{
    sign=fopen(finishstring,"r");
int null=0;
while(!feof(sign))
{


    fgets(satir,20000,sign);


char *p;
    int j=0;
    char dizi[20000];
    j=strlen(string);//aramak istedi�imiz kelimenin uzunlu�u
   // printf("%d",j);

int m;
    if(strstr(satir,string)==NULL)
    {
        null++;

    }
    if(strstr(satir,string)!=NULL)
    {

//printf("%s %d.satirda var ",string,null);
null++;
    p=strstr(satir,string);
        if(p[-1]=='['&& p[-2]=='[')
        {
            if(p[j]==']'&& p[j+1]==']')
            {
                printf("%s %d.satirda var dosya t�r�: \n",string,null);
                satirsayac++;


                p[j]='.';
                p[j+1]='t';
                p[j+2]='x';
                p[j+3]='t';
                if(strcmp(p,enter->d_name)!=0)
                {
               // printf("yetim de�ildir ge�ti�i dosya ad�::\n ");
                }
                else
                {
                  //  printf("yetimdir ge�ti�i dosya ad�::\n ");

                }
                sum++;
            for(m=0;m<j;m++)
            {
           //     printf("%c",p[m]);
            }
            printf("%s d�r",enter->d_name);
            printf(" etikettir---\n");
          //  strcpy(dosya,string);
            //output(dosya);
            }
            else
            {printf("%s %d.satirda var ",string,null);
                satirsayac++;
                sum2++;
                printf(" kelimedir--\n");
            }

        }
        else
        {printf("%s %d.satirda var ",string,null);
        satirsayac++;
        sum2++;
            printf(" kelimedir--\n");
        }
       
}



   

}


}



  }


  }
printf("%s etiketinden %d tane ge�iyor\n",string,sum);
printf("%s kelimesinden %d tane ge�iyor",string,sum2);
}


int main()
{
    char string[100];
    char widget[100];
    int i;

    setlocale(LC_ALL, "Turkish");

    printf("etiket veya kelime aramas� i�in 1 e bas�n\n");
    printf("etiket g�ncellemesi i�in 2 ye bas�n\n");
    printf("output dosyas�na bak�p t�m etiketleri g�rmek ve ka� kez ge�ti�ina bakmak i�in 3 e bas�n");
    scanf("%d",&i);
    char kelime[20000];
    fflush(stdin);
    if(i==1)
    {

        printf("aramak istedi�iniz kelime veya etiketi girin");
        gets(string);

        puts(string);

       // outputfile(string);
        printf("\n\n");
        printf("---------------\n");
        search(string);
    }
    else if(i==2)
    {
        printf("g�ncellemek isted�iniz etiketi girin");
        gets(string);

        printf("g�ncellemek istedi�iniz etiketi ne ile de�i�tirmek istedi�inizi girin");
        gets(widget);

        printf("\n\n");
        printf("---------------\n");
        filereading(string,widget);
        printf("g�ncelleme i�lemi ba�ar�l�");



    }
    else if(i==3)
    {
        outputfile(string);
    }
    else
    {
        printf("hatal� giri� yapt�n�z ");
    }

    return 0;
}
