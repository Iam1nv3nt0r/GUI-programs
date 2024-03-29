// C# program for nth nodes of
// inorder traversals
using System;

class GFG
{
public static int count = 0;

/* A binary tree node has data, pointer
to left child and a pointer to right child */
public class Node
{
	public int data;
	public Node left;
	public Node right;
}

/* Helper function that allocates a
new node with the given data and null
left and right pointers. */
public static Node newNode(int data)
{
	Node node = new Node();
	node.data = data;
	node.left = null;
	node.right = null;

	return (node);
}

/* Given a binary tree, print its
nth nodes of inorder*/
public static void NthInorder(Node node, int n)
{
	if (node == null)
	{
		return;
	}

	if (count <= n)
	{
		/* first recur on left child */
		NthInorder(node.left, n);
		count++;

		// when count = n then print element
		if (count == n)
		{
			Console.Write("{0:D} ", node.data);
		}

		/* now recur on right child */
		NthInorder(node.right, n);
	}
}

// Driver Code
public static void Main(string[] args)
{
	Node root = newNode(10);
	root.left = newNode(20);
	root.right = newNode(30);
	root.left.left = newNode(40);
	root.left.right = newNode(50);

	int n = 4;

	NthInorder(root, n);
}
}

// This code is contributed by Shrikant13
