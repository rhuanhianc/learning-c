#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

void print_big_letter(char letter) {
    char *letters[] = {
        "  ###  \n #   # \n#     #\n#######\n#     #\n",  // A
        "###### \n#     #\n###### \n#     #\n###### \n",  // B
        " ##### \n#     #\n#      \n#     #\n ##### \n",  // C
        "###### \n#     #\n#     #\n#     #\n###### \n",  // D
        "#######\n#      \n#####  \n#      \n#######\n",  // E
        "#######\n#      \n#####  \n#      \n#      \n",  // F
        " ##### \n#      \n#   ###\n#     #\n ##### \n",  // G
        "#     #\n#     #\n#######\n#     #\n#     #\n",  // H
        " ##### \n   #   \n   #   \n   #   \n ##### \n",  // I
        "   ####\n     # \n     # \n#    # \n ####  \n",  // J
        "#    # \n#   #  \n####   \n#   #  \n#    # \n",  // K
        "#      \n#      \n#      \n#      \n#######\n",  // L
        "#     #\n##   ##\n# # # #\n#  #  #\n#     #\n",  // M
        "#     #\n##    #\n# #   #\n#  #  #\n#    ##\n",  // N
        " ##### \n#     #\n#     #\n#     #\n ##### \n",  // O
        "###### \n#     #\n###### \n#      \n#      \n",  // P
        " ##### \n#     #\n#     #\n#   # #\n #### #\n",  // Q
        "###### \n#     #\n###### \n#   #  \n#    # \n",  // R
        " ##### \n#      \n ##### \n      #\n ##### \n",  // S
        "#######\n   #   \n   #   \n   #   \n   #   \n",  // T
        "#     #\n#     #\n#     #\n#     #\n ##### \n",  // U
        "#     #\n#     #\n #   # \n  # #  \n   #   \n",  // V
        "#     #\n#  #  #\n# # # #\n##   ##\n#     #\n",  // W
        "#     #\n #   # \n  ###  \n #   # \n#     #\n",  // X
        "#     #\n #   # \n  ###  \n   #   \n   #   \n",  // Y
        "#######\n    #  \n   #   \n  #    \n#######\n"   // Z
    };
    
    if (letter >= 'A' && letter <= 'Z') {
        printf("%s", letters[letter - 'A']);
    } else {
        printf("      \n      \n      \n      \n      \n");
    }
}

void animate_letter(char letter) {
    char *animation[] = {
        "      \n      \n      \n      \n      \n",
        "     .\n      \n      \n      \n      \n",
        "    ..\n      \n      \n      \n      \n",
        "   ...\n      \n      \n      \n      \n",
        "  ....\n      \n      \n      \n      \n",
        " .....\n      \n      \n      \n      \n",
    };

    for (int i = 0; i < 6; i++) {
        printf("\033[5A");  // Move o cursor 5 linhas para cima
        printf("%s", animation[i]);
        fflush(stdout);
        usleep(100000);  // Espera 0.1 segundos
    }

    printf("\033[5A");  // Move o cursor 5 linhas para cima
    print_big_letter(letter);
    fflush(stdout);
    usleep(200000);  // Espera 0.2 segundos
}

int main() {
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);

    for (int i = 0; i < strlen(nome); i++) {
        animate_letter(toupper(nome[i]));
        printf("\n");
    }

    return 0;
}