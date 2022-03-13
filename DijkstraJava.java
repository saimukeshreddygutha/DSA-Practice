import java.io.*;
import java.util.*;

public class DijkstraJava {

	public static int selectU(boolean visited[], int distance[], int n){

		int min = Integer.MAX_VALUE;
		int v=0;

		for(int i=0;i<n;i++){
			if((visited[i]==false) && (distance[i]<min)){
				min=distance[i];
				v=i;

			}
		}
		return v;

	}

	public static void dijstra(int cost[][], int source_node, int n){

		int[] distance = new int[n];
		Arrays.fill(distance, Integer.MAX_VALUE);

		boolean[] visited = new boolean[n];
		Arrays.fill(visited,false);

		int[] parent = new int[n];
		Arrays.fill(parent, -1);

		visited[source_node]=true;
		distance[source_node]=0;


		for(int i=1;i<n;i++){

			int u = selectU(visited,distance,n);


			visited[u]=true;

			for(int j=0;j<n;j++){

				if((visited[j]==false) && (distance[u]!=Integer.MAX_VALUE) && (cost[u][j]!=0) && (distance[j]>distance[u]+cost[u][j])){
					distance[j]=distance[u]+cost[u][j];
					parent[j]=u;
				}
			}
		}


		for(int i=0;i<n;i++){

			System.out.println("Distance from "+source_node+" to "+i+" is "+distance[i]);
			System.out.println("Path :");

			int tv= i;
			while(tv!=-1){
				System.out.print(" --> "+tv);
				tv=parent[tv];
			}
			System.out.println();
		}

	}

	public static void main(String[] args) {

		try {
			System.setIn(new FileInputStream("input.txt"));
			System.setOut(new PrintStream(new FileOutputStream("output.txt")));
		} 

		catch (Exception e) {
			System.err.println("Error");
		}

		int n;
		Scanner scan = new Scanner(System.in);
		n=scan.nextInt();

		int[][] cost = new int[n][n];

		for(int i=0;i<n;i++){

			for(int j=0;j<n;j++){
				cost[i][j] = scan.nextInt();
			}
		}

		int source_node = scan.nextInt();

		dijstra(cost, source_node, n);


	}
}