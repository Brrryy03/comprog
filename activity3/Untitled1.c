#include <stdio.h>

int main() {
    // Prices of each item
    const float TV_PRICE = 400.00;
    const float VCR_PRICE = 220.00;
    const float REMOTE_PRICE = 35.20;
    const float CD_PLAYER_PRICE = 300.00;
    const float TAPE_RECORDER_PRICE = 150.00;

    // Quantities of each item
    int tv_qty, vcr_qty, remote_qty, cd_player_qty, tape_rec_qty;

    // Prompt user to input quantities
    printf("Enter the quantity of TVs: ");
    scanf("%d", &tv_qty);

    printf("Enter the quantity of VCRs: ");
    scanf("%d", &vcr_qty);

    printf("Enter the quantity of Remote Controllers: ");
    scanf("%d", &remote_qty);

    printf("Enter the quantity of CD Players: ");
    scanf("%d", &cd_player_qty);

    printf("Enter the quantity of Tape Recorders: ");
    scanf("%d", &tape_rec_qty);

    // Calculate costs
    float tv_total = tv_qty * TV_PRICE;
    float vcr_total = vcr_qty * VCR_PRICE;
    float remote_total = remote_qty * REMOTE_PRICE;
    float cd_player_total = cd_player_qty * CD_PLAYER_PRICE;
    float tape_rec_total = tape_rec_qty * TAPE_RECORDER_PRICE;

    // Calculate subtotal
    float subtotal = tv_total + vcr_total + remote_total + cd_player_total + tape_rec_total;

    // Calculate sales tax and total
    float sales_tax = subtotal * 0.0825;
    float total = subtotal + sales_tax;

    // Print bill
    printf("\n--- Customer's Bill ---\n");
    printf("TVs               : %d x $400.00 = $%.2f\n", tv_qty, tv_total);
    printf("VCRs              : %d x $220.00 = $%.2f\n", vcr_qty, vcr_total);
    printf("Remote Controllers: %d x $35.20  = $%.2f\n", remote_qty, remote_total);
    printf("CD Players        : %d x $300.00 = $%.2f\n", cd_player_qty, cd_player_total);
    printf("Tape Recorders    : %d x $150.00 = $%.2f\n", tape_rec_qty, tape_rec_total);
    printf("------------------------------\n");
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Sales Tax (8.25%%): $%.2f\n", sales_tax);
    printf("Total    : $%.2f\n", total);

    return 0;
}
