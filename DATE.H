class Date
{
	int dd,mm,yyyy;

	public:
		void accept()
		{
			cin>>dd>>mm>>yyyy;
		}
		void display()
		{
			cout<<dd<<"/"<<mm<<"/"<<yyyy;
		}
};