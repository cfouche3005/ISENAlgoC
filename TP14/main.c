#include <stdio.h>
#include "NodeTrie.h"

int main(int argc, char** argv) {
/*    struct NodeTrie* dict = createDict();
    insertWord(dict, "test");
    insertWord(dict, "te");
    displayDict(dict);
    printf("\n---------------------\n");
    deleteWord(dict, "test");
    displayDict(dict);
    printf("isWord : te -> %d\n", isWord(dict, "te"));

    struct NodeTrie* dictFile = createDictFromFile(argv[1]);
    printf("\n---------------------\n\n");
    printf("NumberOfWords dictFile : %d", numberOfWords(dictFile));
    printf("\n---------------------\n");
    autocompletion(dictFile, "zo");
*/
    if (argc <= 1) {
        printf("Please provide a file name as argument of the programme.\n EX : %s dict_anglais.txt\n",argv[0]);
        return 1;
    }
    struct NodeTrie* autocompletion = createDictFromFile(argv[1]);
    printf("Thank for the trust, your file contain %d words\n\n", numberOfWords(autocompletion));
    autocompletionWord(autocompletion);
    printf("\n\nThanks for using this programme.\nPlease restart it if you want to find an other world.\n\nHope to see you back soon !!!");
    deleteNodeTrie(&autocompletion);

    return 0;
}
