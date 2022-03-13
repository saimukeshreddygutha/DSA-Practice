#include<bits/stdc++.h>
using namespace std;


int selectMinUnvisitedVertex(vector <int> distances,vector <bool> visited){

	int n=visited.size();
	int min=INT_MAX;
	int u ;
	for(int i=0;i<n;i++){

		/*
		1. Check if it is already visited
		2. Check if it can be relaxable and find for the vertex with minimum distance
		*/
		if((!visited[i]) && (distances[i]<min)){
			min=distances[i];
			u=i;
		}
	}

	return u;
}

void dijkstra(vector < vector <int> > cost, int source_node){

	int n=cost[0].size();
	vector <int> distances(n,INT_MAX);
	vector <int> parent(n,-1);
	vector <bool> visited(n,false);



	distances[source_node]=0;
	visited[source_node]=true;
	//iterate till all other n-1 nodes are visited

	for(int i=1;i<n;i++){

		//out of all unvisited vertices select the vertex which is at minimum distance out of all the relaxable nodes and visit that
		int u = selectMinUnvisitedVertex(distances,visited);

		visited[u]=true;
		/*
		1. we should add or relax a vertex only if it is not visited using visited[j]
		2. Add a vertex only if there is an edge between u and j
		3. The distance through u must benefit the distance to j (distances[j]>cost[u][j]+distances[u])
		4. The node u should be visited with less than INT_MAX otherwise cost[u][j]+distances[u] may give garbage value
		*/

		for(int j=0;j<n;j++){
			if((!visited[j]) && (cost[u][j]!=0) && (distances[j]>cost[u][j]+distances[u]) && (distances[u]!=INT_MAX)){
				//update the distance
				distances[j]= cost[u][j] + distances[u];
				//update the parent
				parent[j] = u;
			}
		}
	}


	for(int i=0;i<n;i++){
		cout << "Distance from "<< source_node << " to " << i << " is : " << distances[i] << endl;
		cout<<"Path : ";
		int v = i;
		while(v!=-1){
			cout<<v<<" --> ";
			v=parent[v];
		}
		cout<<endl;

	}
	return;


}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector < vector <int> > cost;

    for(int i=0;i<n;i++){
    	vector <int> row;
    	for(int j=0;j<n;j++){
    		int temp;
    		cin>>temp;
    		row.push_back(temp);
    	}
    	cost.push_back(row);
    }


    int source_node;
    cin >> source_node;

    dijkstra(cost,source_node);


    return 0;

}
