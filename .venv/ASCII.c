#include <stdio.h>
int ctr[101];
int num;
int main(){
  int i,x,min_num,result=0;
  printf("How many number want to input:");
  scanf("%d",&num);
  printf("Input the integers value:\n");
  for(i=0;i<num;i++){
    scanf("%d",&x);
    ctr[x]++;
  }

    for(i=0;i<19;i++){
      printf(" Your array is:%d \n",ctr[i]);
    }

  min_num=10;
  for(i=0;i<101;i++){
    if(ctr[i]>0 && ctr[i]<min_num){
      result=i;
      min_num=ctr[i];
    }
  }
  printf("smallest among the said integers:%d",result);
  return 0;
}
