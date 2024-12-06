#include<stdio.h>
#include<conio.h>
int cmpstr(char a[100],char b[100]);
int main () {
char a[100],b[100];
int res;
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",a);
printf("Enter b string: ");
scanf("%[^#]s",b);
res=cmpstr(a,b);
if(res>0){
printf("1");
} else if(res<0){
printf("-1");
} else {
printf("0");
}
getch();
return 0;
}
int cmpstr(char a[100],char b[100]){
int i=0,j;
while(a[i]!='\0' || b[i]!='\0'){
if(a[i]!=b[i]){
return a[i]-b[i];
}
i++;
}
return 0;
}