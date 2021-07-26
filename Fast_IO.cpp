#include<bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define getchar()(p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++)
char buf[1<<21],*p1=buf,*p2=buf;
#endif
#define int long long
template<typename T>inline void redi(T& ret) {
    ret=0;T f=1;char ch=getchar();
    while (ch<'0'||ch>'9') {if (ch=='-') f=-f;ch=getchar();}
    while (ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    ret*=f;
}
template <typename T,typename... Args> inline void redi(T& t, Args&... args)
{
    redi(t);redi(args...);
}
char buffer[1<<21];
int p11=-1;
const int p22=(1<<21)-1;
inline void flush(){
  fwrite(buffer,1,p11+1,stdout),p11=-1;
}
inline void putc(const char &x){
  if (p11==p22)flush();
  buffer[++p11]=x;
}
template<typename T>inline void wrtn(T x){
  static char buf[15];
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
template<typename T>inline void wrti(T x){
	wrtn(x),putc('\n');
}
signed main(){
	
	return 0;
}
