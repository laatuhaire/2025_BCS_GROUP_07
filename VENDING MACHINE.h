#ifndef VENDING_MACHINE_H_INCLUDED
#define VENDING_MACHINE_H_INCLUDED
#ifndef VENDING_MACHINE_H_INCLUDED
#define VENDING_MACHINE_H_INCLUDED


// Constants for drink prices
#define COKE_PRICE 1500
#define PEPSI_PRICE 1000
#define SPRITE_PRICE 1500
#define FANTA_PRICE 1500
#define MIRINDA_PRICE 1000

// Denominations
#define NOTE_50000 50000
#define NOTE_20000 20000
#define NOTE_10000 10000
#define NOTE_5000 5000
#define NOTE_2000 2000
#define NOTE_1000 1000
#define COIN_500 500
#define COIN_200 200
#define COIN_100 100
#define COIN_50 50

// Function declarations
void display_menu();
int get_user_choice();
int get_drink_price(int choice);
void process_payment(int price);
void calculate_change(int change);
void show_machine_status();
void run_vending_machine();

// Displays the drink menu with prices and stock
void display_menu(void);

// Gets the user's drink selection (returns index or -1 if invalid)
int get_user_selection(void);

// Handles inserting money and returns the amount inserted
int get_user_credit(int price);

// Processes the transaction: checks payment, updates stock, dispenses drink
void process_transaction(int drink_index, int credit);

// Validates that input is within a valid integer range
int get_valid_integer_input(const char* prompt, int min, int max);

// Checks if selected drink is in stock
int is_in_stock(int drink_index);

// Reduces stock of the selected drink by 1
void update_stock(int drink_index);

// Returns the price of the selected drink
int get_price(int drink_index);

// Returns the name of the selected drink
const char* get_drink_name(int drink_index);






#endif // VENDING_MACHINE_H_INCLUDED


