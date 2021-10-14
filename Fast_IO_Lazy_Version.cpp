// Fast IO for Competitive Programming, Lazy Version
// Codes by drway
// Copyright (C) drway

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

// This version of code deleted all the comments in the full code,
// included bits/stdc++.h and uses namespace std for convenience
// It is simpler to use it in Competitive Programming

#include<bits/stdc++.h>
using namespace std;

#define bufSIZE 1<<15

#ifdef ONLINE_JUDGE
#define getchar()(in_p1==in_p2&&(in_p2=(in_p1=in_buf)+fread(in_buf,1,bufSIZE,stdin),in_p1==in_p2)?EOF:*in_p1++)
char in_buf[bufSIZE],*in_p1=in_buf,*in_p2=in_buf;
#endif

template<typename T>inline void redi(T& ret) {
    ret=0;T f=1;char ch=getchar();
    while (ch<'0'||ch>'9') {if (ch=='-') f=-f;ch=getchar();}
    while (ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    ret*=f;
}
inline void redi(string& ret) {
    char ch=getchar();
    ret.clear();
    while(ch!=EOF&&ch!='\n'&&!isblank(ch))ret.push_back(ch),ch=getchar();
}
template <typename T,typename... Args> inline void redi(T& t, Args&... args)
{
    redi(t);redi(args...);
}
inline void getline(string& ret) {
    char ch=getchar();
    ret.clear();
    while(ch!=EOF&&ch!='\n')ret.push_back(ch),ch=getchar();
}

char out_buf[bufSIZE];
int out_p1=-1;
const int out_p2=(bufSIZE)-1;

inline void flush(){
  fwrite(out_buf,1,out_p1+1,stdout),out_p1=-1;
}
inline void putc(const char &x){
  if (out_p1==out_p2)flush();
  out_buf[++out_p1]=x;
}
template<typename T>inline void wrtn(T x){
  static char buf[20];
  static T len=-1;
  if (x>=0){
    do{
      buf[++len]=x%10+48,x/=10;
    }while(x);
  } else{
    putc('-');
    do{
      buf[++len]=-(x%10)+48,x/=10;
    }while(x);
  }
  while(len>=0){
    putc(buf[len]),--len;
  }
}
inline void wrtn(const string &s){
  for(auto ch:s)putc(ch);
}
inline void wrtn(const char s[]){
  wrtn((string)s);
}
inline void wrtn(char s[]){
  wrtn((string)s);
}
template<typename T>inline void wrti(T x){
	wrtn(x),putc('\n');
}
