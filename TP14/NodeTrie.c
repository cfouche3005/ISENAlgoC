//
// Created by Isen-Ouest on 10/05/2022.
//

#include "NodeTrie.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define WORD_MAX_SIZE 40

struct NodeTrie* createEmptyNodeTrie() {
    return NULL;
}
struct NodeTrie* createDict() {
    struct NodeTrie* dict = malloc(sizeof(struct NodeTrie));
    if (dict == NULL) {return dict;}
    setEndWord(dict, false);
    for (int i = 0; i < 26; ++i) {
        dict->Alphabet[i] = createEmptyNodeTrie();
    }
    return dict;
}

bool isEmptyDict(struct NodeTrie* dict) {
    return dict == NULL;
}
void setEndWord(struct NodeTrie* dict, bool isEndWord) {
    dict->isEndWord = isEndWord;
}
unsigned int numberOfWords(struct NodeTrie* dict) {
    unsigned int c = 0;
    if (dict->isEndWord) {
        c ++;
    }
    for (int i = 0; i < 26; ++i) {
        if (dict->Alphabet[i] != NULL) {
            c += numberOfWords(dict->Alphabet[i]);
        }
    }
    return c;
}
bool isWord(struct NodeTrie* dict, char* word) {
    unsigned int wordLen = strlen(word);
    if (wordLen == 0) {return true;}

    for (unsigned int i = 0; i < wordLen; ++i) {
        if (isEmptyDict(dict->Alphabet[word[i] - 'a'])) {
            return false;
        }
        dict = dict->Alphabet[word[i] - 'a'];
    }
    return dict->isEndWord;
}

void insertWord(struct NodeTrie* dict, char* word) {
    unsigned int wordLen = strlen(word);
    if (wordLen == 0) {return;}

    for (unsigned int i = 0; i < wordLen-1; ++i) {
        if (isEmptyDict(dict->Alphabet[word[i] - 'a'])) {
            dict->Alphabet[word[i] - 'a'] = createDict();
        }
        dict = dict->Alphabet[word[i] - 'a'];
    }
    if (isEmptyDict(dict->Alphabet[word[wordLen - 1] - 'a'])) {
        dict->Alphabet[word[wordLen - 1] - 'a'] = createDict();
    }
    setEndWord(dict->Alphabet[word[wordLen - 1] - 'a'], true);
}

void deleteWord(struct NodeTrie* dict, char* word) {
    unsigned int wordLen = strlen(word);
    for (unsigned int i = 0; i < wordLen; ++i) {
        if (isEmptyDict(dict)) {return;}
        dict = dict->Alphabet[word[i] - 'a'];
    }
    dict->isEndWord = false;
}
void deleteNodeTrie(struct NodeTrie** dict) {
    if (isEmptyDict(*dict)) {
        return;
    }
    for (int i = 0; i < 26; ++i) {
        deleteNodeTrie(&((*dict)->Alphabet[i]) );
    }
    free(*dict);
    *dict = NULL;
}

void displayDictRec(struct NodeTrie* dict, char* acc) {
    if (dict->isEndWord) {
        printf("%s, ", acc);
    }
    for (int i = 0; i < 26; ++i) {
        if (dict->Alphabet[i] != NULL) {
            char letter = i + 'a';
            char newAcc[WORD_MAX_SIZE];
            strcpy(newAcc, acc);
            displayDictRec(dict->Alphabet[i], strncat(newAcc, &letter, 1));
        }
    }
}
void displayDict(struct NodeTrie* dict) {
    char acc[WORD_MAX_SIZE] = "";
    displayDictRec(dict, acc);
}

void addDictFile(struct NodeTrie* dict, FILE* file) {
    char line[WORD_MAX_SIZE+2];
    char* word;
    while (fgets(line, WORD_MAX_SIZE+2, file) != NULL) {
        word = strtok(line, "\n");
        insertWord(dict, word);
    }
}
struct NodeTrie* createDictFromFile(char* fileName) {
    struct NodeTrie* dict = createDict();
    FILE* file = fopen(fileName, "r");
    if (file==NULL){
        printf("Error in opening file");
        return dict;
    }
    addDictFile(dict, file);
    return dict;
}

int findWords(struct NodeTrie* dict, char* wordStart) {
    unsigned int wordLen = strlen(wordStart);
    if (wordLen == 0) { return 1; }

    for (unsigned int i = 0; i < wordLen; ++i) {
        if (isEmptyDict(dict->Alphabet[wordStart[i] - 'a'])) {
            return 1;
        }
        dict = dict->Alphabet[wordStart[i] - 'a'];
    }
    displayDictRec(dict, wordStart);
    if (numberOfWords(dict) <= 1) {
        return 2;
    }
    return 0;
}
void autocompletionWord(struct NodeTrie* dict) {
    char wordInput[WORD_MAX_SIZE+1] = "";
    char input, _;
    int err;
    printf("Please enter the first letter of the word you want\nAnd enter # or $ if you want to stop the programme\n");
    printf("\n");
    scanf("%c%c", &input, &_);
    strncat(wordInput, &input, 1);
    while(input != '$' && input != '#') {
        err = findWords(dict, wordInput);
        if (err == 1) {
            return;
        } if (err == 2) {
            return;
        }
        printf("\n\n");
        scanf("%c%c", &input, &_);
        strncat(wordInput, &input, 1);
    }
}