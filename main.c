

int main() {
    struct Voiture voitures[MAX_VOITURES] = {
        {"Toyota", "Corolla", 2020, 50.0, 1},
        {"Ford", "Fiesta", 2018, 40.0, 1},
        {"Peugeot", "208", 2021, 55.0, 1},
        {"Renault", "Clio", 2019, 45.0, 1},
        {"Volkswagen", "Golf", 2022, 60.0, 1}
    };
    int choix;

    do {

        printf("\n--- Menu de Location de Voiture ---\n");
        printf("1. Afficher les voitures disponibles\n");
        printf("2. Louer une voiture\n");
        printf("3. Rendre une voiture\n");
        printf("4. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                afficherVoituresDisponibles(voitures, MAX_VOITURES);
                break;
            case 2:
                louerVoiture(voitures, MAX_VOITURES);
                break;
            case 3:
                rendreVoiture(voitures, MAX_VOITURES);
                break;
            case 4:
                printf("Merci d'avoir utilise notre service de location de voiture.\n");
                break;
            default:
                printf("Option invalide! Veuillez ressayer.\n");
        }
    } while (choix != 4);

    return 0;
}
