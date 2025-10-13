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
