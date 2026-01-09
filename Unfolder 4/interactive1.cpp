#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int l=1, r=1000000;
    while(l != r){
        int mid=(l+r+1)/2;
        printf("%d\n", mid);
        fflush(stdout);
        char res[3];
        scanf("%s", res);

        if(strcmp(res, "<")==0){
            r=mid-1;
        }else{
        l=mid;
        }
    }
    printf("! %d\n", l);
    fflush(stdout);
}
