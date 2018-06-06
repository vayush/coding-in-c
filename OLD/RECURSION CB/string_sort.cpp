#include<iostream>
#include<cstring>
using namespace std;

int compare(char str1[],char str2[]){
    int i=0,j=0;
    while(str1[i]!='\0'&&str2[j]!='\0'){
        if(str1[i]>str2[j]){
            return 1;
        }
        else if(str1[i]<str2[j]){
            return -1;
        }
        else{
            i++;
            j++;
        }
    }
    if(str1[i]=='\0'&&str2[j]=='\0'){
        return 0;
    }
    else if(str1[i]=='\0'){
        return -1;
    }
    else{
        return 1;
    }


}

void bubbleSort(char str[][100],int n){

        for(int i=0;i<=n-2;i++){
            for(int j=0;j<=n-i-2;j++){
                if(compare(str[j],str[j+1])>0){
                    char temp[100];
                    strcpy(temp,str[j]);
                    strcpy(str[j],str[j+1]);
                    strcpy(str[j+1],temp);
                }
            }
        }

}

int main(){

    int n;
    char str[100][100];
    cin>>n;
    //cin.get();
    ///Input
    for(int i=0;i<n;i++){
        //cin.getline(str[i],100);
        cin>>str[i];
    }
    ///Sort
    bubbleSort(str,n);

    ///Output
    for(int i=0;i<n;i++){
        cout<< str[i] <<endl;
    }


return 0;
}
