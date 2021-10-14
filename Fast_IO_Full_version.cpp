// Fast IO for Competitive Programming 
// Codes by drway
// Copyright (C) drway

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

// HEADERS SHOULD BE INCLUDED HERE
//To run this code, you must include cstdio/stdio.h, string, cctype/ctype.h

#include<cstdio>
#include<string>
#include<cctype>

// the size of the buffer, which is believed to be the fastest when the size is 2^15
#define bufSIZE 1<<15

// definations for reading in
#ifdef ONLINE_JUDGE
#define getchar()(in_p1==in_p2&&(in_p2=(in_p1=in_buf)+std::fread(in_buf,1,bufSIZE,stdin),in_p1==in_p2)?EOF:*in_p1++)
char in_buf[bufSIZE],*in_p1=in_buf,*in_p2=in_buf;
#endif

// functions to read in
template<typename T>inline void redi(T& ret) {
    ret=0;T f=1;char ch=getchar();
    while (ch<'0'||ch>'9') {if (ch=='-') f=-f;ch=getchar();}
    while (ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    ret*=f;
}
inline void redi(std::string& ret) {
    char ch=getchar();
    ret.clear();
    while(ch!=EOF&&ch!='\n'&&!isblank(ch))ret.push_back(ch),ch=getchar();
}
template <typename T,typename... Args> inline void redi(T& t, Args&... args)
{
    redi(t);redi(args...);
}
inline void getline(std::string& ret) {
    char ch=getchar();
    ret.clear();
    while(ch!=EOF&&ch!='\n')ret.push_back(ch),ch=getchar();
}

// definations for printing out
char out_buf[bufSIZE];
int out_p1=-1;
const int out_p2=(bufSIZE)-1;

// functions to print out
inline void flush(){
  std::fwrite(out_buf,1,out_p1+1,stdout),out_p1=-1;
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
inline void wrtn(const std::string &s){
  for(auto ch:s)putc(ch);
}
inline void wrtn(const char s[]){
  wrtn((std::string)s);
}
inline void wrtn(char s[]){
  wrtn((std::string)s);
}
template<typename T>inline void wrti(T x){
	wrtn(x),putc('\n');
}

//start your program here

