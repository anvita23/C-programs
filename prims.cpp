#include<iostream>
using namespace std;


int prims(int arr[][10], int v){
	bool visited[v];
	int res = 0;
	int i;
	int mst_weights[v];
	
	
	for(i=0;i<v;i++){
		//visited[i] = false;
		mst_weights[i] = INT_MAX;
	}
	
	mst_weights[0] = 0; 
	visited[v] = {false};
	
	int count;
	
	
	for(count=0;count<v;count++){
		int u=-1;
		for(i=0;i<v;i++)
			if(!visited[i] && (u==-1 || mst_weights[i]<mst_weights[u]))
				u=i;
				
		
		visited[u] = true;
		res = res + mst_weights[u];
		cout<<res;

	for(i=0;i<v;i++){
		if(arr[u][i]!=0 && !visited[i])
			mst_weights[i] = std::min(mst_weights[i],arr[u][i]);
			cout<<mst_weights[i];
		}
	}
	return res;
}


int main(){
	int v;
	cout<<"Enter number of nodes: ";
	cin>>v;
	
	int arr[v][10];
	
	int i,j,k;
	
	int v1,v2;
	int weight;
	
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			arr[i][j]=0;
		}
	}
	
	cout<<"Matrix initialized\n\n";
	

cout<<"Enter values for desired vertices\n\n";	
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			if(i!=j && j>i){
				cout<<"Enter Weight for "<<i<<"->"<<j<<" edge: ";
				cin>>weight;
				arr[i][j]=arr[j][i] = weight;
			}
		}
	}
	
	cout<<"Adjacency matrix for the graph: \n\n";
	
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	int res = prims(arr,v);
	cout<<"\n"<<"Minimum Cost: "<<res;
}
