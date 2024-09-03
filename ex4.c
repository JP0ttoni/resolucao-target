#include <stdio.h>

int main() {
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    double total = sp + rj + mg + es + outros;

    double percentual_sp = (sp / total) * 100;
    double percentual_rj = (rj / total) * 100;
    double percentual_mg = (mg / total) * 100;
    double percentual_es = (es / total) * 100;
    double percentual_outros = (outros / total) * 100;

    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percentual_sp);
    printf("RJ: %.2f%%\n", percentual_rj);
    printf("MG: %.2f%%\n", percentual_mg);
    printf("ES: %.2f%%\n", percentual_es);
    printf("Outros: %.2f%%\n", percentual_outros);

    return 0;
}
