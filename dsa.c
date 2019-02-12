#include<stdio.h>
#include<stdlib.h>
#include"dsa.h"
#include"other.h"


void formlist(){
freel=0;
headoflist[0]=0;int i;
for( i=0;i<146;i=i+3){
A[i]=-1;A[i+1]=i+3;A[i+2]=-1;}
A[i]=-1;
A[i+1]=-1;
A[i+2]=-1;
return;}

int allocate_object(){
if(freel==-1){return -1;}
else {int x;x=freel;
       freel=A[x+1];headoflist[0]=A[x+1];
       return x;}}

void createlist(int key,int seqno){
int x=allocate_object();
headoflist[seqno]=x;
A[x]=key;A[x+1]=-1;A[x+2]=-1;
return;
}

void fre_object(int x){
A[x+1]=freel;
A[x]=-1;A[x+2]=-1;
freel=x;headoflist[0]=x;
return;}


void printlist(int seqno){int head=headoflist[seqno];
printf("elemets of list %d are\n",seqno);
printf("key    next    prev\n");
while(head!=-1){
printf("%d      %d      %d\n",A[head],A[head+1],A[head+2]);
head=A[head+1];
}
//printf("%d    %d    %d\n",A[head],A[head+1],A[head+2]);
return;}



void printfreelist(){
int head=headoflist[0];
printf("elements of free list are:\n");
printf("[");
while(A[head+1]!=-1){printf("%d,",head);head=A[head+1];}
printf("%d,",head);
printf("]");
return;}

int nodesinalist(int seqno){
int head=headoflist[seqno];
if(head==-1){return 0;}
else{int count;
while(A[head+1]!=-1){ head=A[head+1];count=count+1;} count=count+1; return count;  }
}

void totalnodes(){
int p=1;int total=0;
for(p;p<15;p=p+1){int d=0;
int c=headoflist[p];
if(c==-1){d=0;}
else{
while(A[c+1]!=-1){ c=A[c+1];d=d+1;} d=d+1;   }
total=total+d;

}
printf("total nodes are %d\n",total);}

int deletenode(int key,int seqno){
int n=headoflist[seqno];
if(nodesinalist(seqno)==1){headoflist[seqno]=-1;fre_object(n);return 1;}

else if(A[n]==key){int next=A[n+1];
              headoflist[seqno]=next;
              A[next+2]=-1;
              fre_object(n);return 1;}
              
              
else{
    while(n!=-1 & A[n]!=key){n=A[n+1]; if(n==-1){return -1;}}
    
    if(A[n+1]==-1){ int prev=A[n+2]; A[prev+1]=-1;fre_object(n);return 1;}
    
    else{int prev=A[n+2];int next=A[n+1];
          A[prev+1]=next;A[next+2]=prev;
          fre_object(n);
           return 1;}}}

void insertnew(int key,int seqno){
int head=headoflist[seqno];int x=allocate_object();
if(head==-1){headoflist[seqno]=x;A[x]=key;A[x+1]=-1;A[x+2]=-1;} 
else if(A[head]>key){
A[x+1]=head;
A[x+2]=-1;
headoflist[seqno]=x;
A[x]=key;A[head+2]=x; }
else{
while(A[head]<key){ head=A[head+1];
if(head==-1){break;}
}
if(head==-1){ int n=headoflist[seqno];
while(A[n+1]!=-1){n=A[n+1];}  A[x]=key;A[x+2]=n;A[n+1]=x;A[x+1] =-1;}
else{ int next=head;
int prev=A[head+2];
A[x]=key; A[x+1]=next; A[x+2]=prev;
A[next+2]=x;A[prev+1]=x;}}
return;}


void defrag(){int B[150];int k=0;int i;
for(i=1;i<15;i=i+1){
 int head=headoflist[i];
 int no=nodesinalist(i);
 if(no!=0){headoflist[i]=k;}
 int j=0;
    for(j;j<no;j=j+1){
        B[k]=A[head];
        if(k==0 | j==0){B[k+2]=-1;}
        else{B[k+2]=k-3;}
        
       // if(j==0){B[k+2]=-1;}
        
        if(k==147 | A[head+1]==-1){B[k+1]=-1;}
        else{B[k+1]=k+3;}
         
        //if(j==no-1){B[k+1]=-1;}
       // int w=k;
        
        k=k+3;head=A[head+1];
        
        if(head==-1){//A[w+1]=-1;
            break;
        }
        
    }}
    headoflist[0]=k;
    int g=k;
    for(g;g<150;g=g+3){
        B[g]=-1;B[g+2]=-1;
        if(g==147){B[g+1]=-1;}
        else{B[g+1]=g+3;}}
        
        int q;
        for(q=0;q<150;q=q+1){A[q]=B[q];}
        return ;}
        
