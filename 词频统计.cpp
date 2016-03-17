#include <stdlib.h>
#include <stdio.h>
#include <cstring>
int chazhao(char *str1,char *str2)
{    char *p=str1;//p指向句子    
int i=0,k=0;//k统计个数    
while(*p!='\0')//句子结束退出循环       
{           while(*p!=' ')//单词结束退出循环 查找下个单词       
{                if(*p!=str2[i])//遇到不同字母 指向下一个单词                
while(*p!=' ') p++;                else//字母相同                   
{                      if(*(p+1)==' ')//单词结束 计数加一                          
{                             k++;                             p++;                          
}                     else//比较下一个字母                         
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
printf("输入要句子：\n");
gets(juzi);
for(unsigned int i = 0; i < strlen(juzi); i++)
if(juzi[i] >= 'A' && juzi[i] <= 'Z')//大写的字母
juzi[i] += 32;//转小写
printf("输入要查找的单词：\n"); 
gets(word);
printf("单词的个数：%d",chazhao(juzi,word));
}
