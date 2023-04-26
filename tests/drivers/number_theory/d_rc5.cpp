/* Testing the RC5 stream cipher encryption algorithm on fields
 * of text.
 */
#include "../../include/number_theory/rc5.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

int main() {
    /*
     * Provide some details on how to use this algorithm
     */
    std::cout << "<--------------------------------------------------"
                 "---->\n\n";
    std::cout << "RIVEST CIPHER (RC5) EXAMPLE\n\n";

    /*<--------------------------------INIT--------------------------------->*/

    // declare RC5 class obj
    RC5 rc;

    /*
     * declare some key values and strings to hash
     * these first 3 plaintext strings are verified from the RC4 wiki
     * and will be displayed when using a traditional swap method
     */
    // expected hash = BBF316E8D940AF0AD3
    char *key0 = (char *)"Key";
    char *text0 = (char *)"Plaintext";
    // expected hash = 1021BF0420
    char *key1 = (char *)"Wiki";
    char *text1 = (char *)"pedia";
    // expected hash = 45A01F645FC35B383552544B9BF5
    char *key2 = (char *)"Secret";
    char *text2 = (char *)"Attack at dawn";

    /*
     * char value for using one of the following
     * XOR swap         0
     * traditional swap 1
     * byte swap        2
     */
    int x_swap = 0;
    int t_swap = 1;
    int b_swap = 2;

    // declare a ciphertext pointer and allocate memory
    unsigned char *hashtext_0 =
        (unsigned char *)malloc(sizeof(int) * strlen(text0));

    printf("String before hash : %s\n", text0);

    /*<-------------------------------COMPUTE-------------------------------->*/
    /*
     * the main arguments are <key> & <plaintext> + allocated memory
     * of ciphertext as well as the swap type (x_swap true/false)
     */
    rc.compute(key0, text0, hashtext_0, x_swap);
    printf("String after hash : ");

    // printing the computed hashes
    for (size_t i = 0, len = strlen(text0); i < len; i++) {
        if (x_swap == true) {
            printf("|x%02hhx| ", hashtext_0[i]);
        } else {
            printf("%02hhX", hashtext_0[i]);
        }
    }
    printf("\n");

    free(hashtext_0);
    return EXIT_SUCCESS;
}
