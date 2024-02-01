#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
if(argc!=4)
{
printf("./a.out filename pword chword\n");
return;
}
FILE *fp=fopen(argv[1],"r+");
if(fp==0)
{
perror("fopen");
return;
}


char s[20];
while(fscanf(fp,"%s",s)!=EOF)
{
if(strcmp(s,argv[2])==0)
{
fseek(fp,-strlen(s),SEEK_CUR);
fprintf(fp,"%s",argv[3]);
}
}
}
