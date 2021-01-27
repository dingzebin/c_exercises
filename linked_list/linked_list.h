// define Node struct
struct Node 
{
	int value;
	struct Node *next;
};

// add value
int add(struct Node *list, int value);

// remove node by value
int delete_node(struct Node *list, int value);

// get by index
struct Node *get_node(struct Node *list, int index);


