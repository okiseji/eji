# include <cstdio>
# define maxn 1000010

int a[maxn],b[maxn];
int la,lb,i;
//a+=b
//a b unsigned
int main(){
	la=lb=0;
	char c=getchar();
	for(;c<'0'||c>'9';c=getchar());
	for(;c>='0'&&c<='9';c=getchar())a[++la]=c-'0';
	for(;c<'0'||c>'9';c=getchar());
	for(;c>='0'&&c<='9';c=getchar())b[++lb]=c-'0';
	
	for(i=1;i<=la&&i<lb;++i){	
		a[i]+=b[i];
		if(a[i]>9)a[i+1]+=a[i]-10,a[i]-=10;
	}
	while(a[la]>9){
		a[la+1]+=a[la]-10;
		a[la]-=10;
		++la;
	}
	for(int i=1;i<=la;++i)printf("%d",a[i]);
}
