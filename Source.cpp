/*

Name: Christohe Rurangwa
Date: 6/20/2020
Program Name: Daily Exercises
Description of what the program does:
The program suggest accurate exercises to target specific muscles in the body,
the end result is to improve mobility, strength and agility in the human body.

*/
#include<iostream>
#include<math.h>
#include<string>
#include<stdlib.h>

using namespace std;



/*
This part will display the menu the user can choose from,
and also, it will display the different exercise
based on the choice made by the user.
*/
int main() {

	string upperLimbs, upperLimbMuscles;
	string lowerLimbs, lowerLimbMucles;
	string chestMuscles, absMucles;
	string backMuscles;

	string lowerLimbExercise,
		upperLimbExercise,
		backExercise,
		abdominalExercises,
		chestExercise;

	string cardio;
	string name;

	int sets,
		reps,
		laps;


	int option;

	double minutes;
	char rest;
	const int MaxReps = 35;

	cout << " Welcome Please fill out Your full name below: \n\n";
	getline(cin, name);
	cout << name << " the adventure starts now!!! (:\n\n";

	string title = "\t\t\t----WELCOME TO YOUR DAILY EXERCISES----\n\n\nPlease select from the list below which part OR SYSTEM of the BODY you'll be WORK on TODAY?\n\n";

	cout << title;

	cout << " 1. Arms \n 2. Forearms \n 3. Shoulders \n 4. ABS \n 5. Back \n 6. Legs \n 7. Chest \n 8. CardioVascular System \n 9. Rest\n\n\n";
	cin >> option;

	cout << "You selected: " << option<<"\n";
	//option 1

	
	if (option == 1) {

		cout << " \t\t\t\tENTER NUMBER OF SETS: ";
		cin >> sets;
		cout << " \t\t\t\tENTER NUMBER OF REPS: ";
		cin >> reps;
		int totalReps = sets * reps;
		cout << "\t\t\t\tArms Day! \n\n\t\t\t\t(: \n\n";
		upperLimbExercise = "Biceps Curls";
		upperLimbMuscles = "Biceps and Triceps";

		cout << "Suggested Exercise: " << upperLimbExercise << "\n\n";

		cout << "You have " << sets << " sets and " << reps << " repetitons which totals " << totalReps << " repetitions.\n\n";
		cout << "\t\t\t\tMajor Muscle(s) targeted: " << upperLimbMuscles << "\n\n";
		if (totalReps > MaxReps) {

			cout << " You are above the normal range of reps.\n Normal Range: " << MaxReps << " repetions and below. \n\nPlease consult with your physician before continuing. \n\t\t\t\t\Thank you (: .\n";

		}
		else { cout << "\n \t\t\t\t\tSTART YOUR WORK-OUT NOW! \n\n\n"; }

	}

	//option 2

	else if (option == 2) {
		cout << " \t\t\t\tENTER NUMBER OF SETS: ";
		cin >> sets;
		cout << " \t\t\t\tENTER NUMBER OF REPS: ";
		cin >> reps;
		int totalReps = sets * reps;
		cout << "\t\t\t\tForeArms Day! \n\n\t\t\t\t\t\t(: \n\n";
		upperLimbExercise = "Dumbbell wrist flexion";
		upperLimbMuscles = "Flexor carpi radialis muscle";

		cout << "Suggested Exercise: " << upperLimbExercise << "\n\n";

		cout << "You have " << sets << " sets and " << reps << " repetitons which totals " << totalReps << " repetitions.\n\n";
		cout << "\t\t\t\tMajor Muscle(s) targeted: " << upperLimbMuscles << "\n\n";
		if (totalReps > MaxReps) {

			cout << " You are above the normal range of reps.\n Normal Range: " << MaxReps << " repetions and below. \n\nPlease consult with your physician before continuing. \n\t\t\t\t\Thank you (: .\n";

		}
		else { cout << "\n \t\t\t\t\tSTART YOUR WORK-OUT NOW! \n\n\n"; }

	}

	//option 3

	else if (option == 3) {
		cout << " \t\t\t\tENTER NUMBER OF SETS: ";
		cin >> sets;
		cout << " \t\t\t\tENTER NUMBER OF REPS: ";
		cin >> reps;
		int totalReps = sets * reps;
		cout << "\t\t\t\tShoulder Day! \n\n\t\t\t\t(: \n\n";
		upperLimbExercise = "Seated Dumbbell Shoulder Press";
		upperLimbMuscles = "Deltoid muscle and Teres Major";

		cout << "Suggested Exercise: " << upperLimbExercise << "\n\n";

		cout << "You have " << sets << " sets and " << reps << " repetitons which totals " << totalReps << " repetitions.\n\n";
		cout << "\t\t\t\tMajor Muscle(s) targeted: " << upperLimbMuscles << "\n\n";
		if (totalReps > MaxReps) {

			cout << " You are above the normal range of reps.\n Normal Range: " << MaxReps << " repetions and below. \n\nPlease consult with your physician before continuing. \n\t\t\t\t\Thank you (: .\n";

		}
		else { cout << "\n \t\t\t\t\tSTART YOUR WORK-OUT NOW! \n\n\n"; }

	}

	// option 4

	else if (option == 4) {
		cout << " \t\t\t\tENTER NUMBER OF SETS: ";
		cin >> sets;
		cout << " \t\t\t\tENTER NUMBER OF REPS: ";
		cin >> reps;
		int totalReps = sets * reps;
		cout << "\t\t\t\tAbs Day! \n\n\t\t\t\t(: \n\n";
		abdominalExercises = "Sit ups";
		absMucles = "Abdominal muscles";

		cout << "Suggested Exercise: " << abdominalExercises << "\n\n";

		cout << "You have " << sets << " sets and " << reps << " repetitons which totals " << totalReps << " repetitions.\n\n";
		cout << "\t\t\t\tMajor Muscle(s) targeted: " << absMucles << "\n\n";
		if (totalReps > MaxReps) {

			cout << " You are above the normal range of reps.\n Normal Range: " << MaxReps << " repetions and below. \n\nPlease consult with your physician before continuing. \n\t\t\t\t\Thank you (: .\n";

		}
		else { cout << "\n \t\t\t\t\tSTART YOUR WORK-OUT NOW! \n\n\n"; }

	}

	//option 5

	else if (option == 5) {
		cout << " \t\t\t\tENTER NUMBER OF SETS: ";
		cin >> sets;
		cout << " \t\t\t\tENTER NUMBER OF REPS: ";
		cin >> reps;
		int totalReps = sets * reps;
		cout << "\t\t\t\tBACK Day! \n\n\t\t\t\t(: \n\n";
		backExercise = "Lat pulldown";
		backMuscles = "Latissimus dorsi";

		cout << "Suggested Exercise: " << backExercise << "\n\n";

		cout << "You have " << sets << " sets and " << reps << " repetitons which totals " << totalReps << " repetitions.\n\n";
		cout << "\t\t\t\tMajor Muscle(s) targeted: " << backMuscles << "\n\n";
		if (totalReps > MaxReps) {

			cout << " You are above the normal range of reps.\n Normal Range: " << MaxReps << " repetions and below. \n\nPlease consult with your physician before continuing. \n\t\t\t\t\Thank you (: .\n";

		}

		else { cout << "\n \t\t\t\t\tSTART YOUR WORK-OUT NOW! \n\n\n"; }

	}
	//option 6

	else if (option == 6) {
		cout << " \t\t\t\tENTER NUMBER OF SETS: ";
		cin >> sets;
		cout << " \t\t\t\tENTER NUMBER OF REPS: ";
		cin >> reps;
		int totalReps = sets * reps;
		cout << "\t\t\t\tLEGS Day! \n\n\t\t\t\t(: \n\n";
		lowerLimbExercise = "Leg Press and Squats";
		lowerLimbMucles = "Hamstrings, Quadriceps and Calves";

		cout << "Suggested Exercise: " << lowerLimbExercise << "\n\n";

		cout << "You have " << sets << " sets and " << reps << " repetitons which totals " << totalReps << " repetitions.\n\n";
		cout << "\t\t\t\tMajor Muscle(s) targeted: " << lowerLimbMucles << "\n\n";
		if (totalReps > MaxReps) {

			cout << " You are above the normal range of reps.\n Normal Range: " << MaxReps << " repetions and below. \n\nPlease consult with your physician before continuing. \n\t\t\t\t\Thank you (: .\n";

		}

		else { cout << "\n \t\t\t\t\tSTART YOUR WORK-OUT NOW! \n\n\n"; }

	}

	//option 7

	else if (option == 7) {
	cout << " \t\t\t\tENTER NUMBER OF SETS: ";
	cin >> sets;
	cout << " \t\t\t\tENTER NUMBER OF REPS: ";
	cin >> reps;
	int totalReps = sets * reps;
	cout << "\t\t\t\t CHEST Day! \n\n\t\t\t\t(: \n\n";
	chestExercise = "Benc Press and Push-ups";
	chestMuscles = "Pectoral muscles";

	cout << "Suggested Exercise: " << chestExercise << "\n\n";

	cout << "You have " << sets << " sets and " << reps << " repetitons which totals " << totalReps << " repetitions.\n\n";
	cout << "\t\t\t\tMajor Muscle(s) targeted: " << chestMuscles << "\n\n";
	if (totalReps > MaxReps) {

		cout << " You are above the normal range of reps.\n Normal Range: " << MaxReps << " repetions and below. \n\nPlease consult with your physician before continuing. \n\t\t\t\t\Thank you (: .\n";

	}

	else { cout << "\n \t\t\t\t\tSTART YOUR WORK-OUT NOW! \n\n\n"; }

	}

	//option 8

	else if (option == 8) {
	cout << "CARDIO TIME! \n\n\n";
	cout << name << " get red for a run\n\n";
	laps = 3;
	minutes = rand()%3+16;
	double estimtDurati = minutes * laps;
	cout << " Today duration is: " << estimtDurati <<" minutes\n\n";

     }
	 //option 9
	else if (option == 9) {

	cout << "Press 'R' to REST: ";

	cin>>rest;
	
	if (rest == 'R') {
		minutes = 15;
		double dailyMinutes = rand() % 65+45;
		cout << "Rest for " << minutes << " minutes, then come back and pick up where you left.\n Remember exercise duration is " << dailyMinutes << "\n\n SEE YOU SOON!!!\n\n";

	}
	else cout << " Please select 'R'. ";
}

	else cout << " _____ PLEASE SELECT FROM THE GIVEN CHOICES. _____\n\n\n";






	return 0;
}