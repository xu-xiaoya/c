#include<stdio.h>
int main() { 
  int count[26] = {0};
  char s[100];
  gets(s);
  for (int i = 0; s[i] != '\0'; i++)
//��ÿ����ĸͨ����ȥa��asciiֵ��ת�����±꣬����a-'a'=0,b-'a'=1 
//++������ĳ���ֵ��һ�����磺�ַ�������һ��aʱ��count[0]+1.
  ++count[s[i] - 'a'];
  int k = 0;
  for (int i = 1; i < 26; i++)
//�ж��ĸ��±�ֵ��󣬲����±��ñ��� k ָ����
    if (count[i] > count[k]) k = i;
//k + 'a��ʾ������±����'a'��ascii�룬��תΪ��ĸ��ʾ��
  printf("%c\n", k + 'a');
}
