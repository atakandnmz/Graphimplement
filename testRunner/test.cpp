#include <iostream>
#include <gtest/gtest.h>
#include <vector>
#include<bits/stdc++.h>


TEST(TestCaseName, TestName) {
	struct AdjListNode* newNode = newAdjListNode(0, 4);
	newNode->next = graph->array[src].head;
	graph->array[2].head = newNode;
 GTEST_ASSERT_EQ(0,4);
}