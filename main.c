#include<stdio.h>
#include<stdlib.h>
#include"dsa.h"
#include"other.h"




int main(){int f=0;
for(f;f<15;f=f+1){headoflist[f]=-1;}

formlist();
while(1){
printf("%s", "Select an option:\n1. Create a new list\n2. Insert a new element in a given list in sorted order\n3. Delete an element from a given list\n4. Count total elements excluding freelist\n5. Count total elements of a list\n6. Display all lists\n7. Display freelist\n8. Perform defragmentation\n9. Press 0 to exitt ");

int k;
scanf("%d",&k);
if(k==0){exit(0);}

else if(k==1){
printf("The sequence number of the newly created list is: ");
int seqno;
scanf("%d",&seqno);
printf("Enter key value to be inserted in the newly created list");
int key;scanf("%d",&key);
if(allocate_object()==-1){printf("failure-memory not available\n");}
else {createlist(key,seqno);printf("SUCCESS\n");}
}

else if(k==2){
printf("List you want to insert in");
int seqno;
scanf("%d",&seqno);
printf("Enter the key value");
int key;scanf("%d",&key);
if(allocate_object()==-1){printf("failure-mem not available\n");}
else {insertnew(key,seqno);printf("SUCCESS\n");}
}

else if(k==3){
printf("List you want to delete from");
int seqno;
scanf("%d",&seqno);
printf("Enter the key value");
int key;scanf("%d",&key);
if(headoflist[seqno]==-1){printf("failure-list empty\n");}
else{int m=deletenode(key,seqno);
            if(m==-1){printf("failure-element not found\n");}
            else{printf("SUCCESS\n");}
}}

else if(k==5){
printf("Enter the list number");
int seqno;
scanf("%d",&seqno);
int c=nodesinalist(seqno);
printf("nodes in the list:");
printf("%d\n",c);
}

else if(k==4){totalnodes();}

else if(k==7){printfreelist();}

else if(k==6){int m=1;
for(m;m<15;m=m+1){
if (headoflist[m]==-1){continue;}
else{printlist(m);}
}}


else{defrag();
    printf("SUCCESS\n");
}

}}

