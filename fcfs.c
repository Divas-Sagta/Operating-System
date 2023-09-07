#include<stdio.h>
#include<stdlib.h>

typedef struct pr{
   int pid;
   int at;
   int bt;
   int ct;
   int tat;
   int wt;
}pr;

int comparebyAt(const void *a,const void * b){
      return ((pr*)a)->at-((pr*)b)->at;

}

int main(){
  int n;
  scanf("%d",&n);
  pr p[n];
  for(int i=0;i<n;i++){
      int a,b;
      printf("Enter At,Bt\n");
      scanf("%d%d",&a,&b);
      p[i].pid=i+1;
      p[i].at=a;
      p[i].bt=b;
  }
 
  qsort(p,n,sizeof(pr),comparebyAt);
  p[0].ct=p[0].at+p[0].bt;
  p[0].tat=p[0].ct-p[0].at;
  p[0].wt=p[0].tat-p[0].bt;
  float ttat=p[0].tat,twt=p[0].wt;
  for(int i=1;i<n;i++){
      if(p[i-1].ct<p[i].at){
           p[i].ct=p[i].at+p[i].bt;      
      }
      else{
          p[i].ct=p[i-1].ct+p[i].bt;
      }
      p[i].tat=p[i].ct-p[i].at;
      p[i].wt=p[i].tat-p[i].bt;
      ttat+=p[i].tat;
      twt+=p[i].wt;
  }
  float av_tat=ttat/n,av_wt=twt/n;
  printf("average tat : %f ",av_tat);
  printf("average wt : %f ",av_wt);

}
  