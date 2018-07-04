#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>


//Triangle ASCII Function Prototypes
void RightTriangleASCII(void);
void OtherTriangleASCII(void);

//Triangle Code Function Prototypes
void OtherTriangleCode(void);
void RightTriangleCode(void);

//Right Triangle Side and Angle Calculations Function Prototypes
void RTCodeFor2Sides(void);
void RTCodeFor1Side1Angle(void);

//Isosceles Triangle Side and Angle Calculations Function Prototypes
void OTCodeFor3Sides(void);
void OTCodeFor1Side2Angle(void);

//Additional Triangle Function Prototypes
void TriangleInstructions(void);
float Angle_Calc(float, float);
float Side_Calc(float, float, float, float, float, float);
bool ErrorChecking(float, float, float);
void EndingMenu(void);

//Variable Declerations
float SideA, SideB, SideC, AngleA, AngleB, AngleC, Area;
bool RTTriangle = false, OTTriangle = false;

int main()
{
	RTTriangle = false;
	OTTriangle = false;

	int MenuAnswer;
	do
	{

	system("CLS");

	std::cout << "                  *                " << std::endl;
	std::cout << "                * * *              " << std::endl;
	std::cout << "               *  *  *             " << std::endl;
	std::cout << "              *___*___*            " << std::endl;
	std::cout << "             *    *    *           " << std::endl;
	std::cout << "            *     *     *          " << std::endl;
	std::cout << "           *      *      *         " << std::endl;
	std::cout << "          *       *       *        " << std::endl;
	std::cout << "         *        *        *       " << std::endl;
	std::cout << "        *         *         *      " << std::endl;
	std::cout << "       *          *          *     " << std::endl;
	std::cout << "      *           *           *    " << std::endl;
	std::cout << "     *            *            *   " << std::endl;
	std::cout << "    *_           _*_           _*  " << std::endl;
	std::cout << "   *  |         | * |         |  * " << std::endl;
	std::cout << "  * * * * * * * * * * * * * * * * *" << std::endl;

	std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	std::cout << "WELCOME TO THE TRIGONOMETRY CALCULATOR\n";
	std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

	std::cout << "ENTER THE TYPE OF TRIANGLE YOU WISH TO USE\n";
	std::cout << "(1) Right Angled Triangle\n";
	std::cout << "(2) Other Type of Triangle\n";
	std::cout << "(3) Instructions on Using the Triangle Calculator\n";
	std::cout << "(4) Exit Triangle Calculator\n";
	std::cin >> MenuAnswer;

	if(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4)
	{
		std::cout << "ERROR\n";
		std::cout << "Your answer must be 1, 2, 3 or 4!";
		std::cin.get();
		std::cin.get();
	}

	}while(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4);

	switch (MenuAnswer)
	{
	case 1:
		RightTriangleCode();
		break;

	case 2:
		OtherTriangleCode();
		break;

	case 3:
		TriangleInstructions();
		break;

	case 4:
		exit(0);
		break;
	}

	return 0;
}

//Triangle Code Functions
void RightTriangleCode(void)
{
	RTTriangle = true;

	AngleA = 90.0f;

	int MenuAnswer;

	do
	{
	system("CLS");

	RightTriangleASCII();

	std::cout << "\n";
	std::cout << "CHOOSE EITHER 2 SIDES OR 1 SIDE AND 1 ANGLE\n";
	std::cout << "(1) 2 Sides\n";
	std::cout << "(2) 1 Side and 1 Angles\n";
	std::cout << "(3) Back to menu\n";
	std::cout << "(4) Exit\n";
	std::cin >> MenuAnswer;


	if(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4)
	{
		std::cout << "ERROR\n";
		std::cout << "Your answer must be 1, 2, 3 or 4!";
		std::cin.get();
		std::cin.get();
	}

	}while(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4);

	switch (MenuAnswer)
	{
	case 1:
		RTCodeFor2Sides();
		break;

	case 2:
		RTCodeFor1Side1Angle();
		break;

	case 3:
		main();
		break;

	case 4:
		CloseWindow;
		break;
	}

	
}
void OtherTriangleCode(void)
{
	int MenuAnswer;

	OTTriangle = true;

	do
	{
	system("CLS");

	OtherTriangleASCII();

	std::cout << "\n";
	std::cout << "CHOOSE EITHER 3 SIDES OR 1 SIDE AND 2 ANGLES\n";
	std::cout << "(1) 3 Sides\n";
	std::cout << "(2) 1 Side and 2 Angles\n";
	std::cout << "(3) Back to menu\n";
	std::cout << "(4) Exit\n";
	std::cin >> MenuAnswer;

	if(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4)
	{
		std::cout << "ERROR\n";
		std::cout << "Your answer must be 1, 2, 3 or 4!";
		std::cin.get();
		std::cin.get();
	}

	}while(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4);

	switch (MenuAnswer)
	{
	case 1:
		OTCodeFor3Sides();
		break;

	case 2:
		OTCodeFor1Side2Angle();
		break;

	case 3:
		main();
		break;

	case 4:
		exit(0);
		break;
	}

}

//Right Triangle Side and Angle Calculations Functions
void RTCodeFor2Sides(void)
{

	int MenuAnswer;
	bool Valid;

	do
	{
	system("CLS");

	RightTriangleASCII();

	std::cout << "\n";
	std::cout << "CHOOSE THE SIDES YOU ARE USING\n";
	std::cout << "(1) Side A and Side B\n";
	std::cout << "(2) Side A and Side C\n";
	std::cout << "(3) Side B and Side C\n";
	std::cin >> MenuAnswer;

	if(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3)
	{
		std::cout << "ERROR\n";
		std::cout << "Your answer must be 1, 2 or 3!";
		std::cin.get();
		std::cin.get();
	}

	}while(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3);

		switch (MenuAnswer)
		{
		case 1: 
			do
			{


				std::cout << "Side A: ";
				std::cin >> SideA;
				std::cout << "Side B: ";
				std::cin >> SideB;
				
				if(SideA < SideB)
				{
					std::cout << "\n";
					std::cout << "-------------------------------------------\n";
					std::cout << "-------------------ERROR-------------------\n";
					std::cout << "-------------------------------------------\n";
					std::cout << "Side A (Hypotenuse) Must be the larger side\n";
					std::cout << "\n";
				}

			}while(SideA < SideB);

				SideC = sqrt((pow(SideA, 2) - pow(SideB, 2)));

				AngleB = Angle_Calc(SideA, SideB);
				AngleC = Angle_Calc(SideA, SideC);
			
			break;

		case 2:

			do
			{

				std::cout << "Side A: ";
				std::cin >> SideA;
				std::cout << "Side C: ";
				std::cin >> SideC;

				if(SideA < SideC)
				{
					std::cout << "\n";
					std::cout << "-------------------------------------------\n";
					std::cout << "-------------------ERROR-------------------\n";
					std::cout << "-------------------------------------------\n";
					std::cout << "Side A (Hypotenuse) Must be the larger side\n";
					std::cout << "\n";
				}

			}while(SideA < SideC);

				SideB = sqrt((pow(SideA, 2) - pow(SideC, 2)));

				AngleB = Angle_Calc(SideA, SideB);
				AngleC = Angle_Calc(SideA, SideC);

			break;

		case 3:

				std::cout << "Side B: ";
				std::cin >> SideB;
				std::cout << "Side C: ";
				std::cin >> SideC;
			

			SideA = sqrt((pow(SideB, 2) + pow(SideC, 2)));

			AngleB = Angle_Calc(SideA, SideB);
			AngleC = Angle_Calc(SideA, SideC);
			break;
		}

		Area = 0.5 * SideB * SideC;

		system("CLS");

			RightTriangleASCII();

			std::cout << "\n";
			std::cout << "Side A: " << SideA << std::endl;
			std::cout << "Side B: " << SideB << std::endl;
			std::cout << "Side C: " << SideC << std::endl;
			std::cout << "Angle A: " << AngleA << std::endl;
			std::cout << "Angle B: " << AngleB << std::endl;
			std::cout << "Angle C: " << AngleC << std::endl;
			std::cout << "Area of triangle: " << Area << std::endl;

			std::cin.get();
			std::cin.get();

			EndingMenu();
}
void RTCodeFor1Side1Angle(void)
{
	int MenuAnswer;
	bool Valid;

	do
	{
	system("CLS");

	RightTriangleASCII();

	std::cout << "\n";
	std::cout << "CHOOSE THE ANGLE AND SIDE YOU ARE USING\n";
	std::cout << "(1) Angles B and Side A\n";
	std::cout << "(2) Angles B and Side B\n";
	std::cout << "(3) Angles B and Side C\n";
	std::cout << "(4) Angles C and Side A\n";
	std::cout << "(5) Angles C and Side B\n";
	std::cout << "(6) Angles C and Side C\n";
	std::cin >> MenuAnswer;

	if(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4 && MenuAnswer != 5 && MenuAnswer != 6)
	{
		std::cout << "ERROR\n";
		std::cout << "Your answer must be 1, 2, 3, 4, 5 or 6!";
		std::cin.get();
		std::cin.get();
	}

	}while(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4 && MenuAnswer != 5 && MenuAnswer != 6);

		switch (MenuAnswer)
		{		
			float RadianAngle;

		case 1:

			do
			{

				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Side A: ";
				std::cin >> SideA;
			
				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			

			RadianAngle = (AngleB * 3.141592653589793238462) / 180;

			SideB = SideA * sin(RadianAngle);
			SideC = sqrt((pow(SideA,2)-pow(SideB,2)));

			AngleC = 180 - (AngleA + AngleB);

			break;

		case 2:	
			do
			{

				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Side B: ";
				std::cin >> SideB;
			
				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			RadianAngle = (AngleB * 3.141592653589793238462) / 180;

			SideA = SideB / sin(RadianAngle);
			
			SideC = sqrt((pow(SideA,2)-pow(SideB,2)));

			AngleC = 180 - (AngleA + AngleB);

			break;

		case 3:

			do
			{

				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Side C: ";
				std::cin >> SideC;
			
				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			RadianAngle = (AngleB * 3.141592653589793238462) / 180;

			SideA = SideC / cos(RadianAngle);
			SideB = sqrt((pow(SideA,2)-pow(SideC,2)));

			AngleC = 180 - (AngleA + AngleB);

			break;

		case 4:

			do
			{

				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side A: ";
				std::cin >> SideA;
			
				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			RadianAngle = (AngleC * 3.141592653589793238462) / 180;

			SideB = SideA * cos(RadianAngle);
			SideC = sqrt((pow(SideA,2)-pow(SideB,2)));

			AngleB = 180 - (AngleA + AngleC);

			break;

		case 5:

			do
			{

				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side B: ";
				std::cin >> SideB;
			
				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			RadianAngle = (AngleC * 3.141592653589793238462) / 180;

			SideA = SideB / cos(RadianAngle);
			SideC = sqrt((pow(SideA,2)-pow(SideB,2)));

			AngleB = 180 - (AngleA + AngleC);

			break;

		case 6:

			do
			{

				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side C: ";
				std::cin >> SideC;
			
				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			RadianAngle = (AngleC * 3.141592653589793238462) / 180;

			SideA = SideC / cos(RadianAngle);
			SideB = sqrt((pow(SideA,2)-pow(SideC,2)));

			AngleB = 180 - (AngleA + AngleC);

			break;
		}

	system("CLS");

	Area = 0.5 * SideB * SideC;

	RightTriangleASCII();

	std::cout << "\n";
	std::cout << "Side A: " << SideA << std::endl;
	std::cout << "Side B: " << SideB << std::endl;
	std::cout << "Side C: " << SideC << std::endl;
	std::cout << "Angle A: " << AngleA << std::endl;
	std::cout << "Angle B: " << AngleB << std::endl;
	std::cout << "Angle C: " << AngleC << std::endl;
	std::cout << "Area of triangle: " << Area << std::endl;

	std::cin.get();
	std::cin.get();

	EndingMenu();

}

//Isosceles Triangle Side and Angle Calculations Functions
void OTCodeFor3Sides(void)
{

float Height;
int MenuAnswer;

	system("CLS");

	OtherTriangleASCII();

	std::cout << "\n";
	std::cout << "ENTER THE VALUES FOR EACH SIDE\n";
	std::cout << "Side A: ";
	std::cin >> SideA;
	std::cout << "Side B: ";
	std::cin >> SideB;
	std::cout << "Side C: ";
	std::cin >> SideC;

			Height = sqrt((pow(SideC,2) - pow((0.5*SideA),2)));

			AngleB = Angle_Calc(SideC, Height);

			AngleC = Angle_Calc(SideB, Height);
			
			AngleA = 180 - (AngleB + AngleC);

			Area = 0.5 * SideA * Height;

			system("CLS");

			OtherTriangleASCII();

			std::cout << "\n";
			std::cout << "\n";
			std::cout << "Side A: " << SideA << std::endl;
			std::cout << "Side B: " << SideB << std::endl;
			std::cout << "Side C: " << SideC << std::endl;
			std::cout << "Angle A: " << AngleA << std::endl;
			std::cout << "Angle B: " << AngleB << std::endl;
			std::cout << "Angle C: " << AngleC << std::endl;
			std::cout << "Area of triangle: " << Area << std::endl;

			std::cin.get();
			std::cin.get();

			EndingMenu();
			
}
void OTCodeFor1Side2Angle(void)
{
	int MenuAnswer;
	float Height;
	float RadianAngleA, RadianAngleB, RadianAngleC;
	bool Valid;

	do
	{
	system("CLS");

	OtherTriangleASCII();

	std::cout << "\n";
	std::cout << "ENTER WHICH SIDE AND WHICH 2 ANGLES YOU ARE USING\n";
	std::cout << "(1) Angles A and B and Side A\n";
	std::cout << "(2) Angles A and B and Side B\n";
	std::cout << "(3) Angles A and B and Side C\n";
	std::cout << "(4) Angles A and C and Side A\n"; 
	std::cout << "(5) Angles A and C and Side B\n";
	std::cout << "(6) Angles A and C and Side C\n";
	std::cout << "(7) Angles B and C and Side A\n";
	std::cout << "(8) Angles B and C and Side B\n";
	std::cout << "(9) Angles B and C and Side C\n";
	std::cin >> MenuAnswer;

		if(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4 && MenuAnswer != 5 && MenuAnswer != 6 && MenuAnswer != 7 && MenuAnswer != 8 && MenuAnswer != 9)
	{
		std::cout << "ERROR\n";
		std::cout << "Your answer must be 1, 2, 3, 4, 5, 6, 7, 8 or 9!";
		std::cin.get();
		std::cin.get();
	}

	}while(MenuAnswer != 1 && MenuAnswer != 2 && MenuAnswer != 3 && MenuAnswer != 4 && MenuAnswer != 5 && MenuAnswer != 6 && MenuAnswer != 7 && MenuAnswer != 8 && MenuAnswer != 9);

		switch (MenuAnswer)
		{		
		case 1:

			do
			{

				std::cout << "Angle A: ";
				std::cin >> AngleA;
				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Side A: ";
				std::cin >> SideA;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleC = 180 - (AngleA + AngleB);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideB = (SideA * sin(RadianAngleB)) / sin(RadianAngleA);

			SideC = (SideA * sin(RadianAngleC)) / sin(RadianAngleA);

			break;

		case 2:

			do
			{

				std::cout << "Angle A: ";
				std::cin >> AngleA;
				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Side B: ";
				std::cin >> SideB;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleC = 180 - (AngleA + AngleB);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideA = (SideB * sin(RadianAngleA)) / sin(RadianAngleB);

			SideC = (SideB * sin(RadianAngleC)) / sin(RadianAngleB);

			break;

		case 3:

			do
			{

				std::cout << "Angle A: ";
				std::cin >> AngleA;
				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Side C: ";
				std::cin >> SideC;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleC = 180 - (AngleA + AngleB);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideA = (SideC * sin(RadianAngleA)) / sin(RadianAngleC);

			SideB = (SideC * sin(RadianAngleB)) / sin(RadianAngleC);

			break;

		case 4:
			
			do
			{

				std::cout << "Angle A: ";
				std::cin >> AngleA;
				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side A: ";
				std::cin >> SideA;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleB = 180 - (AngleA + AngleC);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideB = (SideA * sin(RadianAngleB)) / sin(RadianAngleA);

			SideC = (SideB * sin(RadianAngleC)) / sin(RadianAngleB);

			break;

		case 5:

			do
			{

				std::cout << "Angle A: ";
				std::cin >> AngleA;
				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side B: ";
				std::cin >> SideB;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleB = 180 - (AngleA + AngleC);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideA = (SideB * sin(RadianAngleA)) / sin(RadianAngleB);

			SideC = (SideB * sin(RadianAngleC)) / sin(RadianAngleB);

			break;

		case 6:

			do
			{

				std::cout << "Angle A: ";
				std::cin >> AngleA;
				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side C: ";
				std::cin >> SideC;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleB = 180 - (AngleA + AngleC);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideA = (SideC * sin(RadianAngleA)) / sin(RadianAngleC);

			SideB = (SideC * sin(RadianAngleB)) / sin(RadianAngleC);

			break;

		case 7:

			do
			{

				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side A: ";
				std::cin >> SideA;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleA = 180 - (AngleA + AngleC);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideB = (SideA * sin(RadianAngleB)) / sin(RadianAngleA);

			SideC = (SideB * sin(RadianAngleC)) / sin(RadianAngleB);

			break;

		case 8:

			do
			{

				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side B: ";
				std::cin >> SideB;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleA = 180 - (AngleA + AngleC);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideA = (SideB * sin(RadianAngleA)) / sin(RadianAngleB);

			SideC = (SideB * sin(RadianAngleC)) / sin(RadianAngleB);

			break;

		case 9:

			do
			{

				std::cout << "Angle B: ";
				std::cin >> AngleB;
				std::cout << "Angle C: ";
				std::cin >> AngleC;
				std::cout << "Side C: ";
				std::cin >> SideC;

				Valid = ErrorChecking(AngleA, AngleB, AngleC);

			}while (Valid == false);

			AngleA = 180 - (AngleA + AngleC);

			RadianAngleA = (AngleA * 3.141592653589793238462) / 180;

			RadianAngleB = (AngleB * 3.141592653589793238462) / 180;

			RadianAngleC = (AngleC * 3.141592653589793238462) / 180;

			SideA = (SideC * sin(RadianAngleA)) / sin(RadianAngleC);

			SideB = (SideC * sin(RadianAngleB)) / sin(RadianAngleC);

			break;
		}

		Area = 0.5 * SideA * SideB * sin(RadianAngleC);

		std::cout << "Side A: " << SideA << std::endl;
		std::cout << "Side B: " << SideB << std::endl;
		std::cout << "Side C: " << SideC << std::endl;
		std::cout << "Angle A: " << AngleA << std::endl;
		std::cout << "Angle B: " << AngleB << std::endl;
		std::cout << "Angle C: " << AngleC << std::endl;
		std::cout << "Area of triangle: " << Area << std::endl;

		std::cin.get();
		std::cin.get();

		EndingMenu();

}

//Additional Triangle Functions
void TriangleInstructions(void)
{
	int MenuAnswer;

	std::cout << "ENTER WHICH PART OF THE PROGRAM YOU WOULD LIKE HELP WITH\n";
	std::cout << "(1) Right Angled Triangles\n";
	std::cout << "(2) Other Types of Triangles\n";
	std::cout << "(3) Go Back to Menu\n";
	std::cin >> MenuAnswer;

	switch (MenuAnswer)
	{
	case 1:

		break;

	}
}
float Angle_Calc(float Hyp, float Opp)
{
	float Angle;

	Angle = asin(Opp/Hyp);

	std::cout << Angle << std::endl;

	Angle = (180.0 * Angle) / 3.141592653589793238462;

	std::cout << Angle << std::endl;

	return Angle;
}
float Side_Calc(float AngA, float AngB, float AngC, float SidA, float SidB, float SidC)
{
	AngA = (AngleA * 3.141592653589793238462) / 180;

	AngB = (AngleB * 3.141592653589793238462) / 180;

	AngC = (AngleC * 3.141592653589793238462) / 180;

	if (SidA != 0)
	{
		SidB = (SidA * sin(AngB)) / sin(AngA);

		SidC = (SidB * sin(AngC)) / sin(AngB);
	}

	if (SidB != 0)
	{
		SidA = (SidB * sin(AngA)) / sin(AngB);

		SidC = (SidB * sin(AngC)) / sin(AngB);
	}

	if (SidC != 0)
	{
		SidA = (SidC * sin(AngA)) / sin(AngC);

		SidB = (SidC * sin(AngB)) / sin(AngC);
	}

	return AngB;

}
bool ErrorChecking(float A, float B, float C)
{
	bool Valid;

	Valid = true;

	system("CLS");

	if (RTTriangle == false)
	{

	if (AngleA >= 180)
	{
		std::cout << "\n";
		std::cout << "-----------------------------\n";
		std::cout << "------------ERROR------------\n";
		std::cout << "-----------------------------\n";
		std::cout << "Angle A must be less than 180\n";
		std::cout << "\n";

		std::cin.get();
		std::cin.get();

		Valid = false;
	}

	}

	if (AngleB >= 180)
	{
		std::cout << "\n";
		std::cout << "-----------------------------\n";
		std::cout << "------------ERROR------------\n";
		std::cout << "-----------------------------\n";
		std::cout << "Angle B must be less than 90 \n";
		std::cout << "\n";

		std::cin.get();
		std::cin.get();

		Valid = false;
	}

	if (AngleC >= 180)
	{
		std::cout << "\n";
		std::cout << "-----------------------------\n";
		std::cout << "------------ERROR------------\n";
		std::cout << "-----------------------------\n";
		std::cout << "Angle C must be less than 90 \n";
		std::cout << "\n";

		std::cin.get();
		std::cin.get();

		Valid = false;
	}

	if ((AngleA + AngleB) >= 180)
	{
		std::cout << "\n";
		std::cout << "---------------------------------\n";
		std::cout << "--------------ERROR--------------\n";
		std::cout << "---------------------------------\n";
		std::cout << "2 Angles must equal less than 180\n";
		std::cout << "\n";

		std::cin.get();
		std::cin.get();

		Valid = false;
	}
	if ((AngleA + AngleC) >= 180)
	{
		std::cout << "\n";
		std::cout << "---------------------------------\n";
		std::cout << "--------------ERROR--------------\n";
		std::cout << "---------------------------------\n";
		std::cout << "2 Angles must equal less than 180\n";
		std::cout << "\n";

		std::cin.get();
		std::cin.get();

		Valid = false;
	}
	if ((AngleB + AngleC) >= 180)
	{
		std::cout << "\n";
		std::cout << "---------------------------------\n";
		std::cout << "--------------ERROR--------------\n";
		std::cout << "---------------------------------\n";
		std::cout << "2 Angles must equal less than 180\n";
		std::cout << "\n";

		std::cin.get();
		std::cin.get();

		Valid = false;
	}

	system("CLS");

	if (RTTriangle == true)
	{
		RightTriangleASCII;
	}
	if (OTTriangle == true)
	{
		OtherTriangleASCII;
	}
	return Valid;
}
void EndingMenu(void)
{
	int MenuAnswer;

	do
			{

				std::cout << "WHAT WOULD YOU LIKE TO DO NOW?\n";
				std::cout << "(1) Go back to Main Menu\n";
				std::cout << "(2) Exit program\n";
				std::cin >> MenuAnswer;


				if(MenuAnswer != 1 && MenuAnswer != 2)
				{
					std::cout << "ERROR\n";
					std::cout << "Your answer must be 1 or 2!";
					std::cin.get();
					std::cin.get();
				}

			}while(MenuAnswer != 1 && MenuAnswer != 2);

			switch (MenuAnswer)
			{
			case 1:
				main();
				break;

			case 2:
				exit(0);
				break;

			}
}

//Triangle ASCII Functions
void RightTriangleASCII(void)
{
	std::cout << "                *  " << std::endl;
	std::cout << "              * *  " << std::endl;
	std::cout << "             *B *  " << std::endl;
	std::cout << "            *__ *  " << std::endl;
	std::cout << "           *    *  " << std::endl;
	std::cout << "          *     *  " << std::endl;
	std::cout << "         *      *  " << std::endl;
	std::cout << "        *       *  " << std::endl;
	std::cout << "    A  *        * C" << std::endl;
	std::cout << "      *         *  " << std::endl;
	std::cout << "     *          *  " << std::endl;
	std::cout << "    *           *  " << std::endl;
	std::cout << "   *            *  " << std::endl;
	std::cout << "  *_           _*  " << std::endl;
	std::cout << " *C |         |A*  " << std::endl;
	std::cout << "* * * * * * * * *   " << std::endl;
	std::cout << "        B         " << std::endl;
}
void OtherTriangleASCII(void)
{
	std::cout << "             *             " << std::endl;
	std::cout << "            * *            " << std::endl;
	std::cout << "           *_A_*           " << std::endl;
	std::cout << "          *     *          " << std::endl;
	std::cout << "         *       *         " << std::endl;
	std::cout << "        *         *        " << std::endl;
	std::cout << "       *           *       " << std::endl;
	std::cout << "    B *             * C    " << std::endl;
	std::cout << "     *               *     " << std::endl;
	std::cout << "    *                 *    " << std::endl;
	std::cout << "   *                   *   " << std::endl;
	std::cout << "  *_                   _*  " << std::endl;
	std::cout << " * C|                 |B * " << std::endl;
	std::cout << "* * * * * * * * * * * * * *" << std::endl;
	std::cout << "            A              " << std::endl;
}