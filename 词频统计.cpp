#include <stdlib.h>
#include <stdio.h>
#include <cstring>
int chazhao(char *str1,char *str2)
{    char *p=str1;//pָ�����    
int i=0,k=0;//kͳ�Ƹ���    
while(*p!='\0')//���ӽ����˳�ѭ��       
{           while(*p!=' ')//���ʽ����˳�ѭ�� �����¸�����       
{                if(*p!=str2[i])//������ͬ��ĸ ָ����һ������                
while(*p!=' ') p++;                else//��ĸ��ͬ                   
{                      if(*(p+1)==' ')//���ʽ��� ������һ                          
{                             k++;                             p++;                          
}                     else//�Ƚ���һ����ĸ                         
{                             i++;
p++;                         
}                  
}     
}     
p++;     i=0;  
}  return k+1;
}
void main()
{     char word[100],juzi[300];
printf("����Ҫ���ӣ�\n");
gets(juzi);
for(unsigned int i = 0; i < strlen(juzi); i++)
if(juzi[i] >= 'A' && juzi[i] <= 'Z')//��д����ĸ
juzi[i] += 32;//תСд
printf("����Ҫ���ҵĵ��ʣ�\n"); 
gets(word);
printf("���ʵĸ�����%d",chazhao(juzi,word));
}
