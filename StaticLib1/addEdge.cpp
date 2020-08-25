// StaticLib1.cpp : Statik kitaplık için işlevleri tanımlar.
//

/*#include "pch.h"
#include "framework.h"
#include "addEdge.h"

void addEdge(Graph* graph, int src, int dest, int weight);
{
	struct AdjListNode* newNode = newAdjListNode(dest, weight);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;

	// Since graph is directed, add an edge from dest to src also 
	newNode = newAdjListNode(src, weight);
	newNode->next = graph->array[dest].head;
	graph->array[dest].head = newNode;


	//Build etmekte sorun yaşadığım için test metodu olmuyor.

}

