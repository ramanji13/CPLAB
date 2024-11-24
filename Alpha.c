print A
#include<stdio.h>
int main() {
int n;
printf("enter any odd numbers");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=2*n-1;j++){
if(j==n-i+1||j==n+i-1||(i==(n/2)+1&&j>=n-i+1&&j<=n+i-1)){
printf("#");
}else printf(" ");
}printf("\n");
}
} B
#include<stdio.h>
int main() {
int n;
printf("enter any odd numbers");
scanf("%d",&n);
for(int i=1;i<=2*n+1;i++){
for(int j=1;j<=n;j++){
if(j==1||j==n||i==n+1||i==1||i==2*n+1){
printf("B");
}else printf(" ");
}printf("\n");
}
} C
#include<stdio.h>
int main() {
int n;
printf("enter any odd numbers");
scanf("%d",&n);
for(int i=1;i<=2*n+1;i++){
for(int j=1;j<=n;j++){
if(j==1||i==2*n+1||i==1){
printf("c");
}else printf(" ");
}printf("\n");
}
}
