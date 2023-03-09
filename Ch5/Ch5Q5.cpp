#include <iostream>
using namespace std;

// Function to calculate calories from fat
int fatCalories(int fat_grams) {
    return fat_grams * 9;
}

// Function to calculate calories from carbs
int carbCalories(int carb_grams) {
    return carb_grams * 4;
}

int main2() {
    int fat_grams, carb_grams;
    cout << "Enter number of fat grams: ";
    cin >> fat_grams;
    cout << "Enter number of carbohydrate grams: ";
    cin >> carb_grams;

    // Calculate calories from fat and carbs using the functions
    int calories_from_fat = fatCalories(fat_grams);
    int calories_from_carbs = carbCalories(carb_grams);

    // Display the results
    cout << "Calories from fat: " << calories_from_fat << endl;
    cout << "Calories from carbs: " << calories_from_carbs << endl;

    return 0;
}
