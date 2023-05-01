#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int size = 100;
	const int size2 = 10;
	int roll[size];
	string student[size];
	string teacher[size];
	string password[size];
	string books[size2] = { "Hamlet \t", "Metamorphosis \t", "The Sun also Rises", "The great Gatsby", "Lord of the Flies", "Other Half lives", "Alchemist \t", "Great Expectation", "Stray kids: SCARS", "The Mocking bird" };
	string publisher[size2] = { "Simon & Schuster \t", "Kurt Wolff Verlag \t", "Macmillan \t\t", "Charles Scribner's Sons", "Graywolf Press \t", "Penguin Books \t\t", "HarperTorch \t\t", "Chapman & Hall \t", "3Racha \t\t", "J. B. Lippincott & Co. " };
	string author[size2] = { "William Shakespeare", "Franz Kafka \t", "Ernest Hemingway", "F. Scott Fitzgerald", "William Golding", "Jacob Riis \t", "Paulo Coelho \t", "Charles Dickens", "Bang Chan \t", "Harper Lee \t" };
	int edition[size2] = { 4, 2, 5, 1, 2, 7, 4, 1, 4, 2 };
	int copy[size2] = { 0 };
	int IBAN[size2] = { 0 };
	int price[size2] = { 0 };
	char gender[size];
	int age[size];
	int choice = 0, counter = 0, choice3 = 0, check = 0, choice5 = 0;
	char choice2, gend;
	int count = 0;

	for (int count = 0; count < size2; count++)
	{
		IBAN[count] = rand() % 10000;
	}
	for (int count = 0; count < size2; count++)
	{
		copy[count] = 7 + (rand() % 10);
	}
	for (int count = 0; count < size2; count++)
	{
		price[count] = rand() % 1000;
	}

	for (int i = 0; i < size2 - 1; i++)
	{
		for (int j = i + 1; j < size2; j++)
		{
			if (IBAN[i]>IBAN[j])
			{
				swap(IBAN[i], IBAN[j]);
			}
		}
	}

	do
	{
		do
		{
			cout << "******************************************************************************************************************************************************\n\n";
			cout << "                                                              LIBRARY MANAGEMENT SYSTEM                                                               \n\n";
			cout << "******************************************************************************************************************************************************\n\n";

			cout << "Select from the following: " << endl;
			cout << "1. Teacher" << endl;
			cout << "2. Student" << endl;
			cout << "0. Exit" << endl << endl;
			cout << "Enter you choice: "; cin >> choice;
			cout << endl;

			system("cls");

			if (choice < 0 || choice > 2)
			{
				cout << "INVALID INPUT \n\n";
			}

		} while (choice < 0 || choice > 2);


		switch (choice)
		{
		case 1:
		{
				  cout << "******************************************************************************************************************************************************\n\n";
				  cout << "                                                                  TEACHER LOGIN                                                                       \n\n";
				  cout << "******************************************************************************************************************************************************\n\n";
				  cout << "Enter your Username: ";		cin >> teacher[counter];
				  cout << "Enter your Password:";		cin >> password[counter];
				  system("cls");

				  cout << "******************************************************************************************************************************************************\n\n";
				  cout << "                                                                  TEACHER LOGIN                                                                       \n\n";
				  cout << "******************************************************************************************************************************************************\n\n";

				  do
				  {
					  cout << "Select any key to continue: " << endl;
					  cout << "1. List of all books" << endl;
					  cout << "2. Borrow a book " << endl;
					  cout << "3. Return a book " << endl << endl;
					  cout << "Enter your choice\n";
					  cin >> choice3;
					  system("cls");

					  if (choice3 <= 0 || choice3 > 3)
					  {
						  cout << "INVALID INPUT \n\n";
					  }
				  } while (choice3 <= 0 || choice3 > 3);

				  switch (choice3)
				  {
				  case 1:
				  {
							system("cls");
							cout << "Here's the List of Available Books: \n \n";
							cout << "IBAN \t ";
							cout << "Book \t\t\t ";
							cout << "Author \t\t\t ";
							cout << "Publisher \t\t\t ";
							cout << "Edition \t ";
							cout << "Copies \t ";
							cout << "Price \t \n\n";
							for (int count = 0; count < size2; count++)
							{
								cout << IBAN[count] << "\t ";
								cout << books[count] << "\t ";
								cout << author[count] << "\t\t ";
								cout << publisher[count] << "\t ";
								cout << edition[count] << "\t\t ";
								cout << copy[count] << "\t\t ";
								cout << price[count] << "\t \n\n";
							}
							cout << endl;
							break;
				  }
				  case 2:
				  {
							do
							{
								system("cls");
								cout << "Here's the List of Available Books: \n \n";
								cout << "IBAN \t ";
								cout << "Book \t\t\t ";
								cout << "Author \t\t\t ";
								cout << "Publisher \t\t\t ";
								cout << "Edition \t ";
								cout << "Copies \t ";
								cout << "Price \t \n\n";
								for (int count = 0; count < size2; count++)
								{
									cout << IBAN[count] << "\t ";
									cout << books[count] << "\t ";
									cout << author[count] << "\t\t ";
									cout << publisher[count] << "\t ";
									cout << edition[count] << "\t\t ";
									cout << copy[count] << "\t\t ";
									cout << price[count] << "\t \n\n\n";
								}

								cout << "Which book you want to borrow? " << endl << endl;
								cout << "Enter the IBAN number of the desired book : ";
								cin >> check;
								cout << endl;

								for (count = 0; count < size2; count++)
								{
									if (check == IBAN[count])
									{
										copy[count]--;
										break;
									}
								}

								if (count == size2)
								{
									cout << "NO BOOK FOUND WITH SUCH IBAN NUMBER \n\n";
								}

								else
								{
									cout << "YOU CAN TAKE THE BOOK FROM THE COUNTER! \n\n";
									cout << "The number of copies left for this book are : " << copy[count] << endl << endl;
								}
							} while (count == size2);

							break;
				  }

				  case 3:
				  {
							do
							{
								system("cls");
								cout << "Here's the List of Available Books: \n \n";
								cout << "IBAN \t ";
								cout << "Book \t\t\t ";
								cout << "Author \t\t\t ";
								cout << "Publisher \t\t\t ";
								cout << "Edition \t ";
								cout << "Copies \t ";
								cout << "Price \t \n\n";
								for (int count = 0; count < size2; count++)
								{
									cout << IBAN[count] << "\t ";
									cout << books[count] << "\t ";
									cout << author[count] << "\t\t ";
									cout << publisher[count] << "\t ";
									cout << edition[count] << "\t\t ";
									cout << copy[count] << "\t\t ";
									cout << price[count] << "\t \n\n\n";
								}

								cout << "Enter the IBAN number of book you want to return : ";
								cin >> check;
								cout << endl;

								count = 0;

								for (count = 0; count < size2; count++)
								{
									if (check == IBAN[count])
									{
										copy[count]++;
										break;
									}
								}

								if (count == size2)
								{
									cout << "THE BOOK IS NOT FROM OUR LIBRARY \n\n";
								}

								else
								{
									cout << "THANK YOU FOR RETURNING OUR BOOK \n\n";
									cout << "Now the number of copies of this book are : " << copy[count] << endl << endl;
								}
							} while (count == size2);

							break;
				  }
				  }
				  break;
		}
		case 2:
		{
				  cout << "******************************************************************************************************************************************************\n\n";
				  cout << "                                                                  STUDENT LOGIN                                                                       \n\n";
				  cout << "******************************************************************************************************************************************************\n\n";

				  cout << "Enter your Name: ";
				  cin.ignore();
				  getline(cin, student[counter]);
				  cout << "Enter your Rollnumber :"; cin >> roll[counter];
				  cout << "Enter your Age : "; cin >> age[counter];
				  cout << "Enter your Gender (M for Male/F for Female) : "; cin >> gender[counter];

				  if (gender[counter] == 'M' || gender[counter] == 'F')
				  {
					  system("cls");
				  }

				  else
				  {
					  do
					  {
						  cout << "INVAALID INPUT \n\n";
						  cout << "Enter Again" << endl;
						  cout << "Enter your Gender (M for Male/F for Female): "; cin >> gender[counter];
					  } while (gender[counter] == 'M' || gender[counter] == 'F');
				  }

				  system("cls");

				  cout << "******************************************************************************************************************************************************\n\n";
				  cout << "                                                                  STUDENT LOGIN                                                                       \n\n";
				  cout << "******************************************************************************************************************************************************\n\n";

				  do
				  {
					  cout << "Select any key to continue: " << endl;
					  cout << "1. List of all books" << endl;
					  cout << "2. Borrow a book " << endl;
					  cout << "3. Return a book" << endl;
					  cout << "Enter your choice\n";
					  cin >> choice5;
					  system("cls");

					  if (choice5 <= 0 || choice5 > 3)
					  {
						  cout << "INVALID INPUT \n\n";
					  }
				  } while (choice5 <= 0 || choice5 > 3);

				  switch (choice5)
				  {
				  case 1:
				  {
							system("cls");
							cout << "Here's the List of Available Books: \n \n";
							cout << "IBAN \t ";
							cout << "Book \t\t\t ";
							cout << "Author \t\t\t ";
							cout << "Publisher \t\t\t ";
							cout << "Edition \t ";
							cout << "Copies \t ";
							cout << "Price \t \n\n";
							for (int count = 0; count < size2; count++)
							{
								cout << IBAN[count] << "\t ";
								cout << books[count] << "\t ";
								cout << author[count] << "\t\t ";
								cout << publisher[count] << "\t ";
								cout << edition[count] << "\t\t ";
								cout << copy[count] << "\t\t ";
								cout << price[count] << "\t \n\n\n";
							}
							break;
				  }
				  case 2:
				  {
							do
							{
								system("cls");
								cout << "Here's the List of Available Books: \n \n";
								cout << "IBAN \t ";
								cout << "Book \t\t\t ";
								cout << "Author \t\t\t ";
								cout << "Publisher \t\t\t ";
								cout << "Edition \t ";
								cout << "Copies \t ";
								cout << "Price \t \n\n";
								for (int count = 0; count < size2; count++)
								{
									cout << IBAN[count] << "\t ";
									cout << books[count] << "\t ";
									cout << author[count] << "\t\t ";
									cout << publisher[count] << "\t ";
									cout << edition[count] << "\t\t ";
									cout << copy[count] << "\t\t ";
									cout << price[count] << "\t \n\n\n";
								}

								cout << "Which book you want to borrow? " << endl << endl;
								cout << "Enter the IBAN number of the desired book : ";
								cin >> check;

								count = 0;

								for (count = 0; count < size2; count++)
								{
									if (check == IBAN[count])
									{
										copy[count]--;
										break;
									}
								}

								if (count == size2)
								{
									cout << "NO BOOK FOUND WITH SUCH IBAN NUMBER \n\n";
								}

								else
								{
									cout << "YOU CAN TAKE THE BOOK FROM THE COUNTER! \n\n";
									cout << "The number of copies left for this book are : " << copy[count] << endl;
								}
							} while (count == size2);

							break;
				  }
				  case 3:
				  {
							do
							{
								system("cls");
								cout << "Here's the List of Available Books: \n \n";
								cout << "IBAN \t ";
								cout << "Book \t\t\t ";
								cout << "Author \t\t\t ";
								cout << "Publisher \t\t\t ";
								cout << "Edition \t ";
								cout << "Copies \t ";
								cout << "Price \t \n\n";
								for (int count = 0; count < size2; count++)
								{
									cout << IBAN[count] << "\t ";
									cout << books[count] << "\t ";
									cout << author[count] << "\t\t ";
									cout << publisher[count] << "\t ";
									cout << edition[count] << "\t\t ";
									cout << copy[count] << "\t\t ";
									cout << price[count] << "\t \n\n\n";
								}

								cout << "Enter the IBAN number of book you want to return : ";
								cin >> check;

								count = 0;

								for (count = 0; count < size2; count++)
								{
									if (check == IBAN[count])
									{
										copy[count]++;
										break;
									}
								}

								if (count == size2)
								{
									cout << "THE BOOK IS NOT FROM OUR LIBRARY \n\n";
								}

								else
								{
									cout << "THANK YOU FOR RETURNING OUR BOOK \n\n";
									cout << "Now the number of copies of this book are : " << copy[count] << endl;
								}
							} while (count == size2);

				  }
				  default:
					  cout << "INVALID INPUT";

				  }
				  break;
		}
		case 0:
		{
				  system("cls");
				  cout << "GOOD BYE! \n HAVE A GREAT TIME" << endl;
				  break;
		}
		default:
			cout << "INVALID INPUT \n\n";
			cin >> choice;
		}


		counter++;

		cout << "Press Y to get back to the menu: ";
		cin >> choice2;

		system("cls");

	} while (choice2 == 'y' || choice2 == 'Y');
	

		system("PAUSE");
		return 0;
	}