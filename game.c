
//Saul Zuniga

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void gameroom19(void);


int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to the RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				puts("room1");
				break;
				cscuser1();
			}
			case 2:
			{
				puts("room2");
				dairasBrain();
				break;
			}
			case 3:
			{
				puts("room3");
				room3();
				break;
			}
			case 4:
			{
				puts("room4");
				joshRoom4();
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				room6game();
				break;
			}
			case 7:
			{
				puts("room7");
				cameronDOOMFn();
				break;
			}
			case 8:
			{
				puts("room8");
				room8game();
				break;
			}
			case 9:
			{
				puts("room9");
				amoralesRoom9();
				break;
			}
			case 10:
			{
				puts("room10");
				break;
			}
			case 11:
			{
				puts("room11");
				FarStarTrader();
				break;
			}
			case 12:
			{
				puts("room12");
				room12game();
				break;
			}
			case 13:
			{
				puts("room13");
				break;
			}
			case 14:
			{
				puts("room14");
				user14room();
				break;
			}
			case 15:
			{
				printf("\n\n\nWELCOME TO NICOLE'S ROOM 15!\n\n\n");
				room15game();
				break;
			}
			case 16:
			{
				room16game();
				break;
			}
			case 17:
			{
				puts("room17");
				room17();
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				gameroom19();
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				room22RandomTime();
				break;
			}
			case 23:
			{
				puts("room23");
				Function23fbabonjo();
				break;
			}
			case 24:
			{
				puts("room24");
				kobesRoom();
				break;
			}
			case 25:
			{
				puts("room25");
				room25game();
				break;
			}
			case 26:
			{
				puts("room26");
				angelasRoom26();
				break;
			}
			case 27:
			{
				puts("room27");
				lab13nanup();
				break;
			}
			case 28:
			{
				puts("room28");
				room28game();
				break;
			}
			case 29:
			{
				puts("room29");
				room29game();
				break;
			}
			case 30:
			{
				puts("room30");
				room30game();
				break;
			}
			case 31:
			{
				puts("room31");
				room31();
				break;
			}
			case 32:
			{
				puts("room32");
				break;
			}
			case 33:
			{
				puts("room33");
				stanleysRoom();
				break;
			}
			case 34:
			{
				puts("room35");
				room34game();
				break;
			}
			case 35:
                        {
                                puts("room35");
                                rayFunct();
				break;
                        }
			case 36:
                        {
                                puts("Entering Cafe 36! :)");
                                user36Cafe();
                                break;
                        }

			case 37:
			{
				puts("room37");
				PedroFunctionRoom();
				break;
			}
			case 38:
			{
				puts("room38");
				ryanRoom38();
				break;
			}
			case 39:
			{
				puts("room39");
				room39game();
				break;
			}
			case 40:
			{
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				gameFuncHenry41();
				break;
			}
			
			case 42:
                        {
                                break;
                        }


			case 43:
			{
				puts("room43");
				break;
			}
			case 44:
			{
				puts("room44");
				HubertRoom();
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				puts("room47");
				jessiesFunRoom();
				break;
			}
			case 48:
			{
				puts("room48");
				AzizHaouchineFn();
				break;
			}
			case 49:
			{
				puts("room49");
				vicCompRoom();
				break;
			}
			case 50:
			{

				break;	
			}
			case 51:
			{
				puts("room51");
				room51game();
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				room53game();
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}
			case 56:
			{
				puts("Entering Room 56...");
                		alexGameRoom56();
                		break;
			}
			case 59:
			{
				puts("room59");
				room59game();
				break;
			}


			case 57:
			{
				puts("room57");
				room57G(name);
				break;
			}


			case 58:
			{
				puts("room58");
				stevenFirst();
		
				break;
			}

			case 60:
			{
				puts("room60");
				carlosroom60();
				
				break;
			}


			case 61:
			{
				puts("room61");
				omarsUniqueFn();
				break;
			}



			case 62:
			{
				puts("room62");
				brentRoom();
				break;
			}

			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}
void gameroom19(void)
{
        int choice19;
        int move;
        int fight;
        int chest;
        int poke;
        printf("Welcome to the dungeon\n");
        printf("You awaken in a dimly light room, you see a big yellow rat as you approach it you see its a pikachu!\n");
        printf("You see pikachu is hurt, yoou check your pockets and find a super potion, ");
        printf("Do you 1. help pikachu, 2. attack the giant rat, 3. exit and go back to the main\n");
        scanf("%d", &choice19);

        switch(choice19)
        {
                case 1:
                        printf("You use your super potion and pikachu is thankful and decides to help you guide the dungeon\n");
                        printf("Pika pi, meaning i got you homie follow me\n");
                        printf("As you follow pikachu he leads you in a room with the boss MAgikarp. There is no way around him\n");
                        printf("WHat do you do?, 1.Fight the magikarp, or 2.Run around him\n");
                        scanf("%d", &fight);
                        if(fight == 1)
                        {
                                printf("A hud pops over pikachu with moves 1.Thunderbolt, 2.Quickattack 3.Iron tail 4.Rock Smash\n");
                                printf("pikachu awaits your command\n");
                                scanf("%d", &move);
                                switch(move){
                                        case 1:
                                                printf("Its super effective and magikarp faints\n");
                                                printf("Pikachu leads you further into the dungeon\n");
                                                break;
                                        case 2:
                                                printf("Pikachu launches himself at Magikarp\n");
                                                printf("Magikarp is unable to continue the battle\n");
                                                break;
                                        case 3:
                                                printf("Pikachu tail turn into iron smacking magikarp\n");
                                                printf("Magikarp head hurts and doesnt want to continue fighting and swims away\n");
                                                break;
                                        case 4:
                                                printf("Pikachu punches magikarp and the fish goes flying\n");
                                                printf("Pikachu is smug now and continues leading you out\n");
                                                break;
                                }


                        }
                        else
                        {
                                printf("Its a big fish... So yeah  he cant attack so you make it past him\n");
                        }

                        printf("As you and pikachu walk further into the dungeon you both find a ches\n");
                        printf("Do you open and risk another pokemon ambush, 1.Open the mysterious chest, 2. ignore the possible trap\n");
                        scanf("%d", &chest);

                        if(chest == 1)
                        {
                                printf("You open the chest...\n");
                                printf("You find a pokeball\nDO you take it with you in your journey\n");
                                printf("1.do you take it with you, 2. do you leave it\n");
                                scanf("%d", &poke);
                                if(poke == 1)
                                {
                                        printf("You add the pokeball into your inventory\n");
                                        printf("as you walk with pikachu you bond as you fight and make your way out the dungeon\n");
                                        printf("you make it to a large door, pikachu uses rocksmash to force th door open\n");
                                        printf("your journey has come to an end, you turn back and see pikachu wave goodbye\n");
                                        printf("You look at the pokeball in your pocket, do you catch pikachu and contiue your journey\n");
                                        printf("Yes you do you do not get a choice, you catch pikachu and your journey contunues\n");

                                }
                                else
                                {
                                        printf("Smarty pants, could have been a voltorb and iy was gam over\n");
                                        printf("YOur journey comes to and end as pikachu shows you the exit\n");
                                        printf("Pikachu opens the door for you, waves goodbye as you two bonded\n");
                                        printf("Too bad you didnt take the pokeball you could have caught pikachu. Hint Hint\n");

                                }
                        }
                        else
                        {
                                printf("you are a smarty pants, that chest couldve been a gimighoul\n");
                                printf("You tred foward seeing all sort of pokemons, after a few hours pikachu leads you to a large door\n");
                                printf("you did it, Pikachu uses iron tail to open the door for you\n");
                                printf("As you exit you look at pikachu, the doors slowly close as you stare at pikachus sad eyes\n");
                                printf("Pikachus only friend is leaving him, if only you had a pokeball\n");
                        }

                        break;
                case 2:
                        printf("pikachu is spooked and uses thunderbolt on you\n");
                        printf("Sorry you aint built like Ash, GAME OVER");
                        break;
                case 3:
                        printf("boo youre no fun bye");
                        break;
                default:
                        printf("Invalid choice");
                        break;
        }
}

	printf("Returning to the main hall...\n");
}

