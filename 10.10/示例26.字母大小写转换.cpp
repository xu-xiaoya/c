#include<stdio.h>
//<string.h>�����ַ��� 
#include<string.h>
int main() {
  char s[100];
  gets(s);
  int i = 0;
//'\0'Ϊ����¼���ַ��������һ���ַ��� 
  while (s[i] != '\0') {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] += 32;
    i++;
  }
  puts(s);
}


//�ڶ��ַ�����
#include<stdio.h>
#include<string.h>
int main() {
  char s[100];
  gets(s);
//strlen()�������һ�ַ�����'\0'����������ͬ��
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
    //ascii���д�д��ĸ��Сд��ĸ���һ���ո�32�� 
    /*��д��ĸ+32 ��Сд
      Сд��ĸ-32 ����д*/ 
      s[i] += ' ';
  }
  puts(s);
} 
