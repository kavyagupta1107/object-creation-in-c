#ifndef _dsa
#define _dsa
#include<stdio.h>
#include<stdlib.h>



void formlist();
int allocate_object();
void createlist(int key,int seqno);
void insertnew(int key,int seqno);
void fre_object(int x);
int deletenode(int key,int seqno);
int nodesinalist(int seqno);
void totalnodes();
void printfreelist();
void printlist(int seqno);
void defrag();
#endif
