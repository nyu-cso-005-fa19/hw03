#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

#include "minheap.h"

// A node in a Huffman code tree
struct code_tree_s {
  char data;
  int weight;
  struct code_tree_s* left;
  struct code_tree_s* right;
};

typedef struct code_tree_s code_tree;

// A code table entry
struct code_s {
  unsigned char bits[16];
  int len;
};

typedef struct code_s code;

// Count the number of occurrences of each ASCII character in the
// file plain_file_name and store them in the array weights.
// The size of weights should be 128 (the number of ASCII characters).
void count_occurrences(char* plain_file_name, int* weights) {
  // TODO: add your code here
}

// Write the weights out into the file weight_file_name.
// The size of weights should be 128 (the number of ASCII characters).
void write_weight_table(char* weight_file_name, int* weights) {
  // TODO: add your code here
}

// Read the contents of file weight_file_name and write the result into
// the array weights.
// The size of weights should be 128 (the number of ASCII characters).
void read_weight_table(char* weight_file_name, int* weights) {
  // TODO: add your code here
}

// Return the weight of the tree rooted at n
int weight_of_tree(code_tree* n) {
  // TODO: add your code here
}

// Create a new leaf node of a code tree.
code_tree* make_leaf(char c, int w) {
  // TODO: add your code here
}

// Create a new internal node of a code tree with
// left successor l and right successor r.
code_tree* make_fork(code_tree* l, code_tree* r) {
  // TODO: add your code here
}

// Create a code tree from the given table of weights.
// The size of weights should be 128 (the number of ASCII characters).
code_tree* create_code_tree(int* weights) {
  // TODO: add your code here
}

// Free all nodes in the code tree rooted at node.
void delete_code_tree(code_tree* node) {
  // TODO: add your code here
}

// Populate the code table tbl with the codes represented by
// the code tree rooted at r.
void create_code_table(code_tree* r, code* tbl) {
  // TODO: add your code here
}

// Encode the contents of the text file in_file_name into the file
// out_file_name using the code table tbl.
void encode(char* in_file_name, char* out_file_name, code* tbl) {
  // TODO: add your code here
}

// Decode the contents of the file in_file_name using the given code tree
// and write the resulting plain text into the file out_file_name.
void decode(char* in_file_name, char* out_file_name, code_tree* root) {
  // TODO: add your code here
}


// The main function of the application.
int main(int argc, char** argv) {
  // TODO: add your code here

  return 0;
}
