#include<bits/stdc++.h>
using namespace std;


int findMin(int* distance , bool* visited,int n){
    int minV=-1;

    for(int i=0;i<n;i++){
        if(!visited[i] && (minV==-1 || distance[i]<distance[minV])){
            minV = i;
        }
    }
    return minV;
}

void dij(int ** edges,int n){

    int* distance = new int[n];

    bool* visited = new bool[n];

    for(int i=0;i<n;i++){
        distance[i] = INT_MAX;
        visited[i] = false;
    } 

    distance[0]=0;


    for(int i=0;i<n-1;i++){
        int minV = findMin(distance,visited,n);
        visited[minV] = true;

        for(int j=0;j<n;j++){
            if(edges[minV][j]!=0 && !visited[j]){
                int dist = distance[minV] + edges[minV][j];

                if(dist<distance[j])
                    distance[j] = dist;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<i<<" "<<distance[i]<<endl;
    }
    
}



int main(){
    int n;
    int e;
    cin>>n>>e;

    int ** edges = new int*[n];

    for(int i=0;i<n;i++){
        edges[i] = new int[n];

        for(int j=0;j<n;j++)
            edges[i][j] = 0;
    }

    for(int i=0;i<e;i++){
        int f,s,weight;

        cin>>f>>s>>weight;

        edges[f][s] = weight;
        edges[s][f] = weight;
    }
    cout<<endl;

    dij(edges,n);

    for(int i=0;i<n;i++)
        delete [] edges[i];

    return 0;
}