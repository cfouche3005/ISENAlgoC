//
// Created by cfouche on 20/05/22.
//

#ifndef ISENALGOC_NODETRIE_H
#define ISENALGOC_NODETRIE_H
#include <stdbool.h>
#include <stdio.h>

#define ALPHABET_SIZE 26

struct NodeTrie {
    bool isEndWord;
    struct NodeTrie* Alphabet[ALPHABET_SIZE];
};

struct NodeTrie* createEmptyNodeTrie();
struct NodeTrie* createDict();

bool isEmptyDict(struct NodeTrie* dict);
void setEndWord(struct NodeTrie* dict, bool isEndWord);
unsigned int numberOfWords(struct NodeTrie* dict);
bool isWord(struct NodeTrie* dict, char* word);

void insertWord(struct NodeTrie* dict, char* word);

void deleteWord(struct NodeTrie* dict, char* word);
void deleteNodeTrie(struct NodeTrie** dict);

void displayDict(struct NodeTrie* dict);

void addDictFile(struct NodeTrie* dict, FILE* file);
struct NodeTrie* createDictFromFile(char* fileName);

int findWords(struct NodeTrie* dict, char* wordStart);
void autocompletionWord(struct NodeTrie* dict);


#endif //ISENALGOC_NODETRIE_H
