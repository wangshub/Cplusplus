#include <cstdio>
#include <algorithm>
using namespace std;
const int N=100;
int k,n,i,p;
int v[N];
int main()
{
	while (scanf("%d%d",&n,&k) != EOF) {
		for (i=0;i<n;i++) scanf("%d",&v[i]);
			k--;
		nth_element(v,v+k,v+n);
		printf("%d\n",v[k]);
	}
	return 0;
}