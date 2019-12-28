/*design a class "Player" to manahe the information of football players
with data members playerid,name,no_matches_played and no. of goals scored
in each match*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

class Player
{
	int player_id,no_matches_played;
	int *no_goals_match ;
	/*dynamic array because each player has played diff no. of matches
	in his career*/
	char player_name[15];

	public:
		Player(int, char*,int);
		void display();
		~Player();
};

Player::Player(int id,char *name,int nom)
{
	player_id=id;
	strcpy(player_name,name);
	no_matches_played=nom;
	no_goals_match=new int[nom];
	cout<<"Enter the number of goals in "<<nom<<" matches:- "<<endl;
	for(int i=0;i<nom;i++)
		cin>>no_goals_match[i];
}

void Player::display()
{
	cout<<"Player id:- "<<player_id<<" ,Name:- "<<player_name<<
	"Matches played:- "<<no_matches_played<<endl;
	cout<<"Goal history:- ";
	int sum=0;
	for(int i=0;i<no_matches_played;i++)
	{
		cout<<no_goals_match[i]<<"    ";
		sum+=no_goals_match[i];
	}
	cout<<"\nAverage performace"<<(float)sum/no_matches_played<<endl;
}

void main()
{
	clrscr();
	//Player p;	//error,no default constructor
	/*the soln is not providing one because it will create player
	and since there is no accept(), how to modify setting*/
	//Player p1(10,Beckam,5);
	/*Program compiles burt will create an object with
	predefined settings and we want to accept data for n players.*/
	//Player arr[5];	//same error,no default constructor.

	int nop;
	cout<<"Enter no of players:- ";
	cin>>nop;
	//Player *arr;
	//arr=new Player[nop];
	//same error, no default constructor

	Player **arr;	//1st * indicates that it is a dynamic array
			//2nd * creates an array of pointer to player objects
	arr=new Player *[nop];
	int id,nom;
	char name[15];
	cout<<"Enter data for "<<nop<<" players:- "<<endl;
	for(int i=0;i<nop;i++)
	{
		cout<<"Enter playerno,name and no. of matches played:- ";
		cin>>id>>name>>nom;
		arr[i]=new Player(id,name,nom);
	}

	cout<<"Data of "<<nop<<" palyers is "<<endl;
	for(i=0;i<nop;i++)
		arr[i]->display();

	delete []arr;
	getch();
}

Player::~Player()
{
	delete []no_goals_match;
}


